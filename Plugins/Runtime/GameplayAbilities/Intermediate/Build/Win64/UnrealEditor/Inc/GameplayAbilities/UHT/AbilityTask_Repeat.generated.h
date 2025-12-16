// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_Repeat.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_Repeat_generated_h
#error "AbilityTask_Repeat.generated.h already included, missing '#pragma once' in AbilityTask_Repeat.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_Repeat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_Repeat;
class UGameplayAbility;

// ********** Begin Delegate FRepeatedActionDelegate ***********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FRepeatedActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& RepeatedActionDelegate, int32 ActionNumber);


// ********** End Delegate FRepeatedActionDelegate *************************************************

// ********** Begin Class UAbilityTask_Repeat ******************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRepeatAction);


struct Z_Construct_UClass_UAbilityTask_Repeat_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_Repeat_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_Repeat(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_Repeat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_Repeat_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_Repeat, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_Repeat_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_Repeat)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_Repeat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_Repeat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_Repeat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_Repeat); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_Repeat(UAbilityTask_Repeat&&) = delete; \
	UAbilityTask_Repeat(const UAbilityTask_Repeat&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_Repeat();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_Repeat;

// ********** End Class UAbilityTask_Repeat ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
