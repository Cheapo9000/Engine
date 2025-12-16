// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectComponents/CancelAbilityTagsGameplayEffectComponent.h"

#ifdef GAMEPLAYABILITIES_CancelAbilityTagsGameplayEffectComponent_generated_h
#error "CancelAbilityTagsGameplayEffectComponent.generated.h already included, missing '#pragma once' in CancelAbilityTagsGameplayEffectComponent.h"
#endif
#define GAMEPLAYABILITIES_CancelAbilityTagsGameplayEffectComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCancelAbilityTagsGameplayEffectComponent ********************************
struct Z_Construct_UClass_UCancelAbilityTagsGameplayEffectComponent_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UCancelAbilityTagsGameplayEffectComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CancelAbilityTagsGameplayEffectComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCancelAbilityTagsGameplayEffectComponent(); \
	friend struct ::Z_Construct_UClass_UCancelAbilityTagsGameplayEffectComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UCancelAbilityTagsGameplayEffectComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCancelAbilityTagsGameplayEffectComponent, UGameplayEffectComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UCancelAbilityTagsGameplayEffectComponent_NoRegister) \
	DECLARE_SERIALIZER(UCancelAbilityTagsGameplayEffectComponent)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CancelAbilityTagsGameplayEffectComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UCancelAbilityTagsGameplayEffectComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCancelAbilityTagsGameplayEffectComponent(UCancelAbilityTagsGameplayEffectComponent&&) = delete; \
	UCancelAbilityTagsGameplayEffectComponent(const UCancelAbilityTagsGameplayEffectComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UCancelAbilityTagsGameplayEffectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCancelAbilityTagsGameplayEffectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCancelAbilityTagsGameplayEffectComponent) \
	GAMEPLAYABILITIES_API virtual ~UCancelAbilityTagsGameplayEffectComponent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CancelAbilityTagsGameplayEffectComponent_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CancelAbilityTagsGameplayEffectComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CancelAbilityTagsGameplayEffectComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CancelAbilityTagsGameplayEffectComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCancelAbilityTagsGameplayEffectComponent;

// ********** End Class UCancelAbilityTagsGameplayEffectComponent **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CancelAbilityTagsGameplayEffectComponent_h

// ********** Begin Enum ECancelAbilityTagsGameplayEffectComponentMode *****************************
#define FOREACH_ENUM_ECANCELABILITYTAGSGAMEPLAYEFFECTCOMPONENTMODE(op) \
	op(ECancelAbilityTagsGameplayEffectComponentMode::OnApplication) \
	op(ECancelAbilityTagsGameplayEffectComponentMode::OnExecution) 

enum class ECancelAbilityTagsGameplayEffectComponentMode : uint8;
template<> struct TIsUEnumClass<ECancelAbilityTagsGameplayEffectComponentMode> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<ECancelAbilityTagsGameplayEffectComponentMode>();
// ********** End Enum ECancelAbilityTagsGameplayEffectComponentMode *******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
