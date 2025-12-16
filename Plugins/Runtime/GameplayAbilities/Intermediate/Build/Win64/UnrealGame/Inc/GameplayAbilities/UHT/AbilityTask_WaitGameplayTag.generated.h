// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayTag.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayTag_generated_h
#error "AbilityTask_WaitGameplayTag.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayTag.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayTag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitGameplayTagAdded;
class UAbilityTask_WaitGameplayTagRemoved;
class UGameplayAbility;
struct FGameplayTag;

// ********** Begin Delegate FWaitGameplayTagDelegate **********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FWaitGameplayTagDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayTagDelegate);


// ********** End Delegate FWaitGameplayTagDelegate ************************************************

// ********** Begin Class UAbilityTask_WaitGameplayTagAdded ****************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitGameplayTagAdd);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayTagAdded_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagAdded_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayTagAdded(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayTagAdded_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayTagAdded_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayTagAdded, UAbilityTask_WaitGameplayTag, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayTagAdded_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayTagAdded)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTagAdded(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayTagAdded) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayTagAdded); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayTagAdded); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayTagAdded(UAbilityTask_WaitGameplayTagAdded&&) = delete; \
	UAbilityTask_WaitGameplayTagAdded(const UAbilityTask_WaitGameplayTagAdded&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayTagAdded();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayTagAdded;

// ********** End Class UAbilityTask_WaitGameplayTagAdded ******************************************

// ********** Begin Class UAbilityTask_WaitGameplayTagRemoved **************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_37_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitGameplayTagRemove);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayTagRemoved_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagRemoved_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayTagRemoved(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayTagRemoved_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayTagRemoved_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayTagRemoved, UAbilityTask_WaitGameplayTag, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayTagRemoved_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayTagRemoved)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTagRemoved(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayTagRemoved) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayTagRemoved); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayTagRemoved); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayTagRemoved(UAbilityTask_WaitGameplayTagRemoved&&) = delete; \
	UAbilityTask_WaitGameplayTagRemoved(const UAbilityTask_WaitGameplayTagRemoved&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayTagRemoved();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_37_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayTagRemoved;

// ********** End Class UAbilityTask_WaitGameplayTagRemoved ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTag_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
