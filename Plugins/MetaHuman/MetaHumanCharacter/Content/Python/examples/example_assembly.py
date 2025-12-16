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
    # Run the optimized MetaHuman assembly pipeline
    build_params = unreal.MetaHumanCharacterEditorBuildParameters()
    build_params.pipeline_type = unreal.MetaHumanDefaultPipelineType.OPTIMIZED
    build_params.pipeline_quality = unreal.MetaHumanQualityLevel.MEDIUM
    # Optional overrides for the build and common folder
    build_params.absolute_build_path = "/Game/MetaHumans"
    build_params.common_folder_path = "/Game/MetaHumans/Common"
    build_params.enable_wardrobe_item_validation = False
    metahuman_subsystem.build_meta_human(character=character, params=build_params)

    # Run the DCC export pipeline
    export_path = Path("Path/To/Export/Folder")
    build_params = unreal.MetaHumanCharacterEditorBuildParameters()
    build_params.pipeline_type = unreal.MetaHumanDefaultPipelineType.DCC
    build_params.absolute_build_path = export_path.as_posix()
    build_params.bake_makeup = True


    # Export as a zip file
    build_params.export_zip_file = True
    build_params.name_override = character.get_name() + "_ZipFile"
    metahuman_subsystem.build_meta_human(character=character, params=build_params)

    # Export as a folder
    build_params.export_zip_file = False
    metahuman_subsystem.build_meta_human(character=character, params=build_params)
finally:
    # Finish Editing
    if metahuman_subsystem.is_object_added_for_editing(character):
        metahuman_subsystem.remove_object_to_edit(character)