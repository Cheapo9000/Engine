import os
import argparse
import sys

import unreal

def main():
    parser = argparse.ArgumentParser(description='Depth Generator Example')
    parser.add_argument('--capture-data-package-path', required=True, type=str, help='Path to the footage capture data asset')
    args = parser.parse_args()

    depth_options = unreal.MetaHumanGenerateDepthWindowOptions()
    depth_options.asset_name = 'depth_asset_name'
    depth_options.package_path.path = '/Game/DepthGenerator/'
    depth_options.image_sequence_root_path.path = os.path.join(unreal.Paths.project_content_dir(), 'DepthGenerator/DepthImageSequence/')

    # The rest of the options are set to their default values:
    # depth_options.reference_camera_calibration = None # Will use calibration from the Footage Capture Data asset (set by default)
    # depth_options.generated_camera_calibration_suffix = '_Generated'
    # depth_options.depth_precision = MetaHumanCaptureDepthPrecisionType.EIGHTIETH
    # depth_options.depth_resolution = MetaHumanCaptureDepthResolutionType.FULL
    # depth_options.min_distance = 10.0
    # depth_options.max_distance = 25.0
    # depth_options.should_compress_depth_files = True

    asset_subsystem = unreal.get_editor_subsystem(unreal.EditorAssetSubsystem)
    capture_data_asset = asset_subsystem.load_asset(asset_path=args.capture_data_package_path)

    if capture_data_asset is None:
        raise RuntimeError(f'Failed to load capture data asset : {args.capture_data_package_path}')
    
    depth_generator = unreal.MetaHumanDepthGenerator()
    success = depth_generator.process(capture_data_asset, depth_options)

    if not success:
        raise RuntimeError('Failed to generate depth')
    
if __name__ == '__main__':
    main()

