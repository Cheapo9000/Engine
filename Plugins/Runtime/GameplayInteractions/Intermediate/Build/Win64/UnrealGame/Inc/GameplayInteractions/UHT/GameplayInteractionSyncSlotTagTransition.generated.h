// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTree/GameplayInteractionSyncSlotTagTransition.h"

#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayInteractionSyncSlotTagTransition_generated_h
#error "GameplayInteractionSyncSlotTagTransition.generated.h already included, missing '#pragma once' in GameplayInteractionSyncSlotTagTransition.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayInteractionSyncSlotTagTransition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayInteractionSyncSlotTagTransitionInstanceData *************
struct Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


struct FGameplayInteractionSyncSlotTagTransitionInstanceData;
// ********** End ScriptStruct FGameplayInteractionSyncSlotTagTransitionInstanceData ***************

// ********** Begin ScriptStruct FGameplayInteractionSyncSlotTagTransitionTask *********************
struct Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayInteractionStateTreeTask Super;


struct FGameplayInteractionSyncSlotTagTransitionTask;
// ********** End ScriptStruct FGameplayInteractionSyncSlotTagTransitionTask ***********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h

// ********** Begin Enum EGameplayInteractionSyncSlotTransitionState *******************************
#define FOREACH_ENUM_EGAMEPLAYINTERACTIONSYNCSLOTTRANSITIONSTATE(op) \
	op(EGameplayInteractionSyncSlotTransitionState::WaitingForFromTag) \
	op(EGameplayInteractionSyncSlotTransitionState::WaitingForToTag) \
	op(EGameplayInteractionSyncSlotTransitionState::Completed) 

enum class EGameplayInteractionSyncSlotTransitionState : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionSyncSlotTransitionState> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayInteractionSyncSlotTransitionState>();
// ********** End Enum EGameplayInteractionSyncSlotTransitionState *********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
