# Copyright Epic Games, Inc. All Rights Reserved.
from pathlib import Path
import unreal
from metahuman_character_test_utils import MetaHumanCharacterAssetContext, ScopedMetaHumanCharacterEditor


def test_conform_from_dna():

    plugin_content_dir = unreal.PluginBlueprintLibrary.get_plugin_content_dir("MetaHumanCoreTech")
    dna_file_path = unreal.Paths.combine(paths=[plugin_content_dir, "ArchetypeDNA/SKM_Face.dna"])

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    # Creates a temporary MetaHuman Character asset to test the Sculpting API.
    # Set delete_on_exit to False to prevent the asset from being deleted at the end of the test
    with MetaHumanCharacterAssetContext(delete_on_exit=True) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
                unreal.log_error("Failed to create MetaHuman Character asset")
                return

        with ScopedMetaHumanCharacterEditor(character=metahuman):
            import_params = unreal.ImportFromDNAParams()
            import_params.import_whole_rig = False
            import_params.alignment_options = unreal.MetaHumanAlignmentOptions.SCALING_ROTATION_TRANSLATION

            metahuman_character_subsystem.import_from_face_dna(character=metahuman,
                                                               dna_file_path=dna_file_path,
                                                               import_params=import_params)
            


def test_import_from_template(delete_on_exit=True, package_path="/Game", asset_name="TestMetaHumanCharacter"):
     
    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    # Creates a temporary MetaHuman Character asset to test the Conform API.
    # Set delete_on_exit to False to prevent the asset from being deleted at the end of the test
    with MetaHumanCharacterAssetContext(delete_on_exit, package_path, asset_name) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return

        skeletal_mesh_path = "/MetaHumanCharacter/Face/SKM_Face"
        skeletal_mesh = unreal.EditorAssetLibrary.load_asset(skeletal_mesh_path)

        with ScopedMetaHumanCharacterEditor(character=metahuman):
            
            import_params = unreal.ImportFromTemplateParams()
            import_params.use_eye_meshes = True
            import_params.use_teeth_mesh = True
            import_params.alignment_options = unreal.MetaHumanAlignmentOptions.SCALING_ROTATION_TRANSLATION
                        
            result = metahuman_character_subsystem.import_from_template(metahuman, skeletal_mesh, None, None, None, import_params)
            if result != unreal.ImportErrorCode.SUCCESS:
                unreal.log_error("Failed to import MetaHuman Character asset")
                return
                
                
def test_import_from_body_template(delete_on_exit=True, package_path="/Game", asset_name="TestMetaHumanCharacter"):
     
    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    # Creates a temporary MetaHuman Character asset to test the body Conform API.
    # Set delete_on_exit to False to prevent the asset from being deleted at the end of the test
    with MetaHumanCharacterAssetContext(delete_on_exit, package_path, asset_name) as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
            unreal.log_error("Failed to create MetaHuman Character asset")
            return

        skeletal_mesh_path = "/MetaHumanCharacter/Body/IdentityTemplate/SKM_Body"
        skeletal_mesh = unreal.EditorAssetLibrary.load_asset(skeletal_mesh_path)

        with ScopedMetaHumanCharacterEditor(character=metahuman):
                        
            conform_params = unreal.ConformBodyParams()
            result = metahuman_character_subsystem.conform_body_from_template(metahuman, skeletal_mesh, None, False, conform_params)
            if result != unreal.ImportErrorCode.SUCCESS:
                unreal.log_error("Failed to import MetaHuman Character asset")
                return
            
            # Test with UV matching
            result = metahuman_character_subsystem.conform_body_from_template(metahuman, skeletal_mesh, None, True, conform_params)
            if result != unreal.ImportErrorCode.SUCCESS:
                unreal.log_error("Failed to import MetaHuman Character asset")
                return




def test_fit_to_vertices():
     
    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    # Creates a temporary MetaHuman Character asset to test the Sculpting API.
    # Set delete_on_exit to False to prevent the asset from being deleted at the end of the test
    with MetaHumanCharacterAssetContext(delete_on_exit=True, package_path="/Game", asset_name="TestMetaHumanCharacter") as asset_context:

        metahuman: unreal.MetaHumanCharacter = asset_context.character

        if metahuman is None:
                unreal.log_error("Failed to create MetaHuman Character asset")
                return

        with ScopedMetaHumanCharacterEditor(character=metahuman):
            
            fit_options = unreal.FitToTargetOptions()
            fit_options.alignment_options = unreal.MetaHumanAlignmentOptions.SCALING_ROTATION_TRANSLATION
            fit_options.adapt_neck = True
            fit_options.disable_high_frequency_delta = True

            fit_params = unreal.MetaHumanCharacterFitToVerticesParams()
            fit_params.options = fit_options
            
            # Fill in the vertices for head, teeth and eyes
            # fit_params.head_vertices = ...
            # fit_params.teeth_vertices = ...
            # fit_params.left_eye_vertices = ...
            # fit_params.right_eye_vertices = ...
                        
            metahuman_character_subsystem.fit_state_to_target_vertices(character=metahuman, params=fit_params)


if __name__ == "__main__":
    test_conform_from_dna()

    # Skipping fit to vertices since it needs to load vertices so the test will fail
    # test_fit_to_vertices()

    test_import_from_template()
    test_import_from_body_template()