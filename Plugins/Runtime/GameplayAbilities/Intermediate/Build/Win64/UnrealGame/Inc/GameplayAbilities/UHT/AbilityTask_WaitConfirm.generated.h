// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitConfirm.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitConfirm_generated_h
#error "AbilityTask_WaitConfirm.generated.h already included, missing '#pragma once' in AbilityTask_WaitConfirm.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitConfirm_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitConfirm;
class UGameplayAbility;

// ********** Begin Class UAbilityTask_WaitConfirm *************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitConfirm); \
	DECLARE_FUNCTION(execOnConfirmCallback);


struct Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitConfirm_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitConfirm(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitConfirm_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitConfirm, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitConfirm_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitConfirm)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitConfirm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitConfirm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitConfirm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitConfirm); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitConfirm(UAbilityTask_WaitConfirm&&) = delete; \
	UAbilityTask_WaitConfirm(const UAbilityTask_WaitConfirm&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitConfirm();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitConfirm;

// ********** End Class UAbilityTask_WaitConfirm ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
