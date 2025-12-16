// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/ChaosFleshComputeMuscleActivationNode.h"

#ifdef CHAOSFLESHNODES_ChaosFleshComputeMuscleActivationNode_generated_h
#error "ChaosFleshComputeMuscleActivationNode.generated.h already included, missing '#pragma once' in ChaosFleshComputeMuscleActivationNode.h"
#endif
#define CHAOSFLESHNODES_ChaosFleshComputeMuscleActivationNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FComputeMuscleActivationDataNode **********************************
struct Z_Construct_UScriptStruct_FComputeMuscleActivationDataNode_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshComputeMuscleActivationNode_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComputeMuscleActivationDataNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FComputeMuscleActivationDataNode;
// ********** End ScriptStruct FComputeMuscleActivationDataNode ************************************

// ********** Begin ScriptStruct FComputeMuscleActivationDataNode_v2 *******************************
struct Z_Construct_UScriptStruct_FComputeMuscleActivationDataNode_v2_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshComputeMuscleActivationNode_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComputeMuscleActivationDataNode_v2_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FComputeMuscleActivationDataNode_v2;
// ********** End ScriptStruct FComputeMuscleActivationDataNode_v2 *********************************

// ********** Begin ScriptStruct FPerMuscleParameter ***********************************************
struct Z_Construct_UScriptStruct_FPerMuscleParameter_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshComputeMuscleActivationNode_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerMuscleParameter_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct();


struct FPerMuscleParameter;
// ********** End ScriptStruct FPerMuscleParameter *************************************************

// ********** Begin ScriptStruct FSetMuscleActivationParameterNode *********************************
struct Z_Construct_UScriptStruct_FSetMuscleActivationParameterNode_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshComputeMuscleActivationNode_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSetMuscleActivationParameterNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FSetMuscleActivationParameterNode;
// ********** End ScriptStruct FSetMuscleActivationParameterNode ***********************************

// ********** Begin ScriptStruct FCurveMuscleName **************************************************
struct Z_Construct_UScriptStruct_FCurveMuscleName_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshComputeMuscleActivationNode_h_230_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveMuscleName_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct();


struct FCurveMuscleName;
// ********** End ScriptStruct FCurveMuscleName ****************************************************

// ********** Begin ScriptStruct FReadSkeletalMeshCurvesDataflowNode *******************************
struct Z_Construct_UScriptStruct_FReadSkeletalMeshCurvesDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshComputeMuscleActivationNode_h_244_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReadSkeletalMeshCurvesDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FReadSkeletalMeshCurvesDataflowNode;
// ********** End ScriptStruct FReadSkeletalMeshCurvesDataflowNode *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshComputeMuscleActivationNode_h

// ********** Begin Enum EParameterMethod **********************************************************
#define FOREACH_ENUM_EPARAMETERMETHOD(op) \
	op(Global) \
	op(Custom) 

enum EParameterMethod : int;
template<> CHAOSFLESHNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EParameterMethod>();
// ********** End Enum EParameterMethod ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
