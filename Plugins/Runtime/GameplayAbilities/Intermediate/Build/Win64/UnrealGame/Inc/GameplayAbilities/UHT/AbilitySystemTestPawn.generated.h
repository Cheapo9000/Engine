// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemTestPawn.h"

#ifdef GAMEPLAYABILITIES_AbilitySystemTestPawn_generated_h
#error "AbilitySystemTestPawn.generated.h already included, missing '#pragma once' in AbilitySystemTestPawn.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemTestPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAbilitySystemTestPawn ***************************************************
struct Z_Construct_UClass_AAbilitySystemTestPawn_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AAbilitySystemTestPawn_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAAbilitySystemTestPawn(); \
	friend struct ::Z_Construct_UClass_AAbilitySystemTestPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_AAbilitySystemTestPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(AAbilitySystemTestPawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_AAbilitySystemTestPawn_NoRegister) \
	DECLARE_SERIALIZER(AAbilitySystemTestPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AAbilitySystemTestPawn*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API AAbilitySystemTestPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbilitySystemTestPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, AAbilitySystemTestPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilitySystemTestPawn); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAbilitySystemTestPawn(AAbilitySystemTestPawn&&) = delete; \
	AAbilitySystemTestPawn(const AAbilitySystemTestPawn&) = delete; \
	GAMEPLAYABILITIES_API virtual ~AAbilitySystemTestPawn();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAbilitySystemTestPawn;

// ********** End Class AAbilitySystemTestPawn *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
