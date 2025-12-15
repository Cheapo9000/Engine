// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTask.h"

#ifdef GAMEPLAYTASKS_GameplayTask_generated_h
#error "GameplayTask.generated.h already included, missing '#pragma once' in GameplayTask.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayResourceSet **********************************************
struct Z_Construct_UScriptStruct_FGameplayResourceSet_Statics;
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayResourceSet_Statics; \
	GAMEPLAYTASKS_API static class UScriptStruct* StaticStruct();


struct FGameplayResourceSet;
// ********** End ScriptStruct FGameplayResourceSet ************************************************

// ********** Begin Delegate FGenericGameplayTaskDelegate ******************************************
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_151_DELEGATE \
static GAMEPLAYTASKS_API void FGenericGameplayTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& GenericGameplayTaskDelegate);


// ********** End Delegate FGenericGameplayTaskDelegate ********************************************

// ********** Begin Class UGameplayTask ************************************************************
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execReadyForActivation);


struct Z_Construct_UClass_UGameplayTask_Statics;
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask(); \
	friend struct ::Z_Construct_UClass_UGameplayTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTASKS_API UClass* ::Z_Construct_UClass_UGameplayTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), Z_Construct_UClass_UGameplayTask_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTask) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask*>(this); }


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTask(UGameplayTask&&) = delete; \
	UGameplayTask(const UGameplayTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask) \
	GAMEPLAYTASKS_API virtual ~UGameplayTask();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_144_PROLOG
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTask;

// ********** End Class UGameplayTask **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h

// ********** Begin Enum EGameplayTaskState ********************************************************
#define FOREACH_ENUM_EGAMEPLAYTASKSTATE(op) \
	op(EGameplayTaskState::Uninitialized) \
	op(EGameplayTaskState::AwaitingActivation) \
	op(EGameplayTaskState::Paused) \
	op(EGameplayTaskState::Active) \
	op(EGameplayTaskState::Finished) 

enum class EGameplayTaskState : uint8;
template<> struct TIsUEnumClass<EGameplayTaskState> { enum { Value = true }; };
template<> GAMEPLAYTASKS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayTaskState>();
// ********** End Enum EGameplayTaskState **********************************************************

// ********** Begin Enum ETaskResourceOverlapPolicy ************************************************
#define FOREACH_ENUM_ETASKRESOURCEOVERLAPPOLICY(op) \
	op(ETaskResourceOverlapPolicy::StartOnTop) \
	op(ETaskResourceOverlapPolicy::StartAtEnd) \
	op(ETaskResourceOverlapPolicy::RequestCancelAndStartOnTop) \
	op(ETaskResourceOverlapPolicy::RequestCancelAndStartAtEnd) 

enum class ETaskResourceOverlapPolicy : uint8;
template<> struct TIsUEnumClass<ETaskResourceOverlapPolicy> { enum { Value = true }; };
template<> GAMEPLAYTASKS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETaskResourceOverlapPolicy>();
// ********** End Enum ETaskResourceOverlapPolicy **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
