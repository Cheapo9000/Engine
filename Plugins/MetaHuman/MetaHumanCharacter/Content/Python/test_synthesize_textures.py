# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
from metahuman_character_test_utils import MetaHumanCharacterAssetContext, ScopedMetaHumanCharacterEditor


def test_synthesize_textures(delete_on_exit=True, package_path="/Game", asset_name="TestMetaHumanCharacter"):

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    # Creates a temporary MetaHuman Character asset to test the Sculpting API.
    # Set delete_on_exit to False to prevent the asset from being deleted at the end of the test
    with MetaHumanCharacterAssetContext(delete_on_exit, package_path, asset_name) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
                unreal.log_error("Failed to create MetaHuman Character asset")
                return

        with ScopedMetaHumanCharacterEditor(character=metahuman):

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

            metahuman.preview_material_type = unreal.MetaHumanCharacterSkinPreviewMaterial.EDITABLE

            metahuman_character_subsystem.commit_skin_settings(character=metahuman, skin_settings=skin_settings)

            # Update and synthesize again
            skin_settings.skin.v = 0.1
            metahuman_character_subsystem.commit_skin_settings(character=metahuman, skin_settings=skin_settings)


if __name__ == "__main__":
    test_synthesize_textures()