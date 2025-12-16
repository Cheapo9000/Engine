// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CalibratedMapFormat.h"

#ifdef CAMERACALIBRATIONCORE_CalibratedMapFormat_generated_h
#error "CalibratedMapFormat.generated.h already included, missing '#pragma once' in CalibratedMapFormat.h"
#endif
#define CAMERACALIBRATIONCORE_CalibratedMapFormat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCalibratedMapFormat **********************************************
struct Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


struct FCalibratedMapFormat;
// ********** End ScriptStruct FCalibratedMapFormat ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h

// ********** Begin Enum ECalibratedMapPixelOrigin *************************************************
#define FOREACH_ENUM_ECALIBRATEDMAPPIXELORIGIN(op) \
	op(ECalibratedMapPixelOrigin::TopLeft) \
	op(ECalibratedMapPixelOrigin::BottomLeft) 

enum class ECalibratedMapPixelOrigin : uint8;
template<> struct TIsUEnumClass<ECalibratedMapPixelOrigin> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECalibratedMapPixelOrigin>();
// ********** End Enum ECalibratedMapPixelOrigin ***************************************************

// ********** Begin Enum ECalibratedMapChannels ****************************************************
#define FOREACH_ENUM_ECALIBRATEDMAPCHANNELS(op) \
	op(ECalibratedMapChannels::RG) \
	op(ECalibratedMapChannels::BA) \
	op(ECalibratedMapChannels::None) 

enum class ECalibratedMapChannels : uint8;
template<> struct TIsUEnumClass<ECalibratedMapChannels> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECalibratedMapChannels>();
// ********** End Enum ECalibratedMapChannels ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
