# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
from metahuman_character_test_utils import MetaHumanCharacterAssetContext, ScopedMetaHumanCharacterEditor


def test_auto_rigging():

    unreal.log("Running test_auto_rigging")

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return
        
        with ScopedMetaHumanCharacterEditor(character=metahuman):

            request_params = unreal.MetaHumanCharacterAutoRiggingRequestParams()
            request_params.blocking = True
            request_params.report_progress = False
            request_params.rig_type = unreal.MetaHumanRigType.JOINTS_ONLY
            metahuman_character_subsystem.request_auto_rigging(character=metahuman, params=request_params)


def test_download_texture_sources():
    
    unreal.log("Running test_download_texture_sources")

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return
        
        with ScopedMetaHumanCharacterEditor(character=metahuman):

            request_params = unreal.MetaHumanCharacterTextureRequestParams()
            request_params.blocking = True
            request_params.report_progress = False
            metahuman_character_subsystem.request_texture_sources(character=metahuman, params=request_params)


if __name__ == "__main__":
    test_auto_rigging()
    test_download_texture_sources()