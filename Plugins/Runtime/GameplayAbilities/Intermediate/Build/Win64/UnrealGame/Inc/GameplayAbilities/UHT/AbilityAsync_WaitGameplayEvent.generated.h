// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitGameplayEvent.h"

#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitGameplayEvent_generated_h
#error "AbilityAsync_WaitGameplayEvent.generated.h already included, missing '#pragma once' in AbilityAsync_WaitGameplayEvent.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitGameplayEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitGameplayEvent;
struct FGameplayEventData;
struct FGameplayTag;

// ********** Begin Delegate FEventReceivedDelegate ************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_29_DELEGATE \
static GAMEPLAYABILITIES_API void FEventReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& EventReceivedDelegate, FGameplayEventData Payload);


// ********** End Delegate FEventReceivedDelegate **************************************************

// ********** Begin Class UAbilityAsync_WaitGameplayEvent ******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitGameplayEventToActor);


struct Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayEvent(); \
	friend struct ::Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityAsync_WaitGameplayEvent, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_NoRegister) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayEvent)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitGameplayEvent(UAbilityAsync_WaitGameplayEvent&&) = delete; \
	UAbilityAsync_WaitGameplayEvent(const UAbilityAsync_WaitGameplayEvent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityAsync_WaitGameplayEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayEvent) \
	GAMEPLAYABILITIES_API virtual ~UAbilityAsync_WaitGameplayEvent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityAsync_WaitGameplayEvent;

// ********** End Class UAbilityAsync_WaitGameplayEvent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
