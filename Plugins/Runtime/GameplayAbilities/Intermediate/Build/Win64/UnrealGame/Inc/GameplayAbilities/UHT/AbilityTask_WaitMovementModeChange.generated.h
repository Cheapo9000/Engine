// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitMovementModeChange.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitMovementModeChange_generated_h
#error "AbilityTask_WaitMovementModeChange.generated.h already included, missing '#pragma once' in AbilityTask_WaitMovementModeChange.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitMovementModeChange_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAbilityTask_WaitMovementModeChange;
class UGameplayAbility;

// ********** Begin Delegate FMovementModeChangedDelegate ******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_13_DELEGATE \
GAMEPLAYABILITIES_API void FMovementModeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MovementModeChangedDelegate, EMovementMode NewMovementMode);


// ********** End Delegate FMovementModeChangedDelegate ********************************************

// ********** Begin Class UAbilityTask_WaitMovementModeChange **************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateWaitMovementModeChange); \
	DECLARE_FUNCTION(execOnMovementModeChange);


struct Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitMovementModeChange(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitMovementModeChange, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitMovementModeChange)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitMovementModeChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitMovementModeChange) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitMovementModeChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitMovementModeChange); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitMovementModeChange(UAbilityTask_WaitMovementModeChange&&) = delete; \
	UAbilityTask_WaitMovementModeChange(const UAbilityTask_WaitMovementModeChange&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitMovementModeChange();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitMovementModeChange;

// ********** End Class UAbilityTask_WaitMovementModeChange ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
