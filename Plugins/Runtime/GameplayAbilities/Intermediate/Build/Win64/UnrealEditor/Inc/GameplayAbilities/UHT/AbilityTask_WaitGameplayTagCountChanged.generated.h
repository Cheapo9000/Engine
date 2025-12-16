// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayTagCountChanged.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagCountChanged_generated_h
#error "AbilityTask_WaitGameplayTagCountChanged.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayTagCountChanged.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagCountChanged_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitGameplayTagCountChanged;
class UGameplayAbility;
struct FGameplayTag;

// ********** Begin Delegate FWaitGameplayTagCountDelegate *****************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_10_DELEGATE \
GAMEPLAYABILITIES_API void FWaitGameplayTagCountDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayTagCountDelegate, int32 TagCount);


// ********** End Delegate FWaitGameplayTagCountDelegate *******************************************

// ********** Begin Class UAbilityTask_WaitGameplayTagCountChanged *********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitGameplayTagCountChange);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayTagCountChanged(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayTagCountChanged, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayTagCountChanged)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTagCountChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayTagCountChanged(UAbilityTask_WaitGameplayTagCountChanged&&) = delete; \
	UAbilityTask_WaitGameplayTagCountChanged(const UAbilityTask_WaitGameplayTagCountChanged&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayTagCountChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayTagCountChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayTagCountChanged) \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayTagCountChanged();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayTagCountChanged;

// ********** End Class UAbilityTask_WaitGameplayTagCountChanged ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
