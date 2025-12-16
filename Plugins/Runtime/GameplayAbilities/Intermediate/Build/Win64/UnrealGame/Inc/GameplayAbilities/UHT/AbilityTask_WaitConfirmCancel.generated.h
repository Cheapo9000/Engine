// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitConfirmCancel.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitConfirmCancel_generated_h
#error "AbilityTask_WaitConfirmCancel.generated.h already included, missing '#pragma once' in AbilityTask_WaitConfirmCancel.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitConfirmCancel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitConfirmCancel;
class UGameplayAbility;

// ********** Begin Delegate FWaitConfirmCancelDelegate ********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FWaitConfirmCancelDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitConfirmCancelDelegate);


// ********** End Delegate FWaitConfirmCancelDelegate **********************************************

// ********** Begin Class UAbilityTask_WaitConfirmCancel *******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitConfirmCancel); \
	DECLARE_FUNCTION(execOnLocalCancelCallback); \
	DECLARE_FUNCTION(execOnLocalConfirmCallback); \
	DECLARE_FUNCTION(execOnCancelCallback); \
	DECLARE_FUNCTION(execOnConfirmCallback);


struct Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitConfirmCancel(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitConfirmCancel, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitConfirmCancel)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitConfirmCancel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitConfirmCancel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitConfirmCancel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitConfirmCancel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitConfirmCancel(UAbilityTask_WaitConfirmCancel&&) = delete; \
	UAbilityTask_WaitConfirmCancel(const UAbilityTask_WaitConfirmCancel&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitConfirmCancel();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitConfirmCancel;

// ********** End Class UAbilityTask_WaitConfirmCancel *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
