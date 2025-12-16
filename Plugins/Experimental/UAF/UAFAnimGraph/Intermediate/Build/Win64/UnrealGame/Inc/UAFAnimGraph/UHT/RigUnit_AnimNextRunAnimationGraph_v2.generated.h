// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextRunAnimationGraph_v2.h"

#ifdef UAFANIMGRAPH_RigUnit_AnimNextRunAnimationGraph_v2_generated_h
#error "RigUnit_AnimNextRunAnimationGraph_v2.generated.h already included, missing '#pragma once' in RigUnit_AnimNextRunAnimationGraph_v2.h"
#endif
#define UAFANIMGRAPH_RigUnit_AnimNextRunAnimationGraph_v2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNextRunGraphWorkData_v2 **************************************
struct Z_Construct_UScriptStruct_FAnimNextRunGraphWorkData_v2_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextRunAnimationGraph_v2_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextRunGraphWorkData_v2_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct();


struct FAnimNextRunGraphWorkData_v2;
// ********** End ScriptStruct FAnimNextRunGraphWorkData_v2 ****************************************

// ********** Begin ScriptStruct FRigUnit_AnimNextRunAnimationGraph_v2 *****************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextRunAnimationGraph_v2_Statics;

#define FRigUnit_AnimNextRunAnimationGraph_v2_Execute() \
	void FRigUnit_AnimNextRunAnimationGraph_v2::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextAnimGraph& Graph, \
		const int32 LOD, \
		const FAnimNextGraphReferencePose& ReferencePose, \
		const FAnimNextVariableOverridesCollection& Overrides, \
		FAnimNextGraphLODPose& Result, \
		FAnimNextRunGraphWorkData_v2& WorkData \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextRunAnimationGraph_v2_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextRunAnimationGraph_v2_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextAnimGraph& Graph, \
		const int32 LOD, \
		const FAnimNextGraphReferencePose& ReferencePose, \
		const FAnimNextVariableOverridesCollection& Overrides, \
		FAnimNextGraphLODPose& Result, \
		FAnimNextRunGraphWorkData_v2& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FAnimNextAnimGraph& Graph = *(FAnimNextAnimGraph*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 LOD = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		const FAnimNextGraphReferencePose& ReferencePose = *(FAnimNextGraphReferencePose*)RigVMMemoryHandles[2].GetInputData(); \
		const FAnimNextVariableOverridesCollection& Overrides = *(FAnimNextVariableOverridesCollection*)RigVMMemoryHandles[3].GetInputData(); \
		FAnimNextGraphLODPose& Result = *(FAnimNextGraphLODPose*)RigVMMemoryHandles[4].GetOutputData(); \
		FAnimNextRunGraphWorkData_v2& WorkData = *(FAnimNextRunGraphWorkData_v2*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Graph, \
			LOD, \
			ReferencePose, \
			Overrides, \
			Result, \
			WorkData \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextRunAnimationGraph_v2;
// ********** End ScriptStruct FRigUnit_AnimNextRunAnimationGraph_v2 *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextRunAnimationGraph_v2_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
