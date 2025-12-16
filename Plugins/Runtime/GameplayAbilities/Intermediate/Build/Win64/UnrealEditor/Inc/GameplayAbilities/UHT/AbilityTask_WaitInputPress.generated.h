// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitInputPress.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitInputPress_generated_h
#error "AbilityTask_WaitInputPress.generated.h already included, missing '#pragma once' in AbilityTask_WaitInputPress.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitInputPress_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitInputPress;
class UGameplayAbility;

// ********** Begin Delegate FInputPressDelegate ***************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FInputPressDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputPressDelegate, float TimeWaited);


// ********** End Delegate FInputPressDelegate *****************************************************

// ********** Begin Class UAbilityTask_WaitInputPress **********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitInputPress); \
	DECLARE_FUNCTION(execOnPressCallback);


struct Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitInputPress_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitInputPress(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitInputPress_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitInputPress, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitInputPress_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitInputPress)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitInputPress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitInputPress) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitInputPress); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitInputPress); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitInputPress(UAbilityTask_WaitInputPress&&) = delete; \
	UAbilityTask_WaitInputPress(const UAbilityTask_WaitInputPress&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitInputPress();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitInputPress;

// ********** End Class UAbilityTask_WaitInputPress ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
