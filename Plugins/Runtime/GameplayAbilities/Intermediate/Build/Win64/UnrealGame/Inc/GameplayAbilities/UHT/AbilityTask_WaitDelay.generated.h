// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitDelay.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitDelay_generated_h
#error "AbilityTask_WaitDelay.generated.h already included, missing '#pragma once' in AbilityTask_WaitDelay.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitDelay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitDelay;
class UGameplayAbility;

// ********** Begin Delegate FWaitDelayDelegate ****************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FWaitDelayDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitDelayDelegate);


// ********** End Delegate FWaitDelayDelegate ******************************************************

// ********** Begin Class UAbilityTask_WaitDelay ***************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitDelay);


struct Z_Construct_UClass_UAbilityTask_WaitDelay_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitDelay_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitDelay(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitDelay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitDelay_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitDelay, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitDelay_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitDelay)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitDelay); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitDelay(UAbilityTask_WaitDelay&&) = delete; \
	UAbilityTask_WaitDelay(const UAbilityTask_WaitDelay&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitDelay();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitDelay;

// ********** End Class UAbilityTask_WaitDelay *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
