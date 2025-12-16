// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Self.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectApplied_Self_generated_h
#error "AbilityTask_WaitGameplayEffectApplied_Self.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayEffectApplied_Self.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectApplied_Self_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitGameplayEffectApplied_Self;
class UGameplayAbility;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayTagQuery;
struct FGameplayTagRequirements;
struct FGameplayTargetDataFilterHandle;

// ********** Begin Delegate FGameplayEffectAppliedSelfDelegate ************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_13_DELEGATE \
GAMEPLAYABILITIES_API void FGameplayEffectAppliedSelfDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameplayEffectAppliedSelfDelegate, AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);


// ********** End Delegate FGameplayEffectAppliedSelfDelegate **************************************

// ********** Begin Class UAbilityTask_WaitGameplayEffectApplied_Self ******************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitGameplayEffectAppliedToSelf_Query); \
	DECLARE_FUNCTION(execWaitGameplayEffectAppliedToSelf);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectApplied_Self(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayEffectApplied_Self, UAbilityTask_WaitGameplayEffectApplied, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectApplied_Self)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectApplied_Self(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectApplied_Self) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayEffectApplied_Self); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectApplied_Self); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayEffectApplied_Self(UAbilityTask_WaitGameplayEffectApplied_Self&&) = delete; \
	UAbilityTask_WaitGameplayEffectApplied_Self(const UAbilityTask_WaitGameplayEffectApplied_Self&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayEffectApplied_Self();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayEffectApplied_Self;

// ********** End Class UAbilityTask_WaitGameplayEffectApplied_Self ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
