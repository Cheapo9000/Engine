// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAttributeChangeRatioThreshold_generated_h
#error "AbilityTask_WaitAttributeChangeRatioThreshold.generated.h already included, missing '#pragma once' in AbilityTask_WaitAttributeChangeRatioThreshold.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAttributeChangeRatioThreshold_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitAttributeChangeRatioThreshold;
class UGameplayAbility;
struct FGameplayAttribute;

// ********** Begin Delegate FWaitAttributeChangeRatioThresholdDelegate ****************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_16_DELEGATE \
GAMEPLAYABILITIES_API void FWaitAttributeChangeRatioThresholdDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAttributeChangeRatioThresholdDelegate, bool bMatchesComparison, float CurrentRatio);


// ********** End Delegate FWaitAttributeChangeRatioThresholdDelegate ******************************

// ********** Begin Class UAbilityTask_WaitAttributeChangeRatioThreshold ***************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForAttributeChangeRatioThreshold);


struct Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAttributeChangeRatioThreshold(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitAttributeChangeRatioThreshold, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAttributeChangeRatioThreshold)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitAttributeChangeRatioThreshold(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAttributeChangeRatioThreshold) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitAttributeChangeRatioThreshold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAttributeChangeRatioThreshold); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitAttributeChangeRatioThreshold(UAbilityTask_WaitAttributeChangeRatioThreshold&&) = delete; \
	UAbilityTask_WaitAttributeChangeRatioThreshold(const UAbilityTask_WaitAttributeChangeRatioThreshold&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitAttributeChangeRatioThreshold();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitAttributeChangeRatioThreshold;

// ********** End Class UAbilityTask_WaitAttributeChangeRatioThreshold *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
