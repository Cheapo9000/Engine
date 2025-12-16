// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitGameplayTagCountChanged.h"

#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitGameplayTagCountChanged_generated_h
#error "AbilityAsync_WaitGameplayTagCountChanged.generated.h already included, missing '#pragma once' in AbilityAsync_WaitGameplayTagCountChanged.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitGameplayTagCountChanged_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitGameplayTagCountChanged;
struct FGameplayTag;

// ********** Begin Delegate FAsyncWaitGameplayTagCountDelegate ************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_15_DELEGATE \
static GAMEPLAYABILITIES_API void FAsyncWaitGameplayTagCountDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitGameplayTagCountDelegate, int32 TagCount);


// ********** End Delegate FAsyncWaitGameplayTagCountDelegate **************************************

// ********** Begin Class UAbilityAsync_WaitGameplayTagCountChanged ********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitGameplayTagCountChangedOnActor);


struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayTagCountChanged(); \
	friend struct ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityAsync_WaitGameplayTagCountChanged, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_NoRegister) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayTagCountChanged)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayTagCountChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitGameplayTagCountChanged(UAbilityAsync_WaitGameplayTagCountChanged&&) = delete; \
	UAbilityAsync_WaitGameplayTagCountChanged(const UAbilityAsync_WaitGameplayTagCountChanged&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityAsync_WaitGameplayTagCountChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayTagCountChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayTagCountChanged) \
	GAMEPLAYABILITIES_API virtual ~UAbilityAsync_WaitGameplayTagCountChanged();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityAsync_WaitGameplayTagCountChanged;

// ********** End Class UAbilityAsync_WaitGameplayTagCountChanged **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
