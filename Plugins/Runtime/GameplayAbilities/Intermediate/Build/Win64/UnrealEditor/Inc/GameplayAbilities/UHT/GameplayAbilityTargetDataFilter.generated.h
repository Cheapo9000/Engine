// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityTargetDataFilter.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilityTargetDataFilter_generated_h
#error "GameplayAbilityTargetDataFilter.generated.h already included, missing '#pragma once' in GameplayAbilityTargetDataFilter.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTargetDataFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayTargetDataFilter *****************************************
struct Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayTargetDataFilter;
// ********** End ScriptStruct FGameplayTargetDataFilter *******************************************

// ********** Begin ScriptStruct FGameplayTargetDataFilterHandle ***********************************
struct Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayTargetDataFilterHandle;
// ********** End ScriptStruct FGameplayTargetDataFilterHandle *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h

// ********** Begin Enum ETargetDataFilterSelf *****************************************************
#define FOREACH_ENUM_ETARGETDATAFILTERSELF(op) \
	op(ETargetDataFilterSelf::TDFS_Any) \
	op(ETargetDataFilterSelf::TDFS_NoSelf) \
	op(ETargetDataFilterSelf::TDFS_NoOthers) 

namespace ETargetDataFilterSelf { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<ETargetDataFilterSelf::Type>();
// ********** End Enum ETargetDataFilterSelf *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
