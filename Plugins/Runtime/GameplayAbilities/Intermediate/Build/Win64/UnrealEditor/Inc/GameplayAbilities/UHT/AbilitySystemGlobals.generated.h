// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemGlobals.h"

#ifdef GAMEPLAYABILITIES_AbilitySystemGlobals_generated_h
#error "AbilitySystemGlobals.generated.h already included, missing '#pragma once' in AbilitySystemGlobals.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemGlobals_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetSerializeScriptStructCache ************************************
struct Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FNetSerializeScriptStructCache;
// ********** End ScriptStruct FNetSerializeScriptStructCache **************************************

// ********** Begin Class UAbilitySystemGlobals ****************************************************
struct Z_Construct_UClass_UAbilitySystemGlobals_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemGlobals(); \
	friend struct ::Z_Construct_UClass_UAbilitySystemGlobals_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilitySystemGlobals_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilitySystemGlobals, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilitySystemGlobals_NoRegister) \
	DECLARE_SERIALIZER(UAbilitySystemGlobals) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemGlobals) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilitySystemGlobals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemGlobals); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilitySystemGlobals(UAbilitySystemGlobals&&) = delete; \
	UAbilitySystemGlobals(const UAbilitySystemGlobals&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilitySystemGlobals();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_61_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilitySystemGlobals;

// ********** End Class UAbilitySystemGlobals ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
