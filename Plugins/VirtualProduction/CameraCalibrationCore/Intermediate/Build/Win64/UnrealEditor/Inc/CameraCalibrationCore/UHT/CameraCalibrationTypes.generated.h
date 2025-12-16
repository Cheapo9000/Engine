// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraCalibrationTypes.h"

#ifdef CAMERACALIBRATIONCORE_CameraCalibrationTypes_generated_h
#error "CameraCalibrationTypes.generated.h already included, missing '#pragma once' in CameraCalibrationTypes.h"
#endif
#define CAMERACALIBRATIONCORE_CameraCalibrationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDistortionCalibrationResult **************************************
struct Z_Construct_UScriptStruct_FDistortionCalibrationResult_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationTypes_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDistortionCalibrationResult_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


struct FDistortionCalibrationResult;
// ********** End ScriptStruct FDistortionCalibrationResult ****************************************

// ********** Begin ScriptStruct FDistortionHandlerPicker ******************************************
struct Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationTypes_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


struct FDistortionHandlerPicker;
// ********** End ScriptStruct FDistortionHandlerPicker ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationTypes_h

// ********** Begin Enum EDistortionRenderingMode **************************************************
#define FOREACH_ENUM_EDISTORTIONRENDERINGMODE(op) \
	op(EDistortionRenderingMode::PostProcessMaterial) \
	op(EDistortionRenderingMode::SceneViewExtension) \
	op(EDistortionRenderingMode::Preferred) 

enum class EDistortionRenderingMode : uint8;
template<> struct TIsUEnumClass<EDistortionRenderingMode> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistortionRenderingMode>();
// ********** End Enum EDistortionRenderingMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
