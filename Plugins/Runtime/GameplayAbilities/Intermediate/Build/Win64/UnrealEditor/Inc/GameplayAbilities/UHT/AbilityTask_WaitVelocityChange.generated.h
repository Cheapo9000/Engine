// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitVelocityChange.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitVelocityChange_generated_h
#error "AbilityTask_WaitVelocityChange.generated.h already included, missing '#pragma once' in AbilityTask_WaitVelocityChange.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitVelocityChange_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitVelocityChange;
class UGameplayAbility;

// ********** Begin Delegate FWaitVelocityChangeDelegate *******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_13_DELEGATE \
GAMEPLAYABILITIES_API void FWaitVelocityChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitVelocityChangeDelegate);


// ********** End Delegate FWaitVelocityChangeDelegate *********************************************

// ********** Begin Class UAbilityTask_WaitVelocityChange ******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateWaitVelocityChange);


struct Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitVelocityChange_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitVelocityChange(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitVelocityChange_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitVelocityChange, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitVelocityChange_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitVelocityChange)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitVelocityChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitVelocityChange) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitVelocityChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitVelocityChange); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitVelocityChange(UAbilityTask_WaitVelocityChange&&) = delete; \
	UAbilityTask_WaitVelocityChange(const UAbilityTask_WaitVelocityChange&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitVelocityChange();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitVelocityChange;

// ********** End Class UAbilityTask_WaitVelocityChange ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
