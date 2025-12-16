// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectExecutionCalculation.h"

#ifdef GAMEPLAYABILITIES_GameplayEffectExecutionCalculation_generated_h
#error "GameplayEffectExecutionCalculation.generated.h already included, missing '#pragma once' in GameplayEffectExecutionCalculation.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectExecutionCalculation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEffectCustomExecutionOutput;
struct FGameplayEffectCustomExecutionParameters;

// ********** Begin ScriptStruct FGameplayEffectCustomExecutionParameters **************************
struct Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayEffectCustomExecutionParameters;
// ********** End ScriptStruct FGameplayEffectCustomExecutionParameters ****************************

// ********** Begin ScriptStruct FGameplayEffectCustomExecutionOutput ******************************
struct Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_203_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayEffectCustomExecutionOutput;
// ********** End ScriptStruct FGameplayEffectCustomExecutionOutput ********************************

// ********** Begin Class UGameplayEffectExecutionCalculation **************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_262_RPC_WRAPPERS \
	GAMEPLAYABILITIES_API virtual void Execute_Implementation(FGameplayEffectCustomExecutionParameters const& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const; \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_262_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_262_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayEffectExecutionCalculation(); \
	friend struct ::Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayEffectExecutionCalculation, UGameplayEffectCalculation, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister) \
	DECLARE_SERIALIZER(UGameplayEffectExecutionCalculation)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_262_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayEffectExecutionCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayEffectExecutionCalculation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayEffectExecutionCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffectExecutionCalculation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayEffectExecutionCalculation(UGameplayEffectExecutionCalculation&&) = delete; \
	UGameplayEffectExecutionCalculation(const UGameplayEffectExecutionCalculation&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayEffectExecutionCalculation();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_259_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_262_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_262_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_262_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_262_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_262_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayEffectExecutionCalculation;

// ********** End Class UGameplayEffectExecutionCalculation ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
