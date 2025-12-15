// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LevelEditorPlayNetworkEmulationSettings.h"

#ifdef UNREALED_LevelEditorPlayNetworkEmulationSettings_generated_h
#error "LevelEditorPlayNetworkEmulationSettings.generated.h already included, missing '#pragma once' in LevelEditorPlayNetworkEmulationSettings.h"
#endif
#define UNREALED_LevelEditorPlayNetworkEmulationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetworkEmulationPacketSettings ***********************************
struct Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FNetworkEmulationPacketSettings;
// ********** End ScriptStruct FNetworkEmulationPacketSettings *************************************

// ********** Begin ScriptStruct FLevelEditorPlayNetworkEmulationSettings **************************
struct Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FLevelEditorPlayNetworkEmulationSettings;
// ********** End ScriptStruct FLevelEditorPlayNetworkEmulationSettings ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h

// ********** Begin Enum NetworkEmulationTarget ****************************************************
#define FOREACH_ENUM_NETWORKEMULATIONTARGET(op) \
	op(NetworkEmulationTarget::Server) \
	op(NetworkEmulationTarget::Client) \
	op(NetworkEmulationTarget::Any) 

enum class NetworkEmulationTarget;
template<> struct TIsUEnumClass<NetworkEmulationTarget> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<NetworkEmulationTarget>();
// ********** End Enum NetworkEmulationTarget ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
