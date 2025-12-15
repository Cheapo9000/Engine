// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RBF/RBFSolver.h"

#ifdef ANIMGRAPHRUNTIME_RBFSolver_generated_h
#error "RBFSolver.generated.h already included, missing '#pragma once' in RBFSolver.h"
#endif
#define ANIMGRAPHRUNTIME_RBFSolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRBFEntry *********************************************************
struct Z_Construct_UScriptStruct_FRBFEntry_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRBFEntry_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FRBFEntry;
// ********** End ScriptStruct FRBFEntry ***********************************************************

// ********** Begin ScriptStruct FRBFTarget ********************************************************
struct Z_Construct_UScriptStruct_FRBFTarget_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRBFTarget_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FRBFEntry Super;


struct FRBFTarget;
// ********** End ScriptStruct FRBFTarget **********************************************************

// ********** Begin ScriptStruct FRBFParams ********************************************************
struct Z_Construct_UScriptStruct_FRBFParams_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_202_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRBFParams_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FRBFParams;
// ********** End ScriptStruct FRBFParams **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h

// ********** Begin Enum ERBFSolverType ************************************************************
#define FOREACH_ENUM_ERBFSOLVERTYPE(op) \
	op(ERBFSolverType::Additive) \
	op(ERBFSolverType::Interpolative) 

enum class ERBFSolverType : uint8;
template<> struct TIsUEnumClass<ERBFSolverType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERBFSolverType>();
// ********** End Enum ERBFSolverType **************************************************************

// ********** Begin Enum ERBFFunctionType **********************************************************
#define FOREACH_ENUM_ERBFFUNCTIONTYPE(op) \
	op(ERBFFunctionType::Gaussian) \
	op(ERBFFunctionType::Exponential) \
	op(ERBFFunctionType::Linear) \
	op(ERBFFunctionType::Cubic) \
	op(ERBFFunctionType::Quintic) \
	op(ERBFFunctionType::DefaultFunction) 

enum class ERBFFunctionType : uint8;
template<> struct TIsUEnumClass<ERBFFunctionType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERBFFunctionType>();
// ********** End Enum ERBFFunctionType ************************************************************

// ********** Begin Enum ERBFDistanceMethod ********************************************************
#define FOREACH_ENUM_ERBFDISTANCEMETHOD(op) \
	op(ERBFDistanceMethod::Euclidean) \
	op(ERBFDistanceMethod::Quaternion) \
	op(ERBFDistanceMethod::SwingAngle) \
	op(ERBFDistanceMethod::TwistAngle) \
	op(ERBFDistanceMethod::DefaultMethod) 

enum class ERBFDistanceMethod : uint8;
template<> struct TIsUEnumClass<ERBFDistanceMethod> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERBFDistanceMethod>();
// ********** End Enum ERBFDistanceMethod **********************************************************

// ********** Begin Enum ERBFNormalizeMethod *******************************************************
#define FOREACH_ENUM_ERBFNORMALIZEMETHOD(op) \
	op(ERBFNormalizeMethod::OnlyNormalizeAboveOne) \
	op(ERBFNormalizeMethod::AlwaysNormalize) \
	op(ERBFNormalizeMethod::NormalizeWithinMedian) \
	op(ERBFNormalizeMethod::NoNormalization) 

enum class ERBFNormalizeMethod : uint8;
template<> struct TIsUEnumClass<ERBFNormalizeMethod> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERBFNormalizeMethod>();
// ********** End Enum ERBFNormalizeMethod *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
