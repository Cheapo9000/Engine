// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySpec.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilitySpec_generated_h
#error "GameplayAbilitySpec.generated.h already included, missing '#pragma once' in GameplayAbilitySpec.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilitySpec_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayAbilitySpecDef *******************************************
struct Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilitySpecDef;
// ********** End ScriptStruct FGameplayAbilitySpecDef *********************************************

// ********** Begin ScriptStruct FGameplayAbilityActivationInfo ************************************
struct Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilityActivationInfo;
// ********** End ScriptStruct FGameplayAbilityActivationInfo **************************************

// ********** Begin ScriptStruct FGameplayAbilitySpec **********************************************
struct Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


struct FGameplayAbilitySpec;
// ********** End ScriptStruct FGameplayAbilitySpec ************************************************

// ********** Begin ScriptStruct FGameplayAbilitySpecContainer *************************************
struct Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_298_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FGameplayAbilitySpecContainer, Items, GAMEPLAYABILITIES_API );


struct FGameplayAbilitySpecContainer;
// ********** End ScriptStruct FGameplayAbilitySpecContainer ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h

// ********** Begin Enum EGameplayAbilityActivationMode ********************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYACTIVATIONMODE(op) \
	op(EGameplayAbilityActivationMode::Authority) \
	op(EGameplayAbilityActivationMode::NonAuthority) \
	op(EGameplayAbilityActivationMode::Predicting) \
	op(EGameplayAbilityActivationMode::Confirmed) \
	op(EGameplayAbilityActivationMode::Rejected) 

namespace EGameplayAbilityActivationMode { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityActivationMode::Type>();
// ********** End Enum EGameplayAbilityActivationMode **********************************************

// ********** Begin Enum EGameplayEffectGrantedAbilityRemovePolicy *********************************
#define FOREACH_ENUM_EGAMEPLAYEFFECTGRANTEDABILITYREMOVEPOLICY(op) \
	op(EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately) \
	op(EGameplayEffectGrantedAbilityRemovePolicy::RemoveAbilityOnEnd) \
	op(EGameplayEffectGrantedAbilityRemovePolicy::DoNothing) 

enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8;
template<> struct TIsUEnumClass<EGameplayEffectGrantedAbilityRemovePolicy> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayEffectGrantedAbilityRemovePolicy>();
// ********** End Enum EGameplayEffectGrantedAbilityRemovePolicy ***********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
