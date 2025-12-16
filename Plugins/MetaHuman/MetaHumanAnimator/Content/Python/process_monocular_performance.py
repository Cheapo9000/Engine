# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
import argparse
import sys


def create_performance_asset(path_to_capture_data : str, save_performance_location : str, *, asset_name: str = None) -> unreal.MetaHumanPerformance:
    """
    Returns a newly created MetaHuman Performance asset based on the input capture data. 
    
    Args
        path_to_capture_data: content path to the capture data used to do the processing in performance
        save_performance_location: content path to store the new performance
    """
    capture_data_asset = unreal.load_asset(path_to_capture_data)
    performance_asset_name = "{0}_Performance".format(capture_data_asset.get_name()) if not asset_name else asset_name

    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
    performance_asset = asset_tools.create_asset(asset_name=performance_asset_name, package_path=save_performance_location, 
                                                 asset_class=unreal.MetaHumanPerformance, factory=unreal.MetaHumanPerformanceFactoryNew())

    # Use this style as set_editor_property doesn't trigger the PostEditChangeProperty required to setup the Performance asset
    performance_asset.set_editor_property("input_type", unreal.DataInputType.MONO_FOOTAGE)
    performance_asset.set_editor_property("footage_capture_data", capture_data_asset)

    return performance_asset


def run():
    """Main function to run for this module"""
    parser = argparse.ArgumentParser(prog=sys.argv[0], description=
        'This script is used to create a MetaHuman Performance asset and process a monocular shot '
        'level sequence export is currently not supported in headless mode and in order for this '
        'script to work, valid capture data asset has to be provided')
    parser.add_argument("--capture-data-path", type=str, required=True, help="Content path to capture data asset to be used by the performance")
    parser.add_argument("--storage-path", type=str, default='/Game/', help="Content path where the assets should be stored, e.g. /Game/MHA-Data/")

    # Optional command line arguments for exporting the processed animation 
    parser.add_argument("--start-frame", type=int, required=False, help="Set starting frame for performance processing")
    parser.add_argument("--end-frame", type=int, required=False, help="Set ending frame up to which the performance will be processed. Note Processing range is N-1")

    args = parser.parse_args()

    # the following params need to extra handling for default values
    processing_start_frame = None
    processing_end_frame = None
    if args.start_frame is not None:
        processing_start_frame = args.start_frame
    if args.end_frame is not None:
        processing_end_frame = args.end_frame

    performance_asset = create_performance_asset(
        path_to_capture_data=args.capture_data_path,
        save_performance_location=args.storage_path)

    from process_performance import process_shot
    process_shot(performance_asset=performance_asset)


if __name__ == "__main__":
    run()
