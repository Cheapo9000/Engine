// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitTargetData.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitTargetData_generated_h
#error "AbilityTask_WaitTargetData.generated.h already included, missing '#pragma once' in AbilityTask_WaitTargetData.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitTargetData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameplayAbilityTargetActor;
class UAbilityTask_WaitTargetData;
class UClass;
class UGameplayAbility;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayTag;

// ********** Begin Delegate FWaitTargetDataDelegate ***********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_14_DELEGATE \
GAMEPLAYABILITIES_API void FWaitTargetDataDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitTargetDataDelegate, FGameplayAbilityTargetDataHandle const& Data);


// ********** End Delegate FWaitTargetDataDelegate *************************************************

// ********** Begin Class UAbilityTask_WaitTargetData **********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execWaitTargetDataUsingActor); \
	DECLARE_FUNCTION(execWaitTargetData); \
	DECLARE_FUNCTION(execOnTargetDataCancelledCallback); \
	DECLARE_FUNCTION(execOnTargetDataReadyCallback); \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCancelledCallback); \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCallback);


struct Z_Construct_UClass_UAbilityTask_WaitTargetData_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitTargetData_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitTargetData(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitTargetData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitTargetData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitTargetData, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitTargetData_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitTargetData)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitTargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitTargetData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitTargetData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitTargetData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitTargetData(UAbilityTask_WaitTargetData&&) = delete; \
	UAbilityTask_WaitTargetData(const UAbilityTask_WaitTargetData&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitTargetData();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_26_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitTargetData;

// ********** End Class UAbilityTask_WaitTargetData ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
