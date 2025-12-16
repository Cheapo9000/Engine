// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectComponents/AbilitiesGameplayEffectComponent.h"

#ifdef GAMEPLAYABILITIES_AbilitiesGameplayEffectComponent_generated_h
#error "AbilitiesGameplayEffectComponent.generated.h already included, missing '#pragma once' in AbilitiesGameplayEffectComponent.h"
#endif
#define GAMEPLAYABILITIES_AbilitiesGameplayEffectComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayAbilitySpecConfig ****************************************
struct Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilitySpecConfig;
// ********** End ScriptStruct FGameplayAbilitySpecConfig ******************************************

// ********** Begin Class UAbilitiesGameplayEffectComponent ****************************************
struct Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitiesGameplayEffectComponent(); \
	friend struct ::Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilitiesGameplayEffectComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilitiesGameplayEffectComponent, UGameplayEffectComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilitiesGameplayEffectComponent_NoRegister) \
	DECLARE_SERIALIZER(UAbilitiesGameplayEffectComponent)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilitiesGameplayEffectComponent(UAbilitiesGameplayEffectComponent&&) = delete; \
	UAbilitiesGameplayEffectComponent(const UAbilitiesGameplayEffectComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilitiesGameplayEffectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitiesGameplayEffectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilitiesGameplayEffectComponent) \
	GAMEPLAYABILITIES_API virtual ~UAbilitiesGameplayEffectComponent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilitiesGameplayEffectComponent;

// ********** End Class UAbilitiesGameplayEffectComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
