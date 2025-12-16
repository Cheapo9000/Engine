// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemTestAttributeSet.h"

#ifdef GAMEPLAYABILITIES_AbilitySystemTestAttributeSet_generated_h
#error "AbilitySystemTestAttributeSet.generated.h already included, missing '#pragma once' in AbilitySystemTestAttributeSet.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemTestAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAbilitySystemTestAttributeSet *******************************************
struct Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemTestAttributeSet_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemTestAttributeSet(); \
	friend struct ::Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilitySystemTestAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilitySystemTestAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilitySystemTestAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UAbilitySystemTestAttributeSet) \
	GAMEPLAYABILITIES_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxHealth=NETFIELD_REP_START, \
		Health, \
		Mana, \
		MaxMana, \
		SpellDamage, \
		PhysicalDamage, \
		CritChance, \
		CritMultiplier, \
		ArmorDamageReduction, \
		DodgeChance, \
		LifeSteal, \
		Strength, \
		NETFIELD_REP_END=Strength	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYABILITIES_API) \
private: \
	REPLICATED_BASE_CLASS(UAbilitySystemTestAttributeSet) \
public:


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilitySystemTestAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemTestAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilitySystemTestAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemTestAttributeSet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilitySystemTestAttributeSet(UAbilitySystemTestAttributeSet&&) = delete; \
	UAbilitySystemTestAttributeSet(const UAbilitySystemTestAttributeSet&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilitySystemTestAttributeSet();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_15_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilitySystemTestAttributeSet;

// ********** End Class UAbilitySystemTestAttributeSet *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
