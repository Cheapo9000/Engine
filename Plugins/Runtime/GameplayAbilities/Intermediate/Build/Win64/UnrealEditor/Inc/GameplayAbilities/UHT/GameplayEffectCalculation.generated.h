// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectCalculation.h"

#ifdef GAMEPLAYABILITIES_GameplayEffectCalculation_generated_h
#error "GameplayEffectCalculation.generated.h already included, missing '#pragma once' in GameplayEffectCalculation.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectCalculation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayEffectCalculation ***********************************************
struct Z_Construct_UClass_UGameplayEffectCalculation_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCalculation_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayEffectCalculation(); \
	friend struct ::Z_Construct_UClass_UGameplayEffectCalculation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayEffectCalculation_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayEffectCalculation, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayEffectCalculation_NoRegister) \
	DECLARE_SERIALIZER(UGameplayEffectCalculation)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayEffectCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayEffectCalculation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayEffectCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffectCalculation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayEffectCalculation(UGameplayEffectCalculation&&) = delete; \
	UGameplayEffectCalculation(const UGameplayEffectCalculation&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayEffectCalculation();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayEffectCalculation;

// ********** End Class UGameplayEffectCalculation *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
