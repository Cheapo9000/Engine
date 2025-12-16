// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCue_Types.h"

#ifdef GAMEPLAYABILITIES_GameplayCue_Types_generated_h
#error "GameplayCue_Types.generated.h already included, missing '#pragma once' in GameplayCue_Types.h"
#endif
#define GAMEPLAYABILITIES_GameplayCue_Types_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayCuePendingExecute ****************************************
struct Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayCuePendingExecute;
// ********** End ScriptStruct FGameplayCuePendingExecute ******************************************

// ********** Begin ScriptStruct FGameplayCueNotifyActorArray **************************************
struct Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayCueNotifyActorArray;
// ********** End ScriptStruct FGameplayCueNotifyActorArray ****************************************

// ********** Begin ScriptStruct FPreallocationInfo ************************************************
struct Z_Construct_UScriptStruct_FPreallocationInfo_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPreallocationInfo_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FPreallocationInfo;
// ********** End ScriptStruct FPreallocationInfo **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h

// ********** Begin Enum EGameplayCuePayloadType ***************************************************
#define FOREACH_ENUM_EGAMEPLAYCUEPAYLOADTYPE(op) \
	op(EGameplayCuePayloadType::CueParameters) \
	op(EGameplayCuePayloadType::FromSpec) 

enum class EGameplayCuePayloadType : uint8;
template<> struct TIsUEnumClass<EGameplayCuePayloadType> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayCuePayloadType>();
// ********** End Enum EGameplayCuePayloadType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
