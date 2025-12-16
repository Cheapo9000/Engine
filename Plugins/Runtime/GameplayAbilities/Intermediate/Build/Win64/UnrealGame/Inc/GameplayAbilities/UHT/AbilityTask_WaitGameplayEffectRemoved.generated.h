// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectRemoved_generated_h
#error "AbilityTask_WaitGameplayEffectRemoved.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayEffectRemoved.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectRemoved_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitGameplayEffectRemoved;
class UGameplayAbility;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectRemovalInfo;

// ********** Begin Delegate FWaitGameplayEffectRemovedDelegate ************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FWaitGameplayEffectRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayEffectRemovedDelegate, FGameplayEffectRemovalInfo const& GameplayEffectRemovalInfo);


// ********** End Delegate FWaitGameplayEffectRemovedDelegate **************************************

// ********** Begin Class UAbilityTask_WaitGameplayEffectRemoved ***********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForGameplayEffectRemoved); \
	DECLARE_FUNCTION(execOnGameplayEffectRemoved);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectRemoved(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayEffectRemoved, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectRemoved)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectRemoved(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectRemoved) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayEffectRemoved); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectRemoved); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayEffectRemoved(UAbilityTask_WaitGameplayEffectRemoved&&) = delete; \
	UAbilityTask_WaitGameplayEffectRemoved(const UAbilityTask_WaitGameplayEffectRemoved&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayEffectRemoved();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayEffectRemoved;

// ********** End Class UAbilityTask_WaitGameplayEffectRemoved *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
