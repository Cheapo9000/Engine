# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
import shutil
from metahuman_character_test_utils import MetaHumanCharacterAssetContext, ScopedMetaHumanCharacterEditor


def test_assembly(pipeline_type: unreal.MetaHumanDefaultPipelineType):

    unreal.log(f"Running test_assembly: PipelineType = {pipeline_type}")
    
    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return
        
        with ScopedMetaHumanCharacterEditor(character=metahuman):

            if metahuman_character_subsystem.can_build_meta_human(character=metahuman):
                unreal.log_error("Expected can_build_meta_human to return False for newly created characters")
                return

            autorig_request_params = unreal.MetaHumanCharacterAutoRiggingRequestParams()
            autorig_request_params.blocking = True
            autorig_request_params.report_progress = False
            autorig_request_params.rig_type = unreal.MetaHumanRigType.JOINTS_ONLY
            metahuman_character_subsystem.request_auto_rigging(character=metahuman, params=autorig_request_params)

            # TODO: Add call to check if the character was really rigged

            if metahuman_character_subsystem.can_build_meta_human(character=metahuman):
                unreal.log_error("Expected can_build_meta_human to return False for character that doesn't have downloaded textures")
                return

            textures_request_params = unreal.MetaHumanCharacterTextureRequestParams()
            textures_request_params.blocking = True
            textures_request_params.report_progress = False
            metahuman_character_subsystem.request_texture_sources(character=metahuman, params=textures_request_params)

            if not metahuman.has_high_resolution_textures:
                unreal.log_error("Expectred character to have high resolution textures")
                return

            if not metahuman_character_subsystem.can_build_meta_human(character=metahuman):
                unreal.log("Expected can_build_meta_human to return True")
                return            

            if pipeline_type == unreal.MetaHumanDefaultPipelineType.DCC:

                build_params = unreal.MetaHumanCharacterEditorBuildParameters()
                build_params.pipeline_type = unreal.MetaHumanDefaultPipelineType.DCC
                build_params.absolute_build_path = unreal.Paths.combine(paths=[unreal.Paths.project_saved_dir(), "DCCExportTest"])
                build_params.bake_makeup = True

                unreal.log("Exporting DCC zip file")

                build_params.export_zip_file = True
                build_params.name_override = metahuman.get_name() + "_ZipFileNameOverride"
                metahuman_character_subsystem.build_meta_human(character=metahuman, params=build_params)

                zip_filepath = unreal.Paths.combine(paths=[build_params.absolute_build_path, build_params.name_override])
                zip_filepath = unreal.Paths.set_extension(path=zip_filepath, new_extension=".zip")
                if not unreal.Paths.file_exists(path=zip_filepath):
                    unreal.log_error(f"Expected zip file to be located at '{zip_filepath}'")

                unreal.log("Exporting DCC folder")

                build_params.export_zip_file = False
                metahuman_character_subsystem.build_meta_human(character=metahuman, params=build_params)

                exported_directory = unreal.Paths.combine(paths=[build_params.absolute_build_path, metahuman.get_name()])
                if not unreal.Paths.directory_exists(path=exported_directory):
                    unreal.log_error(f"Expected directory to be located at '{exported_directory}'")

                # Delete the temporary folder created for the test
                shutil.rmtree(path=build_params.absolute_build_path)

            else:

                build_params = unreal.MetaHumanCharacterEditorBuildParameters()
                build_params.pipeline_type = unreal.MetaHumanDefaultPipelineType.OPTIMIZED
                build_params.pipeline_quality = unreal.MetaHumanQualityLevel.MEDIUM
                build_params.absolute_build_path = "/Game/AssemblyTest/MetaHumans"
                build_params.common_folder_path = "/Game/AssemblyTest/MetaHumans/Common"
                build_params.enable_wardrobe_item_validation = True
                metahuman_character_subsystem.build_meta_human(character=metahuman, params=build_params)


if __name__ == "__main__":
    test_assembly(pipeline_type=unreal.MetaHumanDefaultPipelineType.DCC)
    test_assembly(pipeline_type=unreal.MetaHumanDefaultPipelineType.OPTIMIZED)