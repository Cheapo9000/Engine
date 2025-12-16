import unreal
from pathlib import Path

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
    # Conform from template
    skeletal_mesh = unreal.load_asset(
        "/Game/Characters/MetaHumans/SKM_Jeff_Body.SKM_Jeff_Body"
    )
                
    result = metahuman_subsystem.import_from_body_template(
        character,
        skeletal_mesh,
        unreal.MetaHumanCharacterBodyFitOptions.FIT_FROM_MESH_AND_SKELETON
    )

    if result != unreal.ImportErrorCode.SUCCESS:
        unreal.log_error("Failed to import MetaHuman Character asset")

finally:
    # Finish Editing
    if metahuman_subsystem.is_object_added_for_editing(character):
        metahuman_subsystem.remove_object_to_edit(character)