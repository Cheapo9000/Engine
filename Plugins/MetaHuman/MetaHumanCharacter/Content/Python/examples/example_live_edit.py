import unreal

'''
This shows an example of how to use the metahuman character subsystem to perform live edits to a character.
The edits are reflected in the viewport after each commit function. In this example, the face landmarks
are scaled and the delta is applied reflecting the changes in the viewport
'''

def live_edit_character():

    selected_characters = unreal.EditorUtilityLibrary.get_selected_assets_of_class(asset_class=unreal.MetaHumanCharacter)

    if len(selected_characters) == 0:
        return
    
    character: unreal.MetaHumanCharacter = selected_characters[0]

    # Make sure the editor is opened
    asset_editor_subsystem = unreal.get_editor_subsystem(unreal.AssetEditorSubsystem)
    asset_editor_subsystem.open_editor_for_assets(assets=[character])

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    if not metahuman_character_subsystem.is_object_added_for_editing(character=character):
        unreal.log_error(f"Character {character.get_name()} not added for editing")
        return

    face_landmarks = metahuman_character_subsystem.get_face_landmarks(character=character)
    if len(face_landmarks) == 0:
        unreal.log_error("Failed to obtain face landmarks for sculpting")
        return 
    
    # Scale landmarks by 10% and calculate a delta to set in the translate_face_landmark function
    face_landmarks_scaled = [v.multiply_float(1.1) for v in face_landmarks]
    face_landmarks_deltas = [unreal.MathLibrary.subtract_vector_vector(scaled, original) for scaled, original in zip(face_landmarks_scaled, face_landmarks)]

    metahuman_character_subsystem.translate_face_landmarks(character=character,
                                                            landmark_indices=[i for i in range(len(face_landmarks_deltas))],
                                                            deltas=face_landmarks_deltas)
    

    metahuman_character_subsystem.commit_face_state(character=character)

    # Update some of the makeup and eye parameters
    eyes_makeup = unreal.MetaHumanCharacterEyeMakeupProperties()
    eyes_makeup.type = unreal.MetaHumanCharacterEyeMakeupType.DRAMATIC_SMUDGE
    eyes_makeup.metalness = 0.2
    eyes_makeup.opacity = 0.1
    eyes_makeup.primary_color = unreal.LinearColor.BLACK
    eyes_makeup.secondary_color = unreal.LinearColor.RED

    # Update the eyes makeup and commit the changes back to the character
    makeup_settings: unreal.MetaHumanCharacterMakeupSettings = character.makeup_settings
    makeup_settings.eyes = eyes_makeup

    iris = unreal.MetaHumanCharacterEyeIrisProperties()
    iris.pattern = unreal.MetaHumanCharacterEyesIrisPattern.IRIS002
    iris.rotation = 0.5
    iris.primary_color_u = 0.1
    iris.primary_color_v = 0.3

    eyes_settings: unreal.MetaHumanCharacterEyesSettings = character.eyes_settings
    eyes_settings.eye_left.iris = iris
    eyes_settings.eye_right.iris = iris

    metahuman_character_subsystem.commit_eyes_settings(character=character, eyes_settings=eyes_settings)
    metahuman_character_subsystem.commit_makeup_settings(character=character, makeup_settings=makeup_settings)
    

if __name__ == "__main__":
    live_edit_character()