// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextRunAnimationGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_AnimNextRunAnimationGraph_generated_h
#error "RigUnit_AnimNextRunAnimationGraph.generated.h already included, missing '#pragma once' in RigUnit_AnimNextRunAnimationGraph.h"
#endif
#define ANIMNEXT_RigUnit_AnimNextRunAnimationGraph_generated_h


#define FRigUnit_AnimNextRunAnimationGraph_Execute() \
	void FRigUnit_AnimNextRunAnimationGraph::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UAnimNextAnimationGraph>& Graph, \
		FAnimNextGraphInstancePtr& Instance, \
		const int32 LOD, \
		const FAnimNextGraphReferencePose& ReferencePose, \
		FAnimNextGraphLODPose& Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextRunAnimationGraph_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextRunAnimationGraph_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UAnimNextAnimationGraph>& Graph, \
		FAnimNextGraphInstancePtr& Instance, \
		const int32 LOD, \
		const FAnimNextGraphReferencePose& ReferencePose, \
		FAnimNextGraphLODPose& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<UAnimNextAnimationGraph>& Graph = *(TObjectPtr<UAnimNextAnimationGraph>*)RigVMMemoryHandles[0].GetData(false); \
		FAnimNextGraphInstancePtr& Instance = *(FAnimNextGraphInstancePtr*)RigVMMemoryHandles[1].GetData(false); \
		const int32 LOD = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const FAnimNextGraphReferencePose& ReferencePose = *(FAnimNextGraphReferencePose*)RigVMMemoryHandles[3].GetData(false); \
		FAnimNextGraphLODPose& Result = *(FAnimNextGraphLODPose*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Graph, \
			Instance, \
			LOD, \
			ReferencePose, \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextRunAnimationGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextRunAnimationGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
