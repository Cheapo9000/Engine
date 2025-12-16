// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/Modulators/Settings/LfoSettings.h"

#ifdef HARMONIXDSP_LfoSettings_generated_h
#error "LfoSettings.generated.h already included, missing '#pragma once' in LfoSettings.h"
#endif
#define HARMONIXDSP_LfoSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLfoSettings ******************************************************
struct Z_Construct_UScriptStruct_FLfoSettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Modulators_Settings_LfoSettings_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLfoSettings_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FLfoSettings;
// ********** End ScriptStruct FLfoSettings ********************************************************

// ********** Begin ScriptStruct FLfoSettingsArray *************************************************
struct Z_Construct_UScriptStruct_FLfoSettingsArray_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Modulators_Settings_LfoSettings_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLfoSettingsArray_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FLfoSettingsArray;
// ********** End ScriptStruct FLfoSettingsArray ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Modulators_Settings_LfoSettings_h

// ********** Begin Enum EWaveShape ****************************************************************
#define FOREACH_ENUM_EWAVESHAPE(op) \
	op(EWaveShape::Sine) \
	op(EWaveShape::Square) \
	op(EWaveShape::SawUp) \
	op(EWaveShape::SawDown) \
	op(EWaveShape::Triangle) \
	op(EWaveShape::Random) \
	op(EWaveShape::Num) \
	op(EWaveShape::None) 

enum class EWaveShape : uint8;
template<> struct TIsUEnumClass<EWaveShape> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EWaveShape>();
// ********** End Enum EWaveShape ******************************************************************

// ********** Begin Enum ELfoTarget ****************************************************************
#define FOREACH_ENUM_ELFOTARGET(op) \
	op(ELfoTarget::Pan) \
	op(ELfoTarget::Pitch) \
	op(ELfoTarget::FilterFreq) \
	op(ELfoTarget::Num) \
	op(ELfoTarget::None) 

enum class ELfoTarget : uint8;
template<> struct TIsUEnumClass<ELfoTarget> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<ELfoTarget>();
// ********** End Enum ELfoTarget ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
