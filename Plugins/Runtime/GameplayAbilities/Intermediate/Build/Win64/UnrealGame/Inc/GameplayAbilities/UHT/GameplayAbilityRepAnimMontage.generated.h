// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityRepAnimMontage.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilityRepAnimMontage_generated_h
#error "GameplayAbilityRepAnimMontage.generated.h already included, missing '#pragma once' in GameplayAbilityRepAnimMontage.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityRepAnimMontage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayAbilityRepAnimMontage ************************************
struct Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilityRepAnimMontage;
// ********** End ScriptStruct FGameplayAbilityRepAnimMontage **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h

// ********** Begin Enum ERepAnimPositionMethod ****************************************************
#define FOREACH_ENUM_EREPANIMPOSITIONMETHOD(op) \
	op(ERepAnimPositionMethod::Position) \
	op(ERepAnimPositionMethod::CurrentSectionId) 

enum class ERepAnimPositionMethod;
template<> struct TIsUEnumClass<ERepAnimPositionMethod> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<ERepAnimPositionMethod>();
// ********** End Enum ERepAnimPositionMethod ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
