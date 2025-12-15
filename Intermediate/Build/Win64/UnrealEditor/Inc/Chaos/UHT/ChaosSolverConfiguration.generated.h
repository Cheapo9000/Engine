// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosSolverConfiguration.h"

#ifdef CHAOS_ChaosSolverConfiguration_generated_h
#error "ChaosSolverConfiguration.generated.h already included, missing '#pragma once' in ChaosSolverConfiguration.h"
#endif
#define CHAOS_ChaosSolverConfiguration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosSolverDestructionSettings ***********************************
struct Z_Construct_UScriptStruct_FChaosSolverDestructionSettings_Statics;
#define FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosSolverDestructionSettings_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


struct FChaosSolverDestructionSettings;
// ********** End ScriptStruct FChaosSolverDestructionSettings *************************************

// ********** Begin ScriptStruct FChaosSolverConfiguration *****************************************
struct Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics;
#define FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


struct FChaosSolverConfiguration;
// ********** End ScriptStruct FChaosSolverConfiguration *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h

// ********** Begin Enum EClusterUnionMethod *******************************************************
#define FOREACH_ENUM_ECLUSTERUNIONMETHOD(op) \
	op(EClusterUnionMethod::PointImplicit) \
	op(EClusterUnionMethod::DelaunayTriangulation) \
	op(EClusterUnionMethod::MinimalSpanningSubsetDelaunayTriangulation) \
	op(EClusterUnionMethod::PointImplicitAugmentedWithMinimalDelaunay) \
	op(EClusterUnionMethod::BoundsOverlapFilteredDelaunayTriangulation) \
	op(EClusterUnionMethod::None) 

enum class EClusterUnionMethod : uint8;
template<> struct TIsUEnumClass<EClusterUnionMethod> { enum { Value = true }; };
template<> CHAOS_NON_ATTRIBUTED_API UEnum* StaticEnum<EClusterUnionMethod>();
// ********** End Enum EClusterUnionMethod *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
