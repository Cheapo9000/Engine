// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilityAudit.h"

#ifdef GAMEPLAYABILITIESEDITOR_GameplayAbilityAudit_generated_h
#error "GameplayAbilityAudit.generated.h already included, missing '#pragma once' in GameplayAbilityAudit.h"
#endif
#define GAMEPLAYABILITIESEDITOR_GameplayAbilityAudit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayAbilityAuditRow ******************************************
struct Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics; \
	GAMEPLAYABILITIESEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FGameplayAbilityAuditRow;
// ********** End ScriptStruct FGameplayAbilityAuditRow ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h

// ********** Begin Enum EGameplayAbilityActivationPath ********************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYACTIVATIONPATH(op) \
	op(EGameplayAbilityActivationPath::Native) \
	op(EGameplayAbilityActivationPath::Blueprint) \
	op(EGameplayAbilityActivationPath::FromEvent) 

enum class EGameplayAbilityActivationPath : uint8;
template<> struct TIsUEnumClass<EGameplayAbilityActivationPath> { enum { Value = true }; };
template<> GAMEPLAYABILITIESEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityActivationPath>();
// ********** End Enum EGameplayAbilityActivationPath **********************************************

// ********** Begin Enum EGameplayAbilityEndInBlueprints *******************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYENDINBLUEPRINTS(op) \
	op(EGameplayAbilityEndInBlueprints::Missing) \
	op(EGameplayAbilityEndInBlueprints::EndAbility) \
	op(EGameplayAbilityEndInBlueprints::EndAbilityLocally) 

enum class EGameplayAbilityEndInBlueprints : uint8;
template<> struct TIsUEnumClass<EGameplayAbilityEndInBlueprints> { enum { Value = true }; };
template<> GAMEPLAYABILITIESEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityEndInBlueprints>();
// ********** End Enum EGameplayAbilityEndInBlueprints *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
