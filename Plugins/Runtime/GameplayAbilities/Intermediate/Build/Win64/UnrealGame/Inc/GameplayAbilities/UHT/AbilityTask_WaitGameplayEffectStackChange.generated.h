// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectStackChange_generated_h
#error "AbilityTask_WaitGameplayEffectStackChange.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayEffectStackChange.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectStackChange_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitGameplayEffectStackChange;
class UGameplayAbility;
struct FActiveGameplayEffectHandle;

// ********** Begin Delegate FWaitGameplayEffectStackChangeDelegate ********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FWaitGameplayEffectStackChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayEffectStackChangeDelegate, FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount);


// ********** End Delegate FWaitGameplayEffectStackChangeDelegate **********************************

// ********** Begin Class UAbilityTask_WaitGameplayEffectStackChange *******************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForGameplayEffectStackChange); \
	DECLARE_FUNCTION(execOnGameplayEffectStackChange);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectStackChange(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayEffectStackChange, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectStackChange)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectStackChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectStackChange) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayEffectStackChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectStackChange); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayEffectStackChange(UAbilityTask_WaitGameplayEffectStackChange&&) = delete; \
	UAbilityTask_WaitGameplayEffectStackChange(const UAbilityTask_WaitGameplayEffectStackChange&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayEffectStackChange();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayEffectStackChange;

// ********** End Class UAbilityTask_WaitGameplayEffectStackChange *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
