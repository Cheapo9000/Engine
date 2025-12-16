# Copyright Epic Games, Inc. All Rights Reserved.

import os
import argparse
import sys

import unreal

def main():
    parser = argparse.ArgumentParser(description='MetaHuman Calibration Example')
    parser.add_argument('--capture-data-package-path', required=True, type=str, help='Path to the footage capture data asset')
    args = parser.parse_args()

    calib_config = unreal.MetaHumanCalibrationGeneratorConfig()
    # The config parameters are set to their default values:
    # calib_config.board_pattern_width = 16
    # calib_config.board_pattern_height = 11
    # calib_config.board_square_size = 0.75 - cm

    calib_options = unreal.MetaHumanCalibrationGeneratorOptions()
    calib_options.package_path.path = '/Game/CalibrationGenerated/'

    # The rest of the options are set to their default values:
    # calib_options.asset_name = 'CC_Calibration'
    # calib_options.auto_save_assets = True
    # calib_options.selected_frames = []
    # calib_options.sample_rate = 30
    # calib_options.sharpness_threshold = 5.0
    
    asset_subsystem = unreal.get_editor_subsystem(unreal.EditorAssetSubsystem)
    capture_data_asset = asset_subsystem.load_asset(asset_path=args.capture_data_package_path)
    
    if capture_data_asset is None:
        raise RuntimeError(f'Failed to load capture data asset : {args.capture_data_package_path}')
    
    calib_generator = unreal.MetaHumanCalibrationGenerator()
    success = calib_generator.init(calib_config)

    if not success:
        raise RuntimeError('Failed to generate calibration')

    success = calib_generator.process(capture_data_asset, calib_options)

    if not success:
        raise RuntimeError('Failed to generate calibration')
    
if __name__ == '__main__':
    main()

