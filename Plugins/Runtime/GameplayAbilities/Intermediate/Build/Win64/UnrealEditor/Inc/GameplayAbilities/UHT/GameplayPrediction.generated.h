// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayPrediction.h"

#ifdef GAMEPLAYABILITIES_GameplayPrediction_generated_h
#error "GameplayPrediction.generated.h already included, missing '#pragma once' in GameplayPrediction.h"
#endif
#define GAMEPLAYABILITIES_GameplayPrediction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPredictionKey ****************************************************
struct Z_Construct_UScriptStruct_FPredictionKey_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_298_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPredictionKey_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FPredictionKey;
// ********** End ScriptStruct FPredictionKey ******************************************************

// ********** Begin ScriptStruct FReplicatedPredictionKeyItem **************************************
struct Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_572_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


struct FReplicatedPredictionKeyItem;
// ********** End ScriptStruct FReplicatedPredictionKeyItem ****************************************

// ********** Begin ScriptStruct FReplicatedPredictionKeyMap ***************************************
struct Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_597_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FReplicatedPredictionKeyMap, PredictionKeys, GAMEPLAYABILITIES_API );


struct FReplicatedPredictionKeyMap;
// ********** End ScriptStruct FReplicatedPredictionKeyMap *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
