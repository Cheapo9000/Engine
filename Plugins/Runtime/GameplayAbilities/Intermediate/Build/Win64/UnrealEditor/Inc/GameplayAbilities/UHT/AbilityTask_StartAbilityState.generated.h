// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_StartAbilityState.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_StartAbilityState_generated_h
#error "AbilityTask_StartAbilityState.generated.h already included, missing '#pragma once' in AbilityTask_StartAbilityState.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_StartAbilityState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_StartAbilityState;
class UGameplayAbility;

// ********** Begin Delegate FAbilityStateDelegate *************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FAbilityStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& AbilityStateDelegate);


// ********** End Delegate FAbilityStateDelegate ***************************************************

// ********** Begin Class UAbilityTask_StartAbilityState *******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_31_RPC_WRAPPERS \
	DECLARE_FUNCTION(execStartAbilityState);


struct Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_StartAbilityState_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_StartAbilityState(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_StartAbilityState_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_StartAbilityState, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_StartAbilityState_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_StartAbilityState)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_StartAbilityState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_StartAbilityState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_StartAbilityState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_StartAbilityState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_StartAbilityState(UAbilityTask_StartAbilityState&&) = delete; \
	UAbilityTask_StartAbilityState(const UAbilityTask_StartAbilityState&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_StartAbilityState();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_31_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_StartAbilityState;

// ********** End Class UAbilityTask_StartAbilityState *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
