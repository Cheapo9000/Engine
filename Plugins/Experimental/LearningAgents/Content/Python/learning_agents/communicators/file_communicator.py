# -*- coding: utf-8 -*-
'''
Copyright Epic Games, Inc. All Rights Reserved.
'''

import logging
import json
from collections import OrderedDict
from typing import Dict, List
import os 
import re 
from abc import ABC, abstractmethod

from smart_open import open, parse_uri
import boto3

import torch
import numpy as np

from learning_agents.train_common import AbstractCommunicator
from learning_agents.train_common import UE_LEARNING_DEVELOPMENT, UE_RESPONSE_SUCCESS
from learning_agents.train_common import build_network, load_snapshot_from_file

logger = logging.getLogger("LearningAgents")


class FileManager(ABC):
    def __init__(self, data_config_path: str, trainer_config_path: str, network_dir: str, replay_dir: str):      
        self.data_config_path = data_config_path
        self.trainer_config_path = trainer_config_path
        self.network_dir = network_dir
        self.replay_dir = replay_dir
            
    @abstractmethod
    def list_networks(self) -> List[tuple[str, str]]: # filename, filepath
        pass
    
    @abstractmethod
    def list_replays(self) -> List[tuple[str, str]]: # filename, filepath
        pass
    
    
class FileManagerOS(FileManager):
    def __init__(self, data_config_path, trainer_config_path, network_dir, replay_dir):      
        super().__init__(data_config_path, trainer_config_path, network_dir, replay_dir)  
    
    def _list_dir(self, dir) -> List[tuple[str, str]]: 
        return [(file, os.path.join(dir, file)) for file in os.listdir(dir) if os.path.isfile(os.path.join(dir, file))]

    def list_networks(self) -> List[tuple[str, str]]: # filename, filepath
        return self._list_dir(self.network_dir)
        
    def list_replays(self) -> List[tuple[str, str]]: # filename, filepath
        return self._list_dir(self.replay_dir)


class FileManagerS3(FileManager):
    def __init__(self, data_config_path, trainer_config_path, network_dir, replay_dir):      
        super().__init__(data_config_path, trainer_config_path, network_dir, replay_dir) 
        self.s3 = boto3.client("s3")
    
    def _list_dir(self, bucket: str, dir_prefix: str) -> List[tuple[str, str]]: 
        response = self.s3.list_objects_v2(Bucket=bucket, Prefix=dir_prefix)
        files = []
        for obj in response.get("Contents", []):
            key = obj["Key"]
            if key.endswith("/"):
                continue
            file_name = os.path.basename(key)
            full_path = f"s3://{bucket}/{key}"
            files.append((file_name, full_path))
        return files
    
    def list_networks(self) -> List[tuple[str, str]]: # filename, filepath
        parsed = parse_uri(self.network_dir)
        return self._list_dir(parsed.bucket_id, parsed.key_id)
    
    def list_replays(self) -> List[tuple[str, str]]: # filename, filepath
        parsed = parse_uri(self.replay_dir)
        return self._list_dir(parsed.bucket_id, parsed.key_id)


class FileReplayBuffer:

    def __init__(self, config):

        self.max_episode_num = int(config['MaxEpisodeNum'])
        self.max_step_num = int(config['MaxStepNum'])

        self.observation_nums = []
        self.observation_next_buffers = []
        for observation_config in config['Observations']:
            observation_num = int(observation_config['VectorDimensionNum'])
            self.observation_nums.append(observation_num)

        self.action_nums = []
        for action_config in config['Actions']:
            action_num = int(action_config['VectorDimensionNum'])
            self.action_nums.append(action_num)

def bin_read_exact(f, nbytes: int) -> bytes:
    buf = bytearray(nbytes)
    bufview = memoryview(buf)
    read = 0
    while read < nbytes:
        n = f.readinto(bufview[read:])
        if not n:
            raise EOFError(f"Unexpected EOF (wanted {nbytes} bytes, got {read})")
        read += n
    return bytes(buf)
    
def load_experience_behavior_cloning(
    file_name: str,
    replay_buffer_id: int,
    replay_buffer: FileReplayBuffer)-> Dict[str, np.ndarray]:
    
    with open(file_name, "rb") as bin:
        observation_num = replay_buffer.observation_nums[0]
        action_num = replay_buffer.action_nums[0]
        
        id = int.from_bytes(bin_read_exact(bin, 4), byteorder='little')
        assert id == replay_buffer_id  

        episode_num = int.from_bytes(bin_read_exact(bin, 4), byteorder='little')
        step_num    = int.from_bytes(bin_read_exact(bin, 4), byteorder='little')
        assert episode_num > 0 and step_num > 0

        episode_starts = np.frombuffer(bin_read_exact(bin, episode_num * np.dtype(np.int32).itemsize), dtype=np.int32, count=episode_num).copy()
        episode_lengths = np.frombuffer(bin_read_exact(bin, episode_num * np.dtype(np.int32).itemsize), dtype=np.int32, count=episode_num).copy()
        
        observations = np.frombuffer(bin_read_exact(bin, step_num * observation_num * np.dtype(np.int32).itemsize), dtype=np.float32).reshape([step_num, observation_num]).copy()
        actions = np.frombuffer(bin_read_exact(bin, step_num * action_num * np.dtype(np.int32).itemsize), dtype=np.float32).reshape([step_num, action_num]).copy()

    if UE_LEARNING_DEVELOPMENT:
        assert np.all(np.isfinite(episode_starts))
        assert np.all(np.isfinite(episode_lengths))
        assert np.all(np.isfinite(observations))
        assert np.all(np.isfinite(actions))
        
        if (episode_lengths <= 0).any():
            raise AssertionError("Episode lengths must be positive.")
        if int(episode_lengths.sum()) != int(step_num):
            raise AssertionError("Sum of episode lengths must equal step_num.")
        if int(episode_starts[-1] + episode_lengths[-1]) != int(step_num):
            raise AssertionError("Last episode must end at step_num.")

    buffer = {
        'obs':          observations,
        'act':          actions,
        'starts':       episode_starts,
        'lengths':      episode_lengths,
    }
    return buffer


class FileCommunicator(AbstractCommunicator):

    def __init__(self, file_manager: FileManager):
        self.file_manager = file_manager      
        self.config = dict()          
        self.network_buffers_by_id = dict()
        self.network_info_by_id = dict()
        
        self._load_configs()
        self._load_networks()
        
        self.replay_buffers_by_id = dict()
        self._load_replays()
        
    def _load_configs(self):
        with open(self.file_manager.data_config_path) as f:
            data_config = json.load(f, object_pairs_hook=OrderedDict)
        with open(self.file_manager.trainer_config_path) as f:
            trainer_config = json.load(f, object_pairs_hook=OrderedDict)
        
        self.config = {**data_config, **trainer_config}

        for network_config in self.config['Networks']:
            network_id = int(network_config['Id'])
            network_name = network_config['Name']
            network_max_bytes = int(network_config['MaxByteNum'])
            self.network_info_by_id[network_id] = (network_name, network_max_bytes)

    def _load_networks(self):
        pattern = re.compile(r'^(network)_(\d+)\.bin$')
        for filename, path in self.file_manager.list_networks():
            match = pattern.match(filename)
            if match:
                network_id = int(match.group(2))
                network = build_network(self.config["Device"])
                load_snapshot_from_file(network, path)
                self.network_buffers_by_id[network_id] = network

    def _load_replays(self):
        pattern = re.compile(r'^(replaybuffer)_(\d+)\.bin$')
        for filename, path in self.file_manager.list_replays():
            match = pattern.match(filename)
            if match:
                replay_id = int(match.group(2))
                self.replay_buffers_by_id[replay_id] = load_experience_behavior_cloning(path, replay_id, FileReplayBuffer(self.config['ReplayBuffers'][replay_id]))

    def get_network(self, network_id:int):
        return self.network_buffers_by_id[network_id]
        
    def set_network(self, network_id:int, network:torch.nn.Module, version:int):
        pass

    def receive_experience(self, replay_buffer_id:int, trim_episode_start:int, trim_episode_end:int):
        return None, self.replay_buffers_by_id[replay_buffer_id], None
    
    def send_network(self, network_id:int, network:torch.nn.Module, version:int):
        return UE_RESPONSE_SUCCESS

    def send_complete(self):
        return UE_RESPONSE_SUCCESS
    
    def send_ping(self):
        pass

    def has_stop(self):
        return False
    
    def receive_stop(self):
        pass

    def get_batch_size(self):
        pass
            