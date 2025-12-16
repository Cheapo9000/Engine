# Copyright Epic Games, Inc. All Rights Reserved.

import unreal

class MetaHumanCharacterAssetContext:
    '''
    Creates a MetaHuman Character asset and deletes it when it goes out of scope
    '''

    character: unreal.MetaHumanCharacter = None

    def __init__(self, delete_on_exit=True, package_path="/Game", asset_name="TestMetaHumanCharacter"):
        self.delete_on_exit = delete_on_exit
        self.package_path = package_path
        self.asset_name = asset_name

    def __enter__(self):
        asset_tools = unreal.AssetToolsHelpers.get_asset_tools()        

        _, asset_name = asset_tools.create_unique_asset_name(base_package_name=f"/{self.package_path}/{self.asset_name}", suffix="")

        self.character = asset_tools.create_asset(asset_name=asset_name,
                                                  package_path=self.package_path,
                                                  asset_class=unreal.MetaHumanCharacter,
                                                  factory=unreal.new_object(type=unreal.MetaHumanCharacterFactoryNew))
        
        if self.character is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return None
        
        return self
        
    def __exit__(self, exc_type, exc_val, exc_tb):

        if self.character:
            if not self.delete_on_exit:                
                asset_editor_subsystem = unreal.get_editor_subsystem(unreal.AssetEditorSubsystem)
                asset_editor_subsystem.open_editor_for_assets(assets=[self.character])

        supress_exceptions = False
        return supress_exceptions
    

class ScopedMetaHumanCharacterEditor:
    '''
    Scope to add a MetaHuman Character to the subsystem and remove it on exit
    '''

    character: unreal.MetaHumanCharacter

    def __init__(self, character):
        self.character = character

    def __enter__(self):
        metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)
        if not metahuman_character_subsystem.try_add_object_to_edit(character=self.character):
            unreal.log_error(f"Failed to open {self.character.get_name()} to edit")
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)
        if metahuman_character_subsystem.is_object_added_for_editing(character=self.character):
            metahuman_character_subsystem.remove_object_to_edit(character=self.character)

        supress_exceptions = False
        return supress_exceptions