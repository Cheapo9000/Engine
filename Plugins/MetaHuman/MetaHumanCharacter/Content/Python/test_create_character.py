# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
from metahuman_character_test_utils import MetaHumanCharacterAssetContext


def test_open_and_close_asset_editor():

    unreal.log("Running test_open_and_close_asset_editor")

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return
    
        asset_editor_subsystem = unreal.get_editor_subsystem(unreal.AssetEditorSubsystem)
        if asset_editor_subsystem.open_editor_for_assets(assets=[metahuman]):
            if not asset_editor_subsystem.close_all_editors_for_asset(asset=metahuman) == 1:
                unreal.log_error(f"Failed to close asset editor for {metahuman.get_name()}")
        else:
            unreal.log_error(f"Failed to open asset editor for {metahuman.get_name()}")


def test_add_remove_from_editing():

    unreal.log("Running test_add_remove_from_editing")

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return
    
        metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)
        if not metahuman_character_subsystem.try_add_object_to_edit(character=metahuman):
            unreal.log_error(f"Failed to open {metahuman.get_name()} for editing")
            return
    
        if not metahuman_character_subsystem.is_object_added_for_editing(character=metahuman):
            unreal.log_error(f"{metahuman.get_name()} was not added for editing")
            return
    
        metahuman_character_subsystem.remove_object_to_edit(character=metahuman)


if __name__ == "__main__":
    test_open_and_close_asset_editor()
    test_add_remove_from_editing()