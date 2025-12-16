// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbility_CharacterJump.h"

#ifdef GAMEPLAYABILITIES_GameplayAbility_CharacterJump_generated_h
#error "GameplayAbility_CharacterJump.generated.h already included, missing '#pragma once' in GameplayAbility_CharacterJump.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbility_CharacterJump_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayAbility_CharacterJump *******************************************
struct Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayAbility_CharacterJump(); \
	friend struct ::Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayAbility_CharacterJump_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayAbility_CharacterJump, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayAbility_CharacterJump_NoRegister) \
	DECLARE_SERIALIZER(UGameplayAbility_CharacterJump)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayAbility_CharacterJump(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility_CharacterJump) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayAbility_CharacterJump); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility_CharacterJump); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayAbility_CharacterJump(UGameplayAbility_CharacterJump&&) = delete; \
	UGameplayAbility_CharacterJump(const UGameplayAbility_CharacterJump&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayAbility_CharacterJump();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayAbility_CharacterJump;

// ********** End Class UGameplayAbility_CharacterJump *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
