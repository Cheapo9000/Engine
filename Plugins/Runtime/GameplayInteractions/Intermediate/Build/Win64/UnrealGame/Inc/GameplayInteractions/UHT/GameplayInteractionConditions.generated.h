// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTree/GameplayInteractionConditions.h"

#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayInteractionConditions_generated_h
#error "GameplayInteractionConditions.generated.h already included, missing '#pragma once' in GameplayInteractionConditions.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayInteractionConditions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayInteractionMatchSlotTagsConditionInstanceData ************
struct Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


struct FGameplayInteractionMatchSlotTagsConditionInstanceData;
// ********** End ScriptStruct FGameplayInteractionMatchSlotTagsConditionInstanceData **************

// ********** Begin ScriptStruct FGameplayInteractionSlotTagsMatchCondition ************************
struct Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayInteractionStateTreeCondition Super;


struct FGameplayInteractionSlotTagsMatchCondition;
// ********** End ScriptStruct FGameplayInteractionSlotTagsMatchCondition **************************

// ********** Begin ScriptStruct FGameplayInteractionQuerySlotTagsConditionInstanceData ************
struct Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


struct FGameplayInteractionQuerySlotTagsConditionInstanceData;
// ********** End ScriptStruct FGameplayInteractionQuerySlotTagsConditionInstanceData **************

// ********** Begin ScriptStruct FGameplayInteractionQuerySlotTagCondition *************************
struct Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayInteractionStateTreeCondition Super;


struct FGameplayInteractionQuerySlotTagCondition;
// ********** End ScriptStruct FGameplayInteractionQuerySlotTagCondition ***************************

// ********** Begin ScriptStruct FGameplayInteractionIsSlotHandleValidConditionInstanceData ********
struct Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_128_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


struct FGameplayInteractionIsSlotHandleValidConditionInstanceData;
// ********** End ScriptStruct FGameplayInteractionIsSlotHandleValidConditionInstanceData **********

// ********** Begin ScriptStruct FGameplayInteractionIsSlotHandleValidCondition ********************
struct Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayInteractionStateTreeCondition Super;


struct FGameplayInteractionIsSlotHandleValidCondition;
// ********** End ScriptStruct FGameplayInteractionIsSlotHandleValidCondition **********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h

// ********** Begin Enum EGameplayInteractionMatchSlotTagSource ************************************
#define FOREACH_ENUM_EGAMEPLAYINTERACTIONMATCHSLOTTAGSOURCE(op) \
	op(EGameplayInteractionMatchSlotTagSource::ActivityTags) \
	op(EGameplayInteractionMatchSlotTagSource::RuntimeTags) 

enum class EGameplayInteractionMatchSlotTagSource : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionMatchSlotTagSource> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayInteractionMatchSlotTagSource>();
// ********** End Enum EGameplayInteractionMatchSlotTagSource **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
