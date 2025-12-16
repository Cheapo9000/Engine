// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/FusionSampler/Settings/PortamentoSettings.h"

#ifdef HARMONIXDSP_PortamentoSettings_generated_h
#error "PortamentoSettings.generated.h already included, missing '#pragma once' in PortamentoSettings.h"
#endif
#define HARMONIXDSP_PortamentoSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPortamentoSettings ***********************************************
struct Z_Construct_UScriptStruct_FPortamentoSettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_Settings_PortamentoSettings_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPortamentoSettings_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FPortamentoSettings;
// ********** End ScriptStruct FPortamentoSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_Settings_PortamentoSettings_h

// ********** Begin Enum EPortamentoMode ***********************************************************
#define FOREACH_ENUM_EPORTAMENTOMODE(op) \
	op(EPortamentoMode::Legato) \
	op(EPortamentoMode::Persistent) \
	op(EPortamentoMode::Num) \
	op(EPortamentoMode::None) 

enum class EPortamentoMode : uint8;
template<> struct TIsUEnumClass<EPortamentoMode> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EPortamentoMode>();
// ********** End Enum EPortamentoMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
