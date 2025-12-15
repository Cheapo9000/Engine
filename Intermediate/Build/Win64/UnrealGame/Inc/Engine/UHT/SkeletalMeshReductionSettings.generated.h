// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMeshReductionSettings.h"

#ifdef ENGINE_SkeletalMeshReductionSettings_generated_h
#error "SkeletalMeshReductionSettings.generated.h already included, missing '#pragma once' in SkeletalMeshReductionSettings.h"
#endif
#define ENGINE_SkeletalMeshReductionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSkeletalMeshOptimizationSettings *********************************
struct Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSkeletalMeshOptimizationSettings;
// ********** End ScriptStruct FSkeletalMeshOptimizationSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h

// ********** Begin Enum SkeletalMeshTerminationCriterion ******************************************
#define FOREACH_ENUM_SKELETALMESHTERMINATIONCRITERION(op) \
	op(SMTC_NumOfTriangles) \
	op(SMTC_NumOfVerts) \
	op(SMTC_TriangleOrVert) \
	op(SMTC_AbsNumOfTriangles) \
	op(SMTC_AbsNumOfVerts) \
	op(SMTC_AbsTriangleOrVert) 

enum SkeletalMeshTerminationCriterion : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<SkeletalMeshTerminationCriterion>();
// ********** End Enum SkeletalMeshTerminationCriterion ********************************************

// ********** Begin Enum SkeletalMeshOptimizationType **********************************************
#define FOREACH_ENUM_SKELETALMESHOPTIMIZATIONTYPE(op) \
	op(SMOT_NumOfTriangles) \
	op(SMOT_MaxDeviation) \
	op(SMOT_TriangleOrDeviation) 

enum SkeletalMeshOptimizationType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<SkeletalMeshOptimizationType>();
// ********** End Enum SkeletalMeshOptimizationType ************************************************

// ********** Begin Enum SkeletalMeshOptimizationImportance ****************************************
#define FOREACH_ENUM_SKELETALMESHOPTIMIZATIONIMPORTANCE(op) \
	op(SMOI_Off) \
	op(SMOI_Lowest) \
	op(SMOI_Low) \
	op(SMOI_Normal) \
	op(SMOI_High) \
	op(SMOI_Highest) 

enum SkeletalMeshOptimizationImportance : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<SkeletalMeshOptimizationImportance>();
// ********** End Enum SkeletalMeshOptimizationImportance ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
