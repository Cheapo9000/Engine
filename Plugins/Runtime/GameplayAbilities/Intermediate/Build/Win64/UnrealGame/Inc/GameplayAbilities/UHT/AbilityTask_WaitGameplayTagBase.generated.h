// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayTagBase.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagBase_generated_h
#error "AbilityTask_WaitGameplayTagBase.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayTagBase.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;

// ********** Begin Class UAbilityTask_WaitGameplayTag *********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGameplayTagCallback);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayTag_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTag_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayTag(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayTag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayTag_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayTag, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayTag_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayTag)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayTag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayTag); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayTag(UAbilityTask_WaitGameplayTag&&) = delete; \
	UAbilityTask_WaitGameplayTag(const UAbilityTask_WaitGameplayTag&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayTag();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayTag;

// ********** End Class UAbilityTask_WaitGameplayTag ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
