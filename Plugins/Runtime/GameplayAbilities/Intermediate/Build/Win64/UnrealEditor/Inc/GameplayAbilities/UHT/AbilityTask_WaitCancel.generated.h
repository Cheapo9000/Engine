// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitCancel.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitCancel_generated_h
#error "AbilityTask_WaitCancel.generated.h already included, missing '#pragma once' in AbilityTask_WaitCancel.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitCancel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitCancel;
class UGameplayAbility;

// ********** Begin Delegate FWaitCancelDelegate ***************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FWaitCancelDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitCancelDelegate);


// ********** End Delegate FWaitCancelDelegate *****************************************************

// ********** Begin Class UAbilityTask_WaitCancel **************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitCancel); \
	DECLARE_FUNCTION(execOnLocalCancelCallback); \
	DECLARE_FUNCTION(execOnCancelCallback);


struct Z_Construct_UClass_UAbilityTask_WaitCancel_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitCancel_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitCancel(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitCancel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitCancel_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitCancel, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitCancel_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitCancel)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitCancel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitCancel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitCancel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitCancel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitCancel(UAbilityTask_WaitCancel&&) = delete; \
	UAbilityTask_WaitCancel(const UAbilityTask_WaitCancel&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitCancel();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitCancel;

// ********** End Class UAbilityTask_WaitCancel ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
