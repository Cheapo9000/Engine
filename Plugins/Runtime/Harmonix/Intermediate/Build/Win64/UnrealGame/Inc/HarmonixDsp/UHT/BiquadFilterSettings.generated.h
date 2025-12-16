// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/Effects/Settings/BiquadFilterSettings.h"

#ifdef HARMONIXDSP_BiquadFilterSettings_generated_h
#error "BiquadFilterSettings.generated.h already included, missing '#pragma once' in BiquadFilterSettings.h"
#endif
#define HARMONIXDSP_BiquadFilterSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBiquadFilterSettings *********************************************
struct Z_Construct_UScriptStruct_FBiquadFilterSettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_BiquadFilterSettings_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBiquadFilterSettings_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FBiquadFilterSettings;
// ********** End ScriptStruct FBiquadFilterSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_BiquadFilterSettings_h

// ********** Begin Enum EBiquadFilterType *********************************************************
#define FOREACH_ENUM_EBIQUADFILTERTYPE(op) \
	op(EBiquadFilterType::LowPass) \
	op(EBiquadFilterType::HighPass) \
	op(EBiquadFilterType::BandPass) \
	op(EBiquadFilterType::Peaking) \
	op(EBiquadFilterType::LowShelf) \
	op(EBiquadFilterType::HighShelf) \
	op(EBiquadFilterType::Num) \
	op(EBiquadFilterType::None) 

enum class EBiquadFilterType;
template<> struct TIsUEnumClass<EBiquadFilterType> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EBiquadFilterType>();
// ********** End Enum EBiquadFilterType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
