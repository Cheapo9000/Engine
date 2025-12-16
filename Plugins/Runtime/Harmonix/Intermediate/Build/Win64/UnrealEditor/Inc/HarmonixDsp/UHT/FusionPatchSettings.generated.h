// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/FusionSampler/Settings/FusionPatchSettings.h"

#ifdef HARMONIXDSP_FusionPatchSettings_generated_h
#error "FusionPatchSettings.generated.h already included, missing '#pragma once' in FusionPatchSettings.h"
#endif
#define HARMONIXDSP_FusionPatchSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFusionPatchSettings **********************************************
struct Z_Construct_UScriptStruct_FFusionPatchSettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_Settings_FusionPatchSettings_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFusionPatchSettings_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FFusionPatchSettings;
// ********** End ScriptStruct FFusionPatchSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_Settings_FusionPatchSettings_h

// ********** Begin Enum EKeyzoneSelectMode ********************************************************
#define FOREACH_ENUM_EKEYZONESELECTMODE(op) \
	op(EKeyzoneSelectMode::Layers) \
	op(EKeyzoneSelectMode::Random) \
	op(EKeyzoneSelectMode::RandomWithRepetition) \
	op(EKeyzoneSelectMode::Cycle) \
	op(EKeyzoneSelectMode::Num) \
	op(EKeyzoneSelectMode::Invalid) 

enum class EKeyzoneSelectMode : uint8;
template<> struct TIsUEnumClass<EKeyzoneSelectMode> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EKeyzoneSelectMode>();
// ********** End Enum EKeyzoneSelectMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
