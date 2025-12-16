// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemCheatManagerExtension.h"

#ifdef GAMEPLAYABILITIES_AbilitySystemCheatManagerExtension_generated_h
#error "AbilitySystemCheatManagerExtension.generated.h already included, missing '#pragma once' in AbilitySystemCheatManagerExtension.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemCheatManagerExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAbilitySystemCheatManagerExtension **************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEffectRemove); \
	DECLARE_FUNCTION(execEffectApply); \
	DECLARE_FUNCTION(execEffectListActive); \
	DECLARE_FUNCTION(execAbilityCancel); \
	DECLARE_FUNCTION(execAbilityActivate); \
	DECLARE_FUNCTION(execAbilityGrant); \
	DECLARE_FUNCTION(execAbilityListGranted);


struct Z_Construct_UClass_UAbilitySystemCheatManagerExtension_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemCheatManagerExtension_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySystemCheatManagerExtension(); \
	friend struct ::Z_Construct_UClass_UAbilitySystemCheatManagerExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilitySystemCheatManagerExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilitySystemCheatManagerExtension, UCheatManagerExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilitySystemCheatManagerExtension_NoRegister) \
	DECLARE_SERIALIZER(UAbilitySystemCheatManagerExtension)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilitySystemCheatManagerExtension(UAbilitySystemCheatManagerExtension&&) = delete; \
	UAbilitySystemCheatManagerExtension(const UAbilitySystemCheatManagerExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemCheatManagerExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemCheatManagerExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilitySystemCheatManagerExtension) \
	NO_API virtual ~UAbilitySystemCheatManagerExtension();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilitySystemCheatManagerExtension;

// ********** End Class UAbilitySystemCheatManagerExtension ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
