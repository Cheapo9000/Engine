// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/Modulators/Settings/AdsrSettings.h"

#ifdef HARMONIXDSP_AdsrSettings_generated_h
#error "AdsrSettings.generated.h already included, missing '#pragma once' in AdsrSettings.h"
#endif
#define HARMONIXDSP_AdsrSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAdsrSettings *****************************************************
struct Z_Construct_UScriptStruct_FAdsrSettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Modulators_Settings_AdsrSettings_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAdsrSettings_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FAdsrSettings;
// ********** End ScriptStruct FAdsrSettings *******************************************************

// ********** Begin ScriptStruct FAdsrSettingsArray ************************************************
struct Z_Construct_UScriptStruct_FAdsrSettingsArray_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Modulators_Settings_AdsrSettings_h_172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAdsrSettingsArray_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FAdsrSettingsArray;
// ********** End ScriptStruct FAdsrSettingsArray **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Modulators_Settings_AdsrSettings_h

// ********** Begin Enum EAdsrTarget ***************************************************************
#define FOREACH_ENUM_EADSRTARGET(op) \
	op(EAdsrTarget::Volume) \
	op(EAdsrTarget::FilterFreq) \
	op(EAdsrTarget::Num) \
	op(EAdsrTarget::Invalid) 

enum class EAdsrTarget : uint8;
template<> struct TIsUEnumClass<EAdsrTarget> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EAdsrTarget>();
// ********** End Enum EAdsrTarget *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
