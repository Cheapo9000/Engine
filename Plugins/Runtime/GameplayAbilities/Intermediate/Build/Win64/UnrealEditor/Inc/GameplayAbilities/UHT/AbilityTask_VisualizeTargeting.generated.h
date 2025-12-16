// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_VisualizeTargeting.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_VisualizeTargeting_generated_h
#error "AbilityTask_VisualizeTargeting.generated.h already included, missing '#pragma once' in AbilityTask_VisualizeTargeting.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_VisualizeTargeting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameplayAbilityTargetActor;
class UAbilityTask_VisualizeTargeting;
class UClass;
class UGameplayAbility;

// ********** Begin Delegate FVisualizeTargetingDelegate *******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_14_DELEGATE \
GAMEPLAYABILITIES_API void FVisualizeTargetingDelegate_DelegateWrapper(const FMulticastScriptDelegate& VisualizeTargetingDelegate);


// ********** End Delegate FVisualizeTargetingDelegate *********************************************

// ********** Begin Class UAbilityTask_VisualizeTargeting ******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execVisualizeTargetingUsingActor); \
	DECLARE_FUNCTION(execVisualizeTargeting);


struct Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_VisualizeTargeting(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_VisualizeTargeting, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_VisualizeTargeting)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_VisualizeTargeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_VisualizeTargeting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_VisualizeTargeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_VisualizeTargeting); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_VisualizeTargeting(UAbilityTask_VisualizeTargeting&&) = delete; \
	UAbilityTask_VisualizeTargeting(const UAbilityTask_VisualizeTargeting&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_VisualizeTargeting();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_VisualizeTargeting;

// ********** End Class UAbilityTask_VisualizeTargeting ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
