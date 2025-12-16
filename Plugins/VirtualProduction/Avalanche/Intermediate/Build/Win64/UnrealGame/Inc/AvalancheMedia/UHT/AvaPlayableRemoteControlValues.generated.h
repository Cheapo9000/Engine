// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/AvaPlayableRemoteControlValues.h"

#ifdef AVALANCHEMEDIA_AvaPlayableRemoteControlValues_generated_h
#error "AvaPlayableRemoteControlValues.generated.h already included, missing '#pragma once' in AvaPlayableRemoteControlValues.h"
#endif
#define AVALANCHEMEDIA_AvaPlayableRemoteControlValues_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaPlayableRemoteControlValue ************************************
struct Z_Construct_UScriptStruct_FAvaPlayableRemoteControlValue_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableRemoteControlValues_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlayableRemoteControlValue_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAvaPlayableRemoteControlValue;
// ********** End ScriptStruct FAvaPlayableRemoteControlValue **************************************

// ********** Begin ScriptStruct FAvaPlayableRemoteControlValues ***********************************
struct Z_Construct_UScriptStruct_FAvaPlayableRemoteControlValues_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableRemoteControlValues_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlayableRemoteControlValues_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAvaPlayableRemoteControlValues;
// ********** End ScriptStruct FAvaPlayableRemoteControlValues *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableRemoteControlValues_h

// ********** Begin Enum EAvaPlayableRemoteControlChanges ******************************************
#define FOREACH_ENUM_EAVAPLAYABLEREMOTECONTROLCHANGES(op) \
	op(EAvaPlayableRemoteControlChanges::None) \
	op(EAvaPlayableRemoteControlChanges::EntityValues) \
	op(EAvaPlayableRemoteControlChanges::ControllerValues) \
	op(EAvaPlayableRemoteControlChanges::All) 

enum class EAvaPlayableRemoteControlChanges : uint8;
template<> struct TIsUEnumClass<EAvaPlayableRemoteControlChanges> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlayableRemoteControlChanges>();
// ********** End Enum EAvaPlayableRemoteControlChanges ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
