# Copyright Epic Games, Inc. All Rights Reserved.

import unreal

from metahuman_character_test_utils import MetaHumanCharacterAssetContext


def test_set_clothing():

    # List of outfit slots
    outfits_slot = "Outfits"

    asset_registry = unreal.AssetRegistryHelpers.get_asset_registry()

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        character: unreal.MetaHumanCharacter = asset_context.character

        outfit_package_name = "/MetaHumanCharacter/Optional/Clothing/WI_DefaultGarment"

        asset_data_list = asset_registry.get_assets_by_package_name(package_name=outfit_package_name)
        
        if len(asset_data_list) == 0:
            unreal.error(f"Failed to load wardrobe item for outfit '{outfit_package_name}'")
            return

        asset_data: unreal.AssetData = asset_data_list[0]

        unreal.log(f"Adding outfit '{asset_data.asset_name}' for slot '{outfits_slot}'")

        item_key = character.internal_collection.try_add_item_from_wardrobe_item(
            slot_name=outfits_slot,
            wardrobe_item=asset_data.get_asset()
        )

        if item_key is None:
            unreal.log_error(f"Failed to add wardrobe item '{asset_data}' for outfit slot {outfits_slot}")
            return
        
        selection = unreal.MetaHumanPipelineSlotSelection(
            slot_name=outfits_slot,
            selected_item=item_key
        )
        if not character.internal_collection.default_instance.try_add_slot_selection(selection=selection):
            unreal.log_error(f"Fail to select {item_key.to_asset_name_string()} for slot {outfits_slot}")
            return
        
        slot_selection_data = character.internal_collection.default_instance.get_slot_selection_data()

        if not len(slot_selection_data) == 2:
            unreal.log(f"Expected 2 slot selections but found {len(slot_selection_data)}")
            return
        
        for slot_selection in slot_selection_data:
            selection: unreal.MetaHumanPipelineSlotSelection = slot_selection.selection

            if selection.slot_name == "Character":
                continue
            
            if not selection.selected_item.references_same_asset(item_key):
                unreal.log_error(f"Expected {selection.selected_item} to reference asset {str(item_key)}")


if __name__ == "__main__":
    test_set_clothing()