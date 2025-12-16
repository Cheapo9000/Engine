// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextRemapPose.h"

#ifdef UAF_RigUnit_AnimNextRemapPose_generated_h
#error "RigUnit_AnimNextRemapPose.generated.h already included, missing '#pragma once' in RigUnit_AnimNextRemapPose.h"
#endif
#define UAF_RigUnit_AnimNextRemapPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AnimNextRemapPose ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextRemapPose_Statics;

#define FRigUnit_AnimNextRemapPose_Execute() \
	void FRigUnit_AnimNextRemapPose::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextGraphLODPose& Pose, \
		FAnimNextGraphLODPose& Result, \
		const FAnimNextGraphReferencePose& TargetAnimGraphRefPose, \
		FRemapPoseData& RemapPoseData \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_AnimNextRemapPose_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextRemapPose_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextGraphLODPose& Pose, \
		FAnimNextGraphLODPose& Result, \
		const FAnimNextGraphReferencePose& TargetAnimGraphRefPose, \
		FRemapPoseData& RemapPoseData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FAnimNextGraphLODPose& Pose = *(FAnimNextGraphLODPose*)RigVMMemoryHandles[0].GetInputData(); \
		FAnimNextGraphLODPose& Result = *(FAnimNextGraphLODPose*)RigVMMemoryHandles[1].GetOutputData(); \
		const FAnimNextGraphReferencePose& TargetAnimGraphRefPose = *(FAnimNextGraphReferencePose*)RigVMMemoryHandles[2].GetInputData(); \
		FRemapPoseData& RemapPoseData = *(FRemapPoseData*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Pose, \
			Result, \
			TargetAnimGraphRefPose, \
			RemapPoseData \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextRemapPose;
// ********** End ScriptStruct FRigUnit_AnimNextRemapPose ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_AnimNextRemapPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
