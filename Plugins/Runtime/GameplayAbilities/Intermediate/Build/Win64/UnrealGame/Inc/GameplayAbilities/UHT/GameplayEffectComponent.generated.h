// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectComponent.h"

#ifdef GAMEPLAYABILITIES_GameplayEffectComponent_generated_h
#error "GameplayEffectComponent.generated.h already included, missing '#pragma once' in GameplayEffectComponent.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayEffectComponent *************************************************
struct Z_Construct_UClass_UGameplayEffectComponent_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayEffectComponent(); \
	friend struct ::Z_Construct_UClass_UGameplayEffectComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayEffectComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayEffectComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayEffectComponent_NoRegister) \
	DECLARE_SERIALIZER(UGameplayEffectComponent) \
	DECLARE_WITHIN(UGameplayEffect)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayEffectComponent(UGameplayEffectComponent&&) = delete; \
	UGameplayEffectComponent(const UGameplayEffectComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayEffectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffectComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameplayEffectComponent) \
	GAMEPLAYABILITIES_API virtual ~UGameplayEffectComponent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_31_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayEffectComponent;

// ********** End Class UGameplayEffectComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
