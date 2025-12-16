// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitAbilityActivate.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAbilityActivate_generated_h
#error "AbilityTask_WaitAbilityActivate.generated.h already included, missing '#pragma once' in AbilityTask_WaitAbilityActivate.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAbilityActivate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitAbilityActivate;
class UGameplayAbility;
struct FGameplayTag;
struct FGameplayTagQuery;
struct FGameplayTagRequirements;

// ********** Begin Delegate FWaitAbilityActivateDelegate ******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_13_DELEGATE \
GAMEPLAYABILITIES_API void FWaitAbilityActivateDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAbilityActivateDelegate, UGameplayAbility* ActivatedAbility);


// ********** End Delegate FWaitAbilityActivateDelegate ********************************************

// ********** Begin Class UAbilityTask_WaitAbilityActivate *****************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForAbilityActivate_Query); \
	DECLARE_FUNCTION(execWaitForAbilityActivateWithTagRequirements); \
	DECLARE_FUNCTION(execWaitForAbilityActivate); \
	DECLARE_FUNCTION(execOnAbilityActivate);


struct Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAbilityActivate(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitAbilityActivate, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAbilityActivate)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitAbilityActivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAbilityActivate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitAbilityActivate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAbilityActivate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitAbilityActivate(UAbilityTask_WaitAbilityActivate&&) = delete; \
	UAbilityTask_WaitAbilityActivate(const UAbilityTask_WaitAbilityActivate&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitAbilityActivate();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitAbilityActivate;

// ********** End Class UAbilityTask_WaitAbilityActivate *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
