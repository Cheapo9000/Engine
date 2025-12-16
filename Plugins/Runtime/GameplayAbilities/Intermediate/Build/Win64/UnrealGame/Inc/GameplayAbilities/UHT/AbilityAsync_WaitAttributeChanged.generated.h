// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitAttributeChanged.h"

#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitAttributeChanged_generated_h
#error "AbilityAsync_WaitAttributeChanged.generated.h already included, missing '#pragma once' in AbilityAsync_WaitAttributeChanged.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitAttributeChanged_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitAttributeChanged;
struct FGameplayAttribute;

// ********** Begin Delegate FAsyncWaitAttributeChangedDelegate ************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_29_DELEGATE \
static GAMEPLAYABILITIES_API void FAsyncWaitAttributeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitAttributeChangedDelegate, FGameplayAttribute Attribute, float NewValue, float OldValue);


// ********** End Delegate FAsyncWaitAttributeChangedDelegate **************************************

// ********** Begin Class UAbilityAsync_WaitAttributeChanged ***************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitForAttributeChanged);


struct Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitAttributeChanged(); \
	friend struct ::Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityAsync_WaitAttributeChanged, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_NoRegister) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitAttributeChanged)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityAsync_WaitAttributeChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitAttributeChanged(UAbilityAsync_WaitAttributeChanged&&) = delete; \
	UAbilityAsync_WaitAttributeChanged(const UAbilityAsync_WaitAttributeChanged&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityAsync_WaitAttributeChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitAttributeChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitAttributeChanged) \
	GAMEPLAYABILITIES_API virtual ~UAbilityAsync_WaitAttributeChanged();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityAsync_WaitAttributeChanged;

// ********** End Class UAbilityAsync_WaitAttributeChanged *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
