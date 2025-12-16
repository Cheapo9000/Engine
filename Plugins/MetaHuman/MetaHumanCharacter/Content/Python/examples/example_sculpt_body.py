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
    # Get a list of body constraints
    body_constraints = metahuman_subsystem.get_body_constraints(character)
    # Map each constraints name to the constraint so we can look up via name
    # Names are identical to how they are presented in the UI, converting them to lowered
    # strings and replacing spaces with _ for convenience.
    body_constraints_map = {
        str(constraint.name).lower().replace(" ", "_"): constraint
        for constraint in body_constraints
    }

    # Set the height constraint to be active, this will ensure that the parameteric system 
    # will try to hit the target_measurement. With it set to False, target_measurement 
    # will be ignored.
    body_constraints_map["height"].is_active = True
    body_constraints_map["height"].target_measurement = 190.0

    body_constraints_map["upper_arm_length"].is_active = True
    body_constraints_map["upper_arm_length"].target_measurement = 38.5

    # Update the constraints in the subsystem. Known bug that it doesn't update the
    # parametric UI if that is open at the same time.
    metahuman_subsystem.set_body_constraints(character, list(body_constraints_map.values()))
    metahuman_subsystem.commit_body_state(character)

finally:
    # Finish Editing
    if metahuman_subsystem.is_object_added_for_editing(character):
        metahuman_subsystem.remove_object_to_edit(character)