# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
from metahuman_character_test_utils import MetaHumanCharacterAssetContext, ScopedMetaHumanCharacterEditor       


def test_set_instance_params():

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    asset_registry = unreal.AssetRegistryHelpers.get_asset_registry()

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return
        
        #
        # Add a groom to the character instance
        #

        groom_slot = "Hair"
        groom_package_name = f"/MetaHumanCharacter/Optional/Grooms/Bindings/Hair/WI_Hair_L_Straight"

        asset_data_list = asset_registry.get_assets_by_package_name(package_name=groom_package_name)

        if len(asset_data_list) == 0:
            unreal.log_error(f"Failed to find Hair wardrobe items in {groom_package_name}")
            return
        
        asset_data: unreal.AssetData = asset_data_list[0]
        
        groom_item_key: unreal.MetaHumanPaletteItemKey = metahuman.internal_collection.try_add_item_from_wardrobe_item(
            slot_name=groom_slot,
            wardrobe_item=asset_data.get_asset()
        )
        
        if groom_item_key is None:
            unreal.log_error(f"Failed to add wardrobe item '{asset_data.asset_name}' for groom slot {groom_slot}")
            return
        
        selection = unreal.MetaHumanPipelineSlotSelection(
            slot_name=groom_slot,
            selected_item=groom_item_key
        )
        if not metahuman.internal_collection.default_instance.try_add_slot_selection(selection=selection):
            unreal.log_error(f"Fail to select {groom_item_key.to_asset_name_string()} for slot {groom_slot}")
        
        #
        # Add an outfit to the character instance
        #

        outfits_slot = "Outfits"
        outfit_package_name = "/MetaHumanCharacter/Optional/Clothing/WI_DefaultGarment"

        asset_data_list = asset_registry.get_assets_by_package_name(package_name=outfit_package_name)

        if len(asset_data_list) == 0:
            unreal.log_error(f"Failed to load wardrobe item for outfit '{outfit_package_name}'")
            return

        asset_data: unreal.AssetData = asset_data_list[0]

        outfit_item_key: unreal.MetaHumanPaletteItemKey = metahuman.internal_collection.try_add_item_from_wardrobe_item(
            slot_name=outfits_slot,
            wardrobe_item=asset_data.get_asset()
        )

        if outfit_item_key is None:
            unreal.log(f"Failed to add wardrobe item to collection. Slot Name: {outfits_slot} Wardrobe Item: {asset_data.asset_name}")
            return

        selection = unreal.MetaHumanPipelineSlotSelection(
            slot_name=outfits_slot,
            selected_item=outfit_item_key
        )

        if not metahuman.internal_collection.default_instance.try_add_slot_selection(selection=selection):
            unreal.log_error(f"Fail to select {outfit_item_key.to_asset_name_string()} for slot {outfits_slot}")
            return
        
        # Adding items to the instance doesn't require the character to be loaded in the subsystem
        # but working with instance parameters does, so start a character editor scope here
        with ScopedMetaHumanCharacterEditor(character=metahuman):
            
            # Assemble the character instance to make the instance parameters available
            metahuman_character_subsystem.assemble_for_preview(character=metahuman)

            #
            # Get the Groom Instance Parameters and try to update them
            #

            groom_item_path = unreal.MetaHumanPaletteItemPath(item_key=groom_item_key)
            groom_instance_parameters = metahuman.internal_collection.default_instance.get_instance_parameters(item_path=groom_item_path)

            if len(groom_instance_parameters) == 0:
                unreal.log_error(f"Expected to have groom instance parameters but found none")
                return

            for groom_param in groom_instance_parameters:
                groom_param: unreal.MetaHumanCharacterInstanceParameter    

                if groom_param.type == unreal.MetaHumanCharacterInstanceParameterType.BOOL:
                    current_value = groom_param.get_bool()
                    groom_param.set_bool(value=not current_value)

                if groom_param.type == unreal.MetaHumanCharacterInstanceParameterType.FLOAT:
                    current_value = groom_param.get_float()
                    groom_param.set_float(value=current_value * 1.2)

                if groom_param.type == unreal.MetaHumanCharacterInstanceParameterType.COLOR:
                    current_value = groom_param.get_color()
                    groom_param.set_color(value=unreal.LinearColor.YELLOW)

            # Try to set a particular float parameter
            # Search for it by name
            if (melanin_param := next((param for param in groom_instance_parameters if param.name == "Melanin"), None)) is None:
                unreal.log_error("Failed to find Malanin parameter")
                return
            
            melanin_param.set_float(value=0.5)

            #
            # Try to set a particular parameter of the outfit
            #

            outfit_item_path = unreal.MetaHumanPaletteItemPath(item_key=outfit_item_key)
            outfit_instance_parameters = metahuman.internal_collection.default_instance.get_instance_parameters(item_path=outfit_item_path)

            if len(outfit_instance_parameters) == 0:
                unreal.log_error(f"Expected to have outfit instance parameters but found none")
                return
            
            if (primary_color_param := next((param for param in outfit_instance_parameters if param.name == "PrimaryColorShirt"), None)) is None:
                unreal.log_error("Failed to find Primary Color Shirt parameter")
                return
            
            primary_color_param.set_color(value=unreal.LinearColor.GREEN)


if __name__ == "__main__":
    test_set_instance_params()