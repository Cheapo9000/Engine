// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbility_Montage.h"

#ifdef GAMEPLAYABILITIES_GameplayAbility_Montage_generated_h
#error "GameplayAbility_Montage.generated.h already included, missing '#pragma once' in GameplayAbility_Montage.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbility_Montage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayAbility_Montage *************************************************
struct Z_Construct_UClass_UGameplayAbility_Montage_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_Montage_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayAbility_Montage(); \
	friend struct ::Z_Construct_UClass_UGameplayAbility_Montage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayAbility_Montage_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayAbility_Montage, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayAbility_Montage_NoRegister) \
	DECLARE_SERIALIZER(UGameplayAbility_Montage)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayAbility_Montage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility_Montage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayAbility_Montage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility_Montage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayAbility_Montage(UGameplayAbility_Montage&&) = delete; \
	UGameplayAbility_Montage(const UGameplayAbility_Montage&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayAbility_Montage();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayAbility_Montage;

// ********** End Class UGameplayAbility_Montage ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
