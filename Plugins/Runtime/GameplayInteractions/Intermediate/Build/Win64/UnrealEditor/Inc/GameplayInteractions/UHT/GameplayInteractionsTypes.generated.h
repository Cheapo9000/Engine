// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayInteractionsTypes.h"

#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayInteractionsTypes_generated_h
#error "GameplayInteractionsTypes.generated.h already included, missing '#pragma once' in GameplayInteractionsTypes.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayInteractionsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EGameplayTaskActuationResult : uint8;

// ********** Begin ScriptStruct FGameplayInteractionAbortContext **********************************
struct Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


struct FGameplayInteractionAbortContext;
// ********** End ScriptStruct FGameplayInteractionAbortContext ************************************

// ********** Begin ScriptStruct FGameplayInteractionSlotUserData **********************************
struct Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FSmartObjectSlotStateData Super;


struct FGameplayInteractionSlotUserData;
// ********** End ScriptStruct FGameplayInteractionSlotUserData ************************************

// ********** Begin ScriptStruct FGameplayInteractionStateTreeTask *********************************
struct Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeTaskBase Super;


struct FGameplayInteractionStateTreeTask;
// ********** End ScriptStruct FGameplayInteractionStateTreeTask ***********************************

// ********** Begin ScriptStruct FGameplayInteractionStateTreeCondition ****************************
struct Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeConditionBase Super;


struct FGameplayInteractionStateTreeCondition;
// ********** End ScriptStruct FGameplayInteractionStateTreeCondition ******************************

// ********** Begin Delegate FGameplayTaskActuationCompleted ***************************************
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_147_DELEGATE \
GAMEPLAYINTERACTIONSMODULE_API void FGameplayTaskActuationCompleted_DelegateWrapper(const FMulticastScriptDelegate& GameplayTaskActuationCompleted, EGameplayTaskActuationResult Result, AActor* Actor);


// ********** End Delegate FGameplayTaskActuationCompleted *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h

// ********** Begin Enum EGameplayInteractionAbortReason *******************************************
#define FOREACH_ENUM_EGAMEPLAYINTERACTIONABORTREASON(op) \
	op(EGameplayInteractionAbortReason::Unset) \
	op(EGameplayInteractionAbortReason::ExternalAbort) \
	op(EGameplayInteractionAbortReason::InternalAbort) 

enum class EGameplayInteractionAbortReason : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionAbortReason> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayInteractionAbortReason>();
// ********** End Enum EGameplayInteractionAbortReason *********************************************

// ********** Begin Enum EGameplayInteractionModifyGameplayTagOperation ****************************
#define FOREACH_ENUM_EGAMEPLAYINTERACTIONMODIFYGAMEPLAYTAGOPERATION(op) \
	op(EGameplayInteractionModifyGameplayTagOperation::Add) \
	op(EGameplayInteractionModifyGameplayTagOperation::Remove) 

enum class EGameplayInteractionModifyGameplayTagOperation : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionModifyGameplayTagOperation> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayInteractionModifyGameplayTagOperation>();
// ********** End Enum EGameplayInteractionModifyGameplayTagOperation ******************************

// ********** Begin Enum EGameplayInteractionTaskModify ********************************************
#define FOREACH_ENUM_EGAMEPLAYINTERACTIONTASKMODIFY(op) \
	op(EGameplayInteractionTaskModify::OnEnterStateUndoOnExitState) \
	op(EGameplayInteractionTaskModify::OnEnterState) \
	op(EGameplayInteractionTaskModify::OnExitState) \
	op(EGameplayInteractionTaskModify::OnExitStateFailed) \
	op(EGameplayInteractionTaskModify::OnExitStateSucceeded) 

enum class EGameplayInteractionTaskModify : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionTaskModify> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayInteractionTaskModify>();
// ********** End Enum EGameplayInteractionTaskModify **********************************************

// ********** Begin Enum EGameplayInteractionTaskTrigger *******************************************
#define FOREACH_ENUM_EGAMEPLAYINTERACTIONTASKTRIGGER(op) \
	op(EGameplayInteractionTaskTrigger::OnEnterState) \
	op(EGameplayInteractionTaskTrigger::OnExitState) \
	op(EGameplayInteractionTaskTrigger::OnExitStateFailed) \
	op(EGameplayInteractionTaskTrigger::OnExitStateSucceeded) 

enum class EGameplayInteractionTaskTrigger : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionTaskTrigger> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayInteractionTaskTrigger>();
// ********** End Enum EGameplayInteractionTaskTrigger *********************************************

// ********** Begin Enum EGameplayTaskActuationResult **********************************************
#define FOREACH_ENUM_EGAMEPLAYTASKACTUATIONRESULT(op) \
	op(EGameplayTaskActuationResult::None) \
	op(EGameplayTaskActuationResult::RequestFailed) \
	op(EGameplayTaskActuationResult::Failed) \
	op(EGameplayTaskActuationResult::Succeeded) 

enum class EGameplayTaskActuationResult : uint8;
template<> struct TIsUEnumClass<EGameplayTaskActuationResult> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayTaskActuationResult>();
// ********** End Enum EGameplayTaskActuationResult ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
