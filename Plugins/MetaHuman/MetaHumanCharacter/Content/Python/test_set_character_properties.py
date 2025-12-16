# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
from metahuman_character_test_utils import MetaHumanCharacterAssetContext, ScopedMetaHumanCharacterEditor


def test_set_character_properties():

    unreal.log("Running test_set_character_properties")

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return

        # Writable properties exposed in MetaHumanCharacter can be set without the need to use the subsystem

        # Anything that is exposed in the MetaHumanCharacter object can be edited here
        # This will include all skin settings, eye and makeup parameters and wardrobe items
        # These properties don't require the character to be opened for edit by the MetaHumanCharacterEditorSubsystem

        # Set the preview mateiral type
        metahuman.preview_material_type = unreal.MetaHumanCharacterSkinPreviewMaterial.EDITABLE

        # --------------
        # Eye properties
        # --------------

        iris = unreal.MetaHumanCharacterEyeIrisProperties()
        iris.pattern = unreal.MetaHumanCharacterEyesIrisPattern.IRIS002
        iris.rotation = 0.5
        iris.primary_color_u = 0.1
        iris.primary_color_v = 0.3
        iris.secondary_color_u = 0.2
        iris.secondary_color_v = 0.4
        iris.color_blend = 0.2
        iris.color_blend_softness = 0.2
        iris.blend_method = unreal.MetaHumanCharacterEyesBlendMethod.RADIAL
        iris.shadow_details = 0.8
        iris.limbal_ring_size = 0.6
        iris.limbal_ring_softness = 0.02
        iris.limbal_ring_color = unreal.LinearColor.GRAY
        iris.global_saturation = 2
        iris.global_tint = unreal.LinearColor.BLUE

        pupil = unreal.MetaHumanCharacterEyePupilProperties()
        pupil.dilation = 0.85
        pupil.feather = 0.6

        sclera = unreal.MetaHumanCharacterEyeScleraProperties()
        sclera.rotation = 0.2
        sclera.use_custom_tint = True
        sclera.tint = unreal.LinearColor.YELLOW
        sclera.transmission_spread = 0.4

        eye_properties = unreal.MetaHumanCharacterEyeProperties()
        eye_properties.iris = iris
        eye_properties.pupil = pupil
        eye_properties.sclera = sclera

        eyes_settings = unreal.MetaHumanCharacterEyesSettings()
        eyes_settings.eye_left = eye_properties
        eyes_settings.eye_right = eye_properties

        # --------------
        # Makeup properties
        # --------------

        blusher = unreal.MetaHumanCharacterBlushMakeupProperties()
        blusher.color = unreal.LinearColor.RED
        blusher.intensity = 0.2
        blusher.roughness = 0.5
        blusher.type = unreal.MetaHumanCharacterBlushMakeupType.HIGH_CURVE

        eyes_makeup = unreal.MetaHumanCharacterEyeMakeupProperties()
        eyes_makeup.type = unreal.MetaHumanCharacterEyeMakeupType.DRAMATIC_SMUDGE
        eyes_makeup.metalness = 0.2
        eyes_makeup.opacity = 0.1
        eyes_makeup.primary_color = unreal.LinearColor.BLACK
        eyes_makeup.secondary_color = unreal.LinearColor.RED

        foundation = unreal.MetaHumanCharacterFoundationMakeupProperties()
        foundation.apply_foundation = False
        foundation.color = unreal.LinearColor.WHITE
        foundation.intensity = 0.5
        foundation.roughness = 0.3
        foundation.concealer = 0.2

        lips = unreal.MetaHumanCharacterLipsMakeupProperties()
        lips.color = unreal.LinearColor.RED
        lips.metalness = 0.4
        lips.opacity = 0.2
        lips.roughness = 0.1
        lips.type = unreal.MetaHumanCharacterLipsMakeupType.HOLLYWOOD

        makeup_settings = unreal.MetaHumanCharacterMakeupSettings()
        makeup_settings.blush = blusher
        makeup_settings.eyes = eyes_makeup
        makeup_settings.foundation = foundation
        makeup_settings.lips = lips

        # --------------
        # Viewport Properties
        # --------------

        viewport_settings = unreal.MetaHumanCharacterViewportSettings()
        viewport_settings.always_use_hair_cards = True
        viewport_settings.background_color = unreal.LinearColor.WHITE
        viewport_settings.camera_frame = unreal.MetaHumanCharacterCameraFrame.FACE
        viewport_settings.character_environment = unreal.MetaHumanCharacterEnvironment.STUDIO
        viewport_settings.level_of_detail = unreal.MetaHumanCharacterLOD.LOD1
        viewport_settings.rendering_quality = unreal.MetaHumanCharacterRenderingQuality.HIGH
        viewport_settings.light_rotation = 20.0
        viewport_settings.show_viewport_overlays = True
        viewport_settings.tonemapper_enabled = True

        # --------------
        # Character properties
        # --------------

        metahuman.eyes_settings = eyes_settings
        metahuman.makeup_settings = makeup_settings
        metahuman.viewport_settings = viewport_settings


def test_commit_eyes_settings():

    unreal.log("Running test_commit_eyes_settings")

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return
        
        with ScopedMetaHumanCharacterEditor(character=metahuman):
            
            iris = unreal.MetaHumanCharacterEyeIrisProperties()
            iris.pattern = unreal.MetaHumanCharacterEyesIrisPattern.IRIS002
            iris.rotation = 0.5
            iris.primary_color_u = 0.1
            iris.primary_color_v = 0.3

            # Update the character iris
            eyes_settings: unreal.MetaHumanCharacterEyesSettings = metahuman.eyes_settings
            eyes_settings.eye_left.iris = iris
            eyes_settings.eye_right.iris = iris

            metahuman_character_subsystem.commit_eyes_settings(character=metahuman, eyes_settings=eyes_settings)


def test_commit_makeup_settings():

    unreal.log("Running test_commit_makeup_settings")

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return
        
        with ScopedMetaHumanCharacterEditor(character=metahuman):

            eyes_makeup = unreal.MetaHumanCharacterEyeMakeupProperties()
            eyes_makeup.type = unreal.MetaHumanCharacterEyeMakeupType.DRAMATIC_SMUDGE
            eyes_makeup.metalness = 0.2
            eyes_makeup.opacity = 0.1
            eyes_makeup.primary_color = unreal.LinearColor.BLACK
            eyes_makeup.secondary_color = unreal.LinearColor.RED

            # Update the eyes makeup and commit the changes back to the character
            makeup_settings: unreal.MetaHumanCharacterMakeupSettings = metahuman.makeup_settings
            makeup_settings.eyes = eyes_makeup

            iris = unreal.MetaHumanCharacterEyeIrisProperties()
            iris.pattern = unreal.MetaHumanCharacterEyesIrisPattern.IRIS002
            iris.rotation = 0.5
            iris.primary_color_u = 0.1
            iris.primary_color_v = 0.3

            # Update the character iris
            eyes_settings: unreal.MetaHumanCharacterEyesSettings = metahuman.eyes_settings
            eyes_settings.eye_left.iris = iris
            eyes_settings.eye_right.iris = iris

            metahuman_character_subsystem.commit_makeup_settings(character=metahuman, makeup_settings=makeup_settings)
            metahuman_character_subsystem.commit_eyes_settings(character=metahuman, eyes_settings=eyes_settings)


if __name__ == "__main__":
    test_set_character_properties()
    test_commit_eyes_settings()
    test_commit_makeup_settings()