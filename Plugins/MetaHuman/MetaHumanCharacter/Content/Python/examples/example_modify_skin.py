import unreal

# Load the asset
character = unreal.load_asset("/Game/Characters/MetaHumans/Jeff.Jeff")

# Get the MetaHuman Subsystem
metahuman_subsystem = unreal.get_editor_subsystem(
    unreal.MetaHumanCharacterEditorSubsystem
)

# Try to edit the character
if not metahuman_subsystem.try_add_object_to_edit(character):
    raise RuntimeError("Unable to edit asset, is it already open for edit?")
    
try:
    skin_properties = unreal.MetaHumanCharacterSkinProperties()
    skin_properties.u = 0.2
    skin_properties.v = 0.7
    skin_properties.show_top_underwear = True
    skin_properties.body_texture_index = 2
    skin_properties.face_texture_index = 3
    skin_properties.roughness = 0.85

    freckles = unreal.MetaHumanCharacterFrecklesProperties()
    freckles.density = 0.2
    freckles.strength = 0.6
    freckles.saturation = 0.9
    freckles.tone_shift = 0.2
    freckles.mask = unreal.MetaHumanCharacterFrecklesMask.TYPE2

    accent_region = unreal.MetaHumanCharacterAccentRegionProperties()
    accent_region.lightness = 0.2
    accent_region.redness = 0.5
    accent_region.saturation = 0.6

    accents = unreal.MetaHumanCharacterAccentRegions()
    accents.cheeks = accent_region               
    accents.chin = accent_region
    accents.ears = accent_region
    accents.cheeks = accent_region
    accents.forehead = accent_region
    accents.ears = accent_region
    accents.lips = accent_region
    accents.nose = accent_region
    accents.scalp = accent_region
    accents.under_eye = accent_region

    skin_settings = unreal.MetaHumanCharacterSkinSettings()
    skin_settings.skin = skin_properties
    skin_settings.freckles = freckles
    skin_settings.accents = accents
    skin_settings.enable_texture_overrides = False

    character.preview_material_type = unreal.MetaHumanCharacterSkinPreviewMaterial.EDITABLE

    metahuman_subsystem.commit_skin_settings(character, skin_settings)

finally:
    # Finish Editing
    if metahuman_subsystem.is_object_added_for_editing(character):
        metahuman_subsystem.remove_object_to_edit(character)