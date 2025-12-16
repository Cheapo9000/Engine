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
    # Get the face landmarks - Array of Vectors
    face_landmarks = metahuman_subsystem.get_face_landmarks(
        character=character
    )
    face_landmarks_scaled = [v.multiply_float(1.1) for v in face_landmarks]
    face_landmarks_deltas = [
        unreal.MathLibrary.subtract_vector_vector(scaled, original)
        for scaled, original in zip(face_landmarks_scaled, face_landmarks)
    ]

    metahuman_subsystem.translate_face_landmarks(
        character=character,
        landmark_indices=[i for i in range(len(face_landmarks_deltas))],
        deltas=face_landmarks_deltas
    )

    metahuman_subsystem.commit_face_state(character=character)

finally:
    # Finish Editing
    if metahuman_subsystem.is_object_added_for_editing(character):
        metahuman_subsystem.remove_object_to_edit(character)
