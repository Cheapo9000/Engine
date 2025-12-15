// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EyeTrackerTypes.h"

#ifdef EYETRACKER_EyeTrackerTypes_generated_h
#error "EyeTrackerTypes.generated.h already included, missing '#pragma once' in EyeTrackerTypes.h"
#endif
#define EYETRACKER_EyeTrackerTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEyeTrackerGazeData ***********************************************
struct Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics;
#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics; \
	EYETRACKER_API static class UScriptStruct* StaticStruct();


struct FEyeTrackerGazeData;
// ********** End ScriptStruct FEyeTrackerGazeData *************************************************

// ********** Begin ScriptStruct FEyeTrackerStereoGazeData *****************************************
struct Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics;
#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics; \
	EYETRACKER_API static class UScriptStruct* StaticStruct();


struct FEyeTrackerStereoGazeData;
// ********** End ScriptStruct FEyeTrackerStereoGazeData *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h

// ********** Begin Enum EEyeTrackerStatus *********************************************************
#define FOREACH_ENUM_EEYETRACKERSTATUS(op) \
	op(EEyeTrackerStatus::NotConnected) \
	op(EEyeTrackerStatus::NotTracking) \
	op(EEyeTrackerStatus::Tracking) 

enum class EEyeTrackerStatus : uint8;
template<> struct TIsUEnumClass<EEyeTrackerStatus> { enum { Value = true }; };
template<> EYETRACKER_NON_ATTRIBUTED_API UEnum* StaticEnum<EEyeTrackerStatus>();
// ********** End Enum EEyeTrackerStatus ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
