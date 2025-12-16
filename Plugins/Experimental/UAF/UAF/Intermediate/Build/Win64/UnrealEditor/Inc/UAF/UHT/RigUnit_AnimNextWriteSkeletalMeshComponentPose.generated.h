// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextWriteSkeletalMeshComponentPose.h"

#ifdef UAF_RigUnit_AnimNextWriteSkeletalMeshComponentPose_generated_h
#error "RigUnit_AnimNextWriteSkeletalMeshComponentPose.generated.h already included, missing '#pragma once' in RigUnit_AnimNextWriteSkeletalMeshComponentPose.h"
#endif
#define UAF_RigUnit_AnimNextWriteSkeletalMeshComponentPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AnimNextWriteSkeletalMeshComponentPose *******************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextWriteSkeletalMeshComponentPose_Statics;

#define FRigUnit_AnimNextWriteSkeletalMeshComponentPose_Execute() \
	void FRigUnit_AnimNextWriteSkeletalMeshComponentPose::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextGraphLODPose& Pose, \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_AnimNextWriteSkeletalMeshComponentPose_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextWriteSkeletalMeshComponentPose_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextGraphLODPose& Pose, \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FAnimNextGraphLODPose& Pose = *(FAnimNextGraphLODPose*)RigVMMemoryHandles[0].GetInputData(); \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent = *(TObjectPtr<USkeletalMeshComponent>*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Pose, \
			SkeletalMeshComponent \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextWriteSkeletalMeshComponentPose;
// ********** End ScriptStruct FRigUnit_AnimNextWriteSkeletalMeshComponentPose *********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_AnimNextWriteSkeletalMeshComponentPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
