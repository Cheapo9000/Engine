// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextRunAnimationGraph_v1.h"

#ifdef UAFANIMGRAPH_RigUnit_AnimNextRunAnimationGraph_v1_generated_h
#error "RigUnit_AnimNextRunAnimationGraph_v1.generated.h already included, missing '#pragma once' in RigUnit_AnimNextRunAnimationGraph_v1.h"
#endif
#define UAFANIMGRAPH_RigUnit_AnimNextRunAnimationGraph_v1_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNextRunGraphWorkData_v1 **************************************
struct Z_Construct_UScriptStruct_FAnimNextRunGraphWorkData_v1_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextRunAnimationGraph_v1_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextRunGraphWorkData_v1_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct();


struct FAnimNextRunGraphWorkData_v1;
// ********** End ScriptStruct FAnimNextRunGraphWorkData_v1 ****************************************

// ********** Begin ScriptStruct FRigUnit_AnimNextRunAnimationGraph_v1 *****************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextRunAnimationGraph_v1_Statics;

#define FRigUnit_AnimNextRunAnimationGraph_v1_Execute() \
	void FRigUnit_AnimNextRunAnimationGraph_v1::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UAnimNextAnimationGraph>& Graph, \
		FAnimNextAnimGraph& Instance, \
		const int32 LOD, \
		const FAnimNextGraphReferencePose& ReferencePose, \
		const FAnimNextVariableOverridesCollection& Overrides, \
		FAnimNextGraphLODPose& Result, \
		FAnimNextRunGraphWorkData_v1& WorkData \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextRunAnimationGraph_v1_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextRunAnimationGraph_v1_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UAnimNextAnimationGraph>& Graph, \
		FAnimNextAnimGraph& Instance, \
		const int32 LOD, \
		const FAnimNextGraphReferencePose& ReferencePose, \
		const FAnimNextVariableOverridesCollection& Overrides, \
		FAnimNextGraphLODPose& Result, \
		FAnimNextRunGraphWorkData_v1& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<UAnimNextAnimationGraph>& Graph = *(TObjectPtr<UAnimNextAnimationGraph>*)RigVMMemoryHandles[0].GetInputData(); \
		FAnimNextAnimGraph& Instance = *(FAnimNextAnimGraph*)RigVMMemoryHandles[1].GetOutputData(); \
		const int32 LOD = *(int32*)RigVMMemoryHandles[2].GetInputData(); \
		const FAnimNextGraphReferencePose& ReferencePose = *(FAnimNextGraphReferencePose*)RigVMMemoryHandles[3].GetInputData(); \
		const FAnimNextVariableOverridesCollection& Overrides = *(FAnimNextVariableOverridesCollection*)RigVMMemoryHandles[4].GetInputData(); \
		FAnimNextGraphLODPose& Result = *(FAnimNextGraphLODPose*)RigVMMemoryHandles[5].GetOutputData(); \
		FAnimNextRunGraphWorkData_v1& WorkData = *(FAnimNextRunGraphWorkData_v1*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Graph, \
			Instance, \
			LOD, \
			ReferencePose, \
			Overrides, \
			Result, \
			WorkData \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextRunAnimationGraph_v1;
// ********** End ScriptStruct FRigUnit_AnimNextRunAnimationGraph_v1 *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextRunAnimationGraph_v1_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
