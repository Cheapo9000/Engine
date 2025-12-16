// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_PlayMontageAndWait_generated_h
#error "AbilityTask_PlayMontageAndWait.generated.h already included, missing '#pragma once' in AbilityTask_PlayMontageAndWait.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_PlayMontageAndWait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_PlayMontageAndWait;
class UAnimMontage;
class UGameplayAbility;

// ********** Begin Delegate FMontageWaitSimpleDelegate ********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FMontageWaitSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& MontageWaitSimpleDelegate);


// ********** End Delegate FMontageWaitSimpleDelegate **********************************************

// ********** Begin Class UAbilityTask_PlayMontageAndWait ******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnGameplayAbilityCancelled); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnMontageBlendedIn);


struct Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_PlayMontageAndWait(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_PlayMontageAndWait, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_PlayMontageAndWait)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_PlayMontageAndWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_PlayMontageAndWait(UAbilityTask_PlayMontageAndWait&&) = delete; \
	UAbilityTask_PlayMontageAndWait(const UAbilityTask_PlayMontageAndWait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_PlayMontageAndWait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PlayMontageAndWait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PlayMontageAndWait) \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_PlayMontageAndWait();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_PlayMontageAndWait;

// ********** End Class UAbilityTask_PlayMontageAndWait ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
