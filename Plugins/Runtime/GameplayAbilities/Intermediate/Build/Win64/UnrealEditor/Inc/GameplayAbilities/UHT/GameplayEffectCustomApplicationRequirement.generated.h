// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectCustomApplicationRequirement.h"

#ifdef GAMEPLAYABILITIES_GameplayEffectCustomApplicationRequirement_generated_h
#error "GameplayEffectCustomApplicationRequirement.generated.h already included, missing '#pragma once' in GameplayEffectCustomApplicationRequirement.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectCustomApplicationRequirement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UGameplayEffect;
struct FGameplayEffectSpec;

// ********** Begin Class UGameplayEffectCustomApplicationRequirement ******************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GAMEPLAYABILITIES_API virtual bool CanApplyGameplayEffect_Implementation(const UGameplayEffect* GameplayEffect, FGameplayEffectSpec const& Spec, UAbilitySystemComponent* ASC) const; \
	DECLARE_FUNCTION(execCanApplyGameplayEffect);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayEffectCustomApplicationRequirement(); \
	friend struct ::Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayEffectCustomApplicationRequirement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister) \
	DECLARE_SERIALIZER(UGameplayEffectCustomApplicationRequirement)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayEffectCustomApplicationRequirement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayEffectCustomApplicationRequirement(UGameplayEffectCustomApplicationRequirement&&) = delete; \
	UGameplayEffectCustomApplicationRequirement(const UGameplayEffectCustomApplicationRequirement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayEffectCustomApplicationRequirement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffectCustomApplicationRequirement); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayEffectCustomApplicationRequirement) \
	GAMEPLAYABILITIES_API virtual ~UGameplayEffectCustomApplicationRequirement();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayEffectCustomApplicationRequirement;

// ********** End Class UGameplayEffectCustomApplicationRequirement ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
