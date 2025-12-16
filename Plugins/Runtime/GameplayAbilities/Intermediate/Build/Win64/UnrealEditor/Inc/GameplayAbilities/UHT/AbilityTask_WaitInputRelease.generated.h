// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitInputRelease.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitInputRelease_generated_h
#error "AbilityTask_WaitInputRelease.generated.h already included, missing '#pragma once' in AbilityTask_WaitInputRelease.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitInputRelease_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitInputRelease;
class UGameplayAbility;

// ********** Begin Delegate FInputReleaseDelegate *************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FInputReleaseDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputReleaseDelegate, float TimeHeld);


// ********** End Delegate FInputReleaseDelegate ***************************************************

// ********** Begin Class UAbilityTask_WaitInputRelease ********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitInputRelease); \
	DECLARE_FUNCTION(execOnReleaseCallback);


struct Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitInputRelease_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitInputRelease(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitInputRelease_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitInputRelease, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitInputRelease_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitInputRelease)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitInputRelease(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitInputRelease) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitInputRelease); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitInputRelease); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitInputRelease(UAbilityTask_WaitInputRelease&&) = delete; \
	UAbilityTask_WaitInputRelease(const UAbilityTask_WaitInputRelease&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitInputRelease();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitInputRelease;

// ********** End Class UAbilityTask_WaitInputRelease **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
