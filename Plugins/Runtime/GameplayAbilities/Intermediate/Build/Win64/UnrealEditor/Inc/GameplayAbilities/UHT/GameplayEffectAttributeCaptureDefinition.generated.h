// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectAttributeCaptureDefinition.h"

#ifdef GAMEPLAYABILITIES_GameplayEffectAttributeCaptureDefinition_generated_h
#error "GameplayEffectAttributeCaptureDefinition.generated.h already included, missing '#pragma once' in GameplayEffectAttributeCaptureDefinition.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectAttributeCaptureDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayEffectAttributeCaptureDefinition *************************
struct Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayEffectAttributeCaptureDefinition;
// ********** End ScriptStruct FGameplayEffectAttributeCaptureDefinition ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h

// ********** Begin Enum EGameplayEffectAttributeCaptureSource *************************************
#define FOREACH_ENUM_EGAMEPLAYEFFECTATTRIBUTECAPTURESOURCE(op) \
	op(EGameplayEffectAttributeCaptureSource::Source) \
	op(EGameplayEffectAttributeCaptureSource::Target) 

enum class EGameplayEffectAttributeCaptureSource : uint8;
template<> struct TIsUEnumClass<EGameplayEffectAttributeCaptureSource> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayEffectAttributeCaptureSource>();
// ********** End Enum EGameplayEffectAttributeCaptureSource ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
