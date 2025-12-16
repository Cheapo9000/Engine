// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitGameplayEffectApplied.h"

#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitGameplayEffectApplied_generated_h
#error "AbilityAsync_WaitGameplayEffectApplied.generated.h already included, missing '#pragma once' in AbilityAsync_WaitGameplayEffectApplied.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitGameplayEffectApplied_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitGameplayEffectApplied;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayTagRequirements;
struct FGameplayTargetDataFilterHandle;

// ********** Begin Delegate FOnAppliedDelegate ****************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_43_DELEGATE \
static GAMEPLAYABILITIES_API void FOnAppliedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAppliedDelegate, AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);


// ********** End Delegate FOnAppliedDelegate ******************************************************

// ********** Begin Class UAbilityAsync_WaitGameplayEffectApplied **********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitGameplayEffectAppliedToActor);


struct Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayEffectApplied(); \
	friend struct ::Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityAsync_WaitGameplayEffectApplied, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_NoRegister) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayEffectApplied)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayEffectApplied(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitGameplayEffectApplied(UAbilityAsync_WaitGameplayEffectApplied&&) = delete; \
	UAbilityAsync_WaitGameplayEffectApplied(const UAbilityAsync_WaitGameplayEffectApplied&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityAsync_WaitGameplayEffectApplied); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayEffectApplied); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayEffectApplied) \
	GAMEPLAYABILITIES_API virtual ~UAbilityAsync_WaitGameplayEffectApplied();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityAsync_WaitGameplayEffectApplied;

// ********** End Class UAbilityAsync_WaitGameplayEffectApplied ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
