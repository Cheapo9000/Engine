// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitAbilityCommit.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAbilityCommit_generated_h
#error "AbilityTask_WaitAbilityCommit.generated.h already included, missing '#pragma once' in AbilityTask_WaitAbilityCommit.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAbilityCommit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitAbilityCommit;
class UGameplayAbility;
struct FGameplayTag;
struct FGameplayTagQuery;

// ********** Begin Delegate FWaitAbilityCommitDelegate ********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FWaitAbilityCommitDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAbilityCommitDelegate, UGameplayAbility* ActivatedAbility);


// ********** End Delegate FWaitAbilityCommitDelegate **********************************************

// ********** Begin Class UAbilityTask_WaitAbilityCommit *******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForAbilityCommit_Query); \
	DECLARE_FUNCTION(execWaitForAbilityCommit); \
	DECLARE_FUNCTION(execOnAbilityCommit);


struct Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAbilityCommit(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitAbilityCommit, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAbilityCommit)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitAbilityCommit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAbilityCommit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitAbilityCommit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAbilityCommit); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitAbilityCommit(UAbilityTask_WaitAbilityCommit&&) = delete; \
	UAbilityTask_WaitAbilityCommit(const UAbilityTask_WaitAbilityCommit&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitAbilityCommit();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitAbilityCommit;

// ********** End Class UAbilityTask_WaitAbilityCommit *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
