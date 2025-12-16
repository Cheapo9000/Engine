# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
import random
from metahuman_character_test_utils import MetaHumanCharacterAssetContext


def test_set_grooms():
    
    # List of groom slots supported by MetaHumans
    groom_slots = ["Hair", "Eyebrows", "Beard", "Mustache", "Eyelashes", "Peachfuzz"]

    asset_registry = unreal.AssetRegistryHelpers.get_asset_registry()

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        character: unreal.MetaHumanCharacter = asset_context.character

        groom_items = {}
    
        for groom_slot in groom_slots:
            
            groom_slot_package_path = groom_slot
            if groom_slot == "Beard":
                groom_slot_package_path = "Beards"
            elif groom_slot == "Mustache":
                groom_slot_package_path = "Mustaches"

            # Find all the hair wardrobe for the groom slot
            pacakge_path = f"/MetaHumanCharacter/Optional/Grooms/Bindings/{groom_slot_package_path}"

            # Filter all the wardrobe items for the given groom slot
            filter = unreal.ARFilter(package_paths=[pacakge_path],
                                     class_paths=[unreal.MetaHumanWardrobeItem.static_class().get_class_path_name()])
            asset_data_list = asset_registry.get_assets(filter=filter)
            asset_data: unreal.AssetData = random.choice(asset_data_list)

            unreal.log(f"Adding wardrobe item '{asset_data.asset_name}' for groom slot {groom_slot}")

            # Add the item to the internal collection so it can be selected
            item_key = character.internal_collection.try_add_item_from_wardrobe_item(slot_name=groom_slot,
                                                                                     wardrobe_item=asset_data.get_asset())
            
            if item_key is None:
                unreal.log_error(f"Failed to add wardrobe item '{asset_data.asset_name}' for groom slot {groom_slot}")
                continue
            
            # save the key to be selected later
            groom_items[groom_slot] = item_key
        
        # Now select the grooms
        for groom_slot, item_key in groom_items.items():

            selection = unreal.MetaHumanPipelineSlotSelection(slot_name=groom_slot,
                                                              selected_item=item_key)
            if not character.internal_collection.default_instance.try_add_slot_selection(selection=selection):
                unreal.log_error(f"Fail to select {item_key.to_asset_name_string()} for slot {groom_slot}")


        # Check the instance for the expected slot selection
        slot_selection_data = character.internal_collection.default_instance.get_slot_selection_data()

        # There is always the slot for the character so add it to the number of expected slots
        num_expected_slots = len(groom_slots) + 1

        if not len(slot_selection_data) == num_expected_slots:
            unreal.log_error(f"Expected {num_expected_slots} slot selections for only found {len(slot_selection_data)}")

        for slot_selection in slot_selection_data:
            selection: unreal.MetaHumanPipelineSlotSelection = slot_selection.selection

            if selection.slot_name == "Character":
                continue

            if not selection.slot_name in groom_slots:
                unreal.log_error(f"Selected slot {selection.slot_name} not found in list of groom slots {groom_slots}")

            if not selection.selected_item.references_same_asset(groom_items[str(selection.slot_name)]):
                unreal.log_error(f"{selection.selected_item} {groom_items[str(selection.slot_name)]}")


        # Try desselecting the Mustache
        character.internal_collection.default_instance.set_single_slot_selection(slot_name="Mustache", item_key=unreal.MetaHumanPaletteItemKey())


if __name__ == "__main__":
    test_set_grooms()