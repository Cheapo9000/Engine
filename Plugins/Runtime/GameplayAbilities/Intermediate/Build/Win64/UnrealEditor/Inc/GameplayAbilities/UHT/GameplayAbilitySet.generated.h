// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySet.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilitySet_generated_h
#error "GameplayAbilitySet.generated.h already included, missing '#pragma once' in GameplayAbilitySet.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilitySet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayAbilityBindInfo ******************************************
struct Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilityBindInfo;
// ********** End ScriptStruct FGameplayAbilityBindInfo ********************************************

// ********** Begin Class UGameplayAbilitySet ******************************************************
struct Z_Construct_UClass_UGameplayAbilitySet_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilitySet_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayAbilitySet(); \
	friend struct ::Z_Construct_UClass_UGameplayAbilitySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayAbilitySet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayAbilitySet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayAbilitySet_NoRegister) \
	DECLARE_SERIALIZER(UGameplayAbilitySet)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayAbilitySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilitySet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayAbilitySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilitySet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayAbilitySet(UGameplayAbilitySet&&) = delete; \
	UGameplayAbilitySet(const UGameplayAbilitySet&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayAbilitySet();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_62_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_65_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayAbilitySet;

// ********** End Class UGameplayAbilitySet ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h

// ********** Begin Enum EGameplayAbilityInputBinds ************************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYINPUTBINDS(op) \
	op(EGameplayAbilityInputBinds::Ability1) \
	op(EGameplayAbilityInputBinds::Ability2) \
	op(EGameplayAbilityInputBinds::Ability3) \
	op(EGameplayAbilityInputBinds::Ability4) \
	op(EGameplayAbilityInputBinds::Ability5) \
	op(EGameplayAbilityInputBinds::Ability6) \
	op(EGameplayAbilityInputBinds::Ability7) \
	op(EGameplayAbilityInputBinds::Ability8) \
	op(EGameplayAbilityInputBinds::Ability9) 

namespace EGameplayAbilityInputBinds { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityInputBinds::Type>();
// ********** End Enum EGameplayAbilityInputBinds **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
