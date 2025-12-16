// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/Effects/Settings/DistortionSettings.h"

#ifdef HARMONIXDSP_DistortionSettings_generated_h
#error "DistortionSettings.generated.h already included, missing '#pragma once' in DistortionSettings.h"
#endif
#define HARMONIXDSP_DistortionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDistortionFilterSettings *****************************************
struct Z_Construct_UScriptStruct_FDistortionFilterSettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_DistortionSettings_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDistortionFilterSettings_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FDistortionFilterSettings;
// ********** End ScriptStruct FDistortionFilterSettings *******************************************

// ********** Begin ScriptStruct FDistortionSettingsV1 *********************************************
struct Z_Construct_UScriptStruct_FDistortionSettingsV1_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_DistortionSettings_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDistortionSettingsV1_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FDistortionSettingsV1;
// ********** End ScriptStruct FDistortionSettingsV1 ***********************************************

// ********** Begin ScriptStruct FDistortionSettingsV2 *********************************************
struct Z_Construct_UScriptStruct_FDistortionSettingsV2_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_DistortionSettings_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDistortionSettingsV2_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FDistortionSettingsV2;
// ********** End ScriptStruct FDistortionSettingsV2 ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_DistortionSettings_h

// ********** Begin Enum EDistortionTypeV1 *********************************************************
#define FOREACH_ENUM_EDISTORTIONTYPEV1(op) \
	op(EDistortionTypeV1::Clean) \
	op(EDistortionTypeV1::Warm) \
	op(EDistortionTypeV1::Dirty) \
	op(EDistortionTypeV1::Soft) \
	op(EDistortionTypeV1::Asymmetric) \
	op(EDistortionTypeV1::Num) 

enum class EDistortionTypeV1;
template<> struct TIsUEnumClass<EDistortionTypeV1> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistortionTypeV1>();
// ********** End Enum EDistortionTypeV1 ***********************************************************

// ********** Begin Enum EDistortionTypeV2 *********************************************************
#define FOREACH_ENUM_EDISTORTIONTYPEV2(op) \
	op(EDistortionTypeV2::Clean) \
	op(EDistortionTypeV2::Warm) \
	op(EDistortionTypeV2::Clip) \
	op(EDistortionTypeV2::Soft) \
	op(EDistortionTypeV2::Asymmetric) \
	op(EDistortionTypeV2::Cruncher) \
	op(EDistortionTypeV2::CaptCrunch) \
	op(EDistortionTypeV2::Rectifier) \
	op(EDistortionTypeV2::Num) 

enum class EDistortionTypeV2;
template<> struct TIsUEnumClass<EDistortionTypeV2> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistortionTypeV2>();
// ********** End Enum EDistortionTypeV2 ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
