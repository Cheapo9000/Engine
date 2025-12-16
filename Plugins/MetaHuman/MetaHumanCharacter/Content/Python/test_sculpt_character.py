# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
from metahuman_character_test_utils import MetaHumanCharacterAssetContext, ScopedMetaHumanCharacterEditor


def test_sculpt_face(delete_on_exit=True, package_path="/Game", asset_name="TestMetaHumanCharacter"):

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    # Creates a temporary MetaHuman Character asset to test the Sculpting API.
    # Set delete_on_exit to False to prevent the asset from being deleted at the end of the test
    with MetaHumanCharacterAssetContext(delete_on_exit, package_path, asset_name) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return

        with ScopedMetaHumanCharacterEditor(character=metahuman):

            face_landmarks = metahuman_character_subsystem.get_face_landmarks(character=metahuman)
            if len(face_landmarks) == 0:
                unreal.log_error("Failed to obtain face landmarks for sculpting")
                return 
            
            # Scale landmarks by 10% and calculate a delta to set in the translate_face_landmark function
            face_landmarks_scaled = [v.multiply_float(1.1) for v in face_landmarks]
            face_landmarks_deltas = [unreal.MathLibrary.subtract_vector_vector(scaled, original) for scaled, original in zip(face_landmarks_scaled, face_landmarks)]

            metahuman_character_subsystem.translate_face_landmarks(character=metahuman,
                                                                   landmark_indices=[i for i in range(len(face_landmarks_deltas))],
                                                                   deltas=face_landmarks_deltas)

            metahuman_character_subsystem.commit_face_state(character=metahuman)


def test_sculpt_body(delete_on_exit=True, package_path="/Game", asset_name="TestMetaHumanCharacter"):
     
    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    with MetaHumanCharacterAssetContext(delete_on_exit, package_path, asset_name) as asset_context:
        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:            
            unreal.log_error("Failed to create MetaHuman Character asset")
            return
        
        with ScopedMetaHumanCharacterEditor(character=metahuman):
             
            body_constraints = metahuman_character_subsystem.get_body_constraints(character=metahuman, scale_measurement_ranges_with_height=False)

            updated_constraints = []

            if len(body_constraints) == 0:
                unreal.log_error(f"Expected list of body contraints to contain entries")
                return

            for constraint in body_constraints:
                constraint: unreal.MetaHumanCharacterBodyConstraint

                # Activate all constraints
                constraint.is_active = True
                
                # Bump the target value by 50%
                constraint.target_measurement = constraint.target_measurement * 1.5

                updated_constraints.append(constraint)

            metahuman_character_subsystem.set_body_constraints(character=metahuman,
                                                               body_constraints=updated_constraints)
            
            metahuman_character_subsystem.commit_body_state(character=metahuman)



def test_sculpt_teeth(delete_on_exit=True, package_path="/Game", asset_name="TestMetaHumanCharacter"):
     
    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    # Creates a temporary MetaHuman Character asset to test the Sculpting API.
    # Set delete_on_exit to False to prevent the asset from being deleted at the end of the test
    with MetaHumanCharacterAssetContext(delete_on_exit, package_path, asset_name) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return

        with ScopedMetaHumanCharacterEditor(character=metahuman):

            head_model_settings = metahuman.head_model_settings

            teeth_properties: unreal.MetaHumanCharacterTeethProperties = head_model_settings.teeth
            teeth_properties.tooth_length = -1.0
            teeth_properties.tooth_spacing = 1.0
            teeth_properties.upper_shift = 1.0
            teeth_properties.lower_shift = -1.0
            teeth_properties.overbite = 1.0
            teeth_properties.overjet = 1.0
            teeth_properties.worn_down = -1.0
            teeth_properties.polycanine = 1.0
            teeth_properties.receding_gums = 1.0
            teeth_properties.narrowness = 1.0
            teeth_properties.variation = 1.0
            teeth_properties.teeth_color = unreal.LinearColor.GREEN
            teeth_properties.gum_color = unreal.LinearColor.RED
            teeth_properties.plaque_color = unreal.LinearColor.WHITE
            teeth_properties.jaw_open = 1.0
            teeth_properties.plaque_amount = 1.0

            metahuman_character_subsystem.commit_head_model_settings(meta_human_character=metahuman, head_model_settings=head_model_settings)

def test_sculpt_eyelashes(delete_on_exit=True, package_path="/Game", asset_name="TestMetaHumanCharacter"):
     
    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    # Creates a temporary MetaHuman Character asset to test the Sculpting API.
    # Set delete_on_exit to False to prevent the asset from being deleted at the end of the test
    with MetaHumanCharacterAssetContext(delete_on_exit, package_path, asset_name) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return

        with ScopedMetaHumanCharacterEditor(character=metahuman):

            head_model_settings = metahuman.head_model_settings

            eyelashes_properties: unreal.MetaHumanCharacterEyelashesProperties = head_model_settings.eyelashes
            eyelashes_properties.type = unreal.MetaHumanCharacterEyelashesType.THICK_CURL
            eyelashes_properties.dye_color = unreal.LinearColor.GREEN
            eyelashes_properties.melanin = 0.7
            eyelashes_properties.redness = 0.1
            eyelashes_properties.roughness = 0.4
            eyelashes_properties.salt_and_pepper = 0.5
            eyelashes_properties.lightness = 0.8
            eyelashes_properties.enable_grooms = True
 
            metahuman_character_subsystem.commit_head_model_settings(meta_human_character=metahuman, head_model_settings=head_model_settings)

if __name__ == "__main__":
    test_sculpt_face()
    test_sculpt_body()
    test_sculpt_teeth()
    test_sculpt_eyelashes()