// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/GameplayStaticsTypes.h"

#ifdef ENGINE_GameplayStaticsTypes_generated_h
#error "GameplayStaticsTypes.generated.h already included, missing '#pragma once' in GameplayStaticsTypes.h"
#endif
#define ENGINE_GameplayStaticsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPredictProjectilePathParams **************************************
struct Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPredictProjectilePathParams;
// ********** End ScriptStruct FPredictProjectilePathParams ****************************************

// ********** Begin ScriptStruct FPredictProjectilePathPointData ***********************************
struct Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPredictProjectilePathPointData;
// ********** End ScriptStruct FPredictProjectilePathPointData *************************************

// ********** Begin ScriptStruct FPredictProjectilePathResult **************************************
struct Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_187_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPredictProjectilePathResult;
// ********** End ScriptStruct FPredictProjectilePathResult ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h

// ********** Begin Enum ESuggestProjVelocityTraceOption *******************************************
#define FOREACH_ENUM_ESUGGESTPROJVELOCITYTRACEOPTION(op) \
	op(ESuggestProjVelocityTraceOption::DoNotTrace) \
	op(ESuggestProjVelocityTraceOption::TraceFullPath) \
	op(ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending) 

namespace ESuggestProjVelocityTraceOption { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESuggestProjVelocityTraceOption::Type>();
// ********** End Enum ESuggestProjVelocityTraceOption *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
