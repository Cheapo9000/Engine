// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityWorldReticle.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilityWorldReticle_generated_h
#error "GameplayAbilityWorldReticle.generated.h already included, missing '#pragma once' in GameplayAbilityWorldReticle.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityWorldReticle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWorldReticleParameters *******************************************
struct Z_Construct_UScriptStruct_FWorldReticleParameters_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldReticleParameters_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FWorldReticleParameters;
// ********** End ScriptStruct FWorldReticleParameters *********************************************

// ********** Begin Class AGameplayAbilityWorldReticle *********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_33_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFaceTowardSource);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_33_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayAbilityWorldReticle(); \
	friend struct ::Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayAbilityWorldReticle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister) \
	DECLARE_SERIALIZER(AGameplayAbilityWorldReticle)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API AGameplayAbilityWorldReticle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayAbilityWorldReticle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, AGameplayAbilityWorldReticle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayAbilityWorldReticle); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayAbilityWorldReticle(AGameplayAbilityWorldReticle&&) = delete; \
	AGameplayAbilityWorldReticle(const AGameplayAbilityWorldReticle&) = delete; \
	GAMEPLAYABILITIES_API virtual ~AGameplayAbilityWorldReticle();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_33_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_33_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayAbilityWorldReticle;

// ********** End Class AGameplayAbilityWorldReticle ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
