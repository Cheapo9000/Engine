// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/PannerDetails.h"

#ifdef HARMONIXDSP_PannerDetails_generated_h
#error "PannerDetails.generated.h already included, missing '#pragma once' in PannerDetails.h"
#endif
#define HARMONIXDSP_PannerDetails_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPannerDetails ****************************************************
struct Z_Construct_UScriptStruct_FPannerDetails_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_PannerDetails_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPannerDetails_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FPannerDetails;
// ********** End ScriptStruct FPannerDetails ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_PannerDetails_h

// ********** Begin Enum EPannerMode ***************************************************************
#define FOREACH_ENUM_EPANNERMODE(op) \
	op(EPannerMode::LegacyStereo) \
	op(EPannerMode::Stereo) \
	op(EPannerMode::Surround) \
	op(EPannerMode::PolarSurround) \
	op(EPannerMode::DirectAssignment) \
	op(EPannerMode::Num) \
	op(EPannerMode::Invalid) 

enum class EPannerMode : uint8;
template<> struct TIsUEnumClass<EPannerMode> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EPannerMode>();
// ********** End Enum EPannerMode *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
