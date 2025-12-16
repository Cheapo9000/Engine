// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilityBlueprint.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilityBlueprint_generated_h
#error "GameplayAbilityBlueprint.generated.h already included, missing '#pragma once' in GameplayAbilityBlueprint.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayAbilityBlueprint ************************************************
struct Z_Construct_UClass_UGameplayAbilityBlueprint_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilityBlueprint_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayAbilityBlueprint(); \
	friend struct ::Z_Construct_UClass_UGameplayAbilityBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayAbilityBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayAbilityBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayAbilityBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UGameplayAbilityBlueprint)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayAbilityBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilityBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayAbilityBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilityBlueprint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayAbilityBlueprint(UGameplayAbilityBlueprint&&) = delete; \
	UGameplayAbilityBlueprint(const UGameplayAbilityBlueprint&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayAbilityBlueprint();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayAbilityBlueprint;

// ********** End Class UGameplayAbilityBlueprint **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
