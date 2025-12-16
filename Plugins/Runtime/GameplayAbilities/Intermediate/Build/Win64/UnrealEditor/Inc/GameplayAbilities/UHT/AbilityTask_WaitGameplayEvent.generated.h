// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayEvent_generated_h
#error "AbilityTask_WaitGameplayEvent.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayEvent.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitGameplayEvent;
class UGameplayAbility;
struct FGameplayEventData;
struct FGameplayTag;

// ********** Begin Delegate FWaitGameplayEventDelegate ********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_15_DELEGATE \
GAMEPLAYABILITIES_API void FWaitGameplayEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayEventDelegate, FGameplayEventData Payload);


// ********** End Delegate FWaitGameplayEventDelegate **********************************************

// ********** Begin Class UAbilityTask_WaitGameplayEvent *******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitGameplayEvent);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEvent(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEvent)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEvent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayEvent(UAbilityTask_WaitGameplayEvent&&) = delete; \
	UAbilityTask_WaitGameplayEvent(const UAbilityTask_WaitGameplayEvent&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayEvent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayEvent;

// ********** End Class UAbilityTask_WaitGameplayEvent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
