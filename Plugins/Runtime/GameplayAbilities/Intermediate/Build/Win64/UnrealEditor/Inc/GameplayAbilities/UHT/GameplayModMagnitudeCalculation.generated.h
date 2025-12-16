// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayModMagnitudeCalculation.h"

#ifdef GAMEPLAYABILITIES_GameplayModMagnitudeCalculation_generated_h
#error "GameplayModMagnitudeCalculation.generated.h already included, missing '#pragma once' in GameplayModMagnitudeCalculation.h"
#endif
#define GAMEPLAYABILITIES_GameplayModMagnitudeCalculation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
struct FGameplayEffectSpec;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Class UGameplayModMagnitudeCalculation *****************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_19_RPC_WRAPPERS \
	GAMEPLAYABILITIES_API virtual float CalculateBaseMagnitude_Implementation(FGameplayEffectSpec const& Spec) const; \
	DECLARE_FUNCTION(execGetTargetSpecTags); \
	DECLARE_FUNCTION(execGetTargetActorTags); \
	DECLARE_FUNCTION(execGetTargetAggregatedTags); \
	DECLARE_FUNCTION(execGetSourceSpecTags); \
	DECLARE_FUNCTION(execGetSourceActorTags); \
	DECLARE_FUNCTION(execGetSourceAggregatedTags); \
	DECLARE_FUNCTION(execGetSetByCallerMagnitudeByName); \
	DECLARE_FUNCTION(execGetSetByCallerMagnitudeByTag); \
	DECLARE_FUNCTION(execK2_GetCapturedAttributeMagnitude); \
	DECLARE_FUNCTION(execCalculateBaseMagnitude);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_19_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayModMagnitudeCalculation(); \
	friend struct ::Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayModMagnitudeCalculation, UGameplayEffectCalculation, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister) \
	DECLARE_SERIALIZER(UGameplayModMagnitudeCalculation)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayModMagnitudeCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayModMagnitudeCalculation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayModMagnitudeCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayModMagnitudeCalculation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayModMagnitudeCalculation(UGameplayModMagnitudeCalculation&&) = delete; \
	UGameplayModMagnitudeCalculation(const UGameplayModMagnitudeCalculation&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayModMagnitudeCalculation();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayModMagnitudeCalculation;

// ********** End Class UGameplayModMagnitudeCalculation *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
