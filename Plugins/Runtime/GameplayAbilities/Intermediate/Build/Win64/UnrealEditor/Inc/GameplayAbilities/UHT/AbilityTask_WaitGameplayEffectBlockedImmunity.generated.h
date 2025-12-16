// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayEffectBlockedImmunity.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectBlockedImmunity_generated_h
#error "AbilityTask_WaitGameplayEffectBlockedImmunity.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayEffectBlockedImmunity.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectBlockedImmunity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitGameplayEffectBlockedImmunity;
class UGameplayAbility;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayTagRequirements;

// ********** Begin Delegate FGameplayEffectBlockedDelegate ****************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_14_DELEGATE \
GAMEPLAYABILITIES_API void FGameplayEffectBlockedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameplayEffectBlockedDelegate, FGameplayEffectSpecHandle BlockedSpec, FActiveGameplayEffectHandle ImmunityGameplayEffectHandle);


// ********** End Delegate FGameplayEffectBlockedDelegate ******************************************

// ********** Begin Class UAbilityTask_WaitGameplayEffectBlockedImmunity ***************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitGameplayEffectBlockedByImmunity);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectBlockedImmunity(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayEffectBlockedImmunity, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectBlockedImmunity)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectBlockedImmunity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectBlockedImmunity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayEffectBlockedImmunity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectBlockedImmunity); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayEffectBlockedImmunity(UAbilityTask_WaitGameplayEffectBlockedImmunity&&) = delete; \
	UAbilityTask_WaitGameplayEffectBlockedImmunity(const UAbilityTask_WaitGameplayEffectBlockedImmunity&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayEffectBlockedImmunity();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayEffectBlockedImmunity;

// ********** End Class UAbilityTask_WaitGameplayEffectBlockedImmunity *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
