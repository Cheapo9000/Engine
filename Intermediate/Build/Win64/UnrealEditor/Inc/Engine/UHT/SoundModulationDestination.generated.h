// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundModulationDestination.h"

#ifdef ENGINE_SoundModulationDestination_generated_h
#error "SoundModulationDestination.generated.h already included, missing '#pragma once' in SoundModulationDestination.h"
#endif
#define ENGINE_SoundModulationDestination_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundModulationDestinationSettings *******************************
struct Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundModulationDestinationSettings;
// ********** End ScriptStruct FSoundModulationDestinationSettings *********************************

// ********** Begin ScriptStruct FSoundModulationDefaultSettings ***********************************
struct Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundModulationDefaultSettings;
// ********** End ScriptStruct FSoundModulationDefaultSettings *************************************

// ********** Begin ScriptStruct FSoundModulationDefaultRoutingSettings ****************************
struct Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSoundModulationDefaultSettings Super;


struct FSoundModulationDefaultRoutingSettings;
// ********** End ScriptStruct FSoundModulationDefaultRoutingSettings ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h

// ********** Begin Enum EModulationRouting ********************************************************
#define FOREACH_ENUM_EMODULATIONROUTING(op) \
	op(EModulationRouting::Disable) \
	op(EModulationRouting::Inherit) \
	op(EModulationRouting::Override) \
	op(EModulationRouting::Union) 

enum class EModulationRouting : uint8;
template<> struct TIsUEnumClass<EModulationRouting> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModulationRouting>();
// ********** End Enum EModulationRouting **********************************************************

// ********** Begin Enum EModulationDestination ****************************************************
#define FOREACH_ENUM_EMODULATIONDESTINATION(op) \
	op(EModulationDestination::Volume) \
	op(EModulationDestination::Pitch) \
	op(EModulationDestination::Lowpass) \
	op(EModulationDestination::Highpass) \
	op(EModulationDestination::Count) 

enum class EModulationDestination : uint8;
template<> struct TIsUEnumClass<EModulationDestination> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModulationDestination>();
// ********** End Enum EModulationDestination ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
