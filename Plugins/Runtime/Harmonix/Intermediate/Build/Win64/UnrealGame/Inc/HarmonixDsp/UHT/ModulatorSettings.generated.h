// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/Modulators/Settings/ModulatorSettings.h"

#ifdef HARMONIXDSP_ModulatorSettings_generated_h
#error "ModulatorSettings.generated.h already included, missing '#pragma once' in ModulatorSettings.h"
#endif
#define HARMONIXDSP_ModulatorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModulatorSettings ************************************************
struct Z_Construct_UScriptStruct_FModulatorSettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Modulators_Settings_ModulatorSettings_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModulatorSettings_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FModulatorSettings;
// ********** End ScriptStruct FModulatorSettings **************************************************

// ********** Begin ScriptStruct FModulatorSettingsArray *******************************************
struct Z_Construct_UScriptStruct_FModulatorSettingsArray_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Modulators_Settings_ModulatorSettings_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModulatorSettingsArray_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FModulatorSettingsArray;
// ********** End ScriptStruct FModulatorSettingsArray *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Modulators_Settings_ModulatorSettings_h

// ********** Begin Enum EModulatorTarget **********************************************************
#define FOREACH_ENUM_EMODULATORTARGET(op) \
	op(EModulatorTarget::StartPoint) \
	op(EModulatorTarget::Pitch) \
	op(EModulatorTarget::Num) \
	op(EModulatorTarget::None) 

enum class EModulatorTarget : uint8;
template<> struct TIsUEnumClass<EModulatorTarget> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EModulatorTarget>();
// ********** End Enum EModulatorTarget ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
