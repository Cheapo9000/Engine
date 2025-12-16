import unreal

# Load the asset
character = unreal.load_asset("/Game/Characters/MetaHumans/Jeff.Jeff")

wardrobe_item = unreal.load_asset(
    "/MetaHumanCharacter/Optional/Clothing/WI_DefaultGarment.WI_DefaultGarment"
)

item_key = character.internal_collection.try_add_item_from_wardrobe_item(
    "Outfits", wardrobe_item
)

selection = unreal.MetaHumanPipelineSlotSelection(
    slot_name="Outfits", selected_item=item_key
)

character.internal_collection.default_instance.try_add_slot_selection(selection)

# Get the MetaHuman Subsystem
metahuman_subsystem = unreal.get_editor_subsystem(
    unreal.MetaHumanCharacterEditorSubsystem
)

# Try to edit the character
if not metahuman_subsystem.try_add_object_to_edit(character):
    raise RuntimeError("Unable to edit asset, is it already open for edit?")

try:
    # Assemble the character instance to make the instance parameters available
    metahuman_subsystem.assemble_for_preview(character=character)


    outfit_item_path = unreal.MetaHumanPaletteItemPath(item_key=item_key)

    outfit_instance_parameters = character.internal_collection.default_instance.get_instance_parameters(item_path=outfit_item_path)
    if not (primary_color_param := next((param for param in outfit_instance_parameters if param.name == "PrimaryColorShirt"), None)):
        unreal.log_error("Failed to find Primary Color Shirt parameter")
        raise RuntimeError

    primary_color_param.set_color(value=unreal.LinearColor.GREEN)
finally:
    # Finish Editing
    if metahuman_subsystem.is_object_added_for_editing(character):
        metahuman_subsystem.remove_object_to_edit(character)