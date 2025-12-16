// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/Effects/Settings/VocoderSettings.h"

#ifdef HARMONIXDSP_VocoderSettings_generated_h
#error "VocoderSettings.generated.h already included, missing '#pragma once' in VocoderSettings.h"
#endif
#define HARMONIXDSP_VocoderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVocoderBandConfig ************************************************
struct Z_Construct_UScriptStruct_FVocoderBandConfig_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_VocoderSettings_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVocoderBandConfig_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FVocoderBandConfig;
// ********** End ScriptStruct FVocoderBandConfig **************************************************

// ********** Begin ScriptStruct FVocoderBand ******************************************************
struct Z_Construct_UScriptStruct_FVocoderBand_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_VocoderSettings_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVocoderBand_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FVocoderBand;
// ********** End ScriptStruct FVocoderBand ********************************************************

// ********** Begin ScriptStruct FVocoderSettings **************************************************
struct Z_Construct_UScriptStruct_FVocoderSettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_VocoderSettings_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVocoderSettings_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FVocoderSettings;
// ********** End ScriptStruct FVocoderSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_VocoderSettings_h

// ********** Begin Enum EVocoderBandConfig ********************************************************
#define FOREACH_ENUM_EVOCODERBANDCONFIG(op) \
	op(EVocoderBandConfig::k4) \
	op(EVocoderBandConfig::k8) \
	op(EVocoderBandConfig::k16) \
	op(EVocoderBandConfig::k32) \
	op(EVocoderBandConfig::k64) \
	op(EVocoderBandConfig::k128) \
	op(EVocoderBandConfig::k256) \
	op(EVocoderBandConfig::Num) \
	op(EVocoderBandConfig::None) 

enum class EVocoderBandConfig : uint8;
template<> struct TIsUEnumClass<EVocoderBandConfig> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EVocoderBandConfig>();
// ********** End Enum EVocoderBandConfig **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
