// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_DebugDrawTrajectory.h"

#ifdef UAFPOSESEARCH_RigUnit_DebugDrawTrajectory_generated_h
#error "RigUnit_DebugDrawTrajectory.generated.h already included, missing '#pragma once' in RigUnit_DebugDrawTrajectory.h"
#endif
#define UAFPOSESEARCH_RigUnit_DebugDrawTrajectory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DebugDrawTrajectory **************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugDrawTrajectory_Statics;

#define FRigUnit_DebugDrawTrajectory_Execute() \
	void FRigUnit_DebugDrawTrajectory::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		FTransformTrajectory& Trajectory, \
		const float DebugThickness, \
		const float DebugOffset, \
		const bool Enabled \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_DebugDrawTrajectory_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugDrawTrajectory_Statics; \
	UAFPOSESEARCH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		FTransformTrajectory& Trajectory, \
		const float DebugThickness, \
		const float DebugOffset, \
		const bool Enabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransformTrajectory& Trajectory = *(FTransformTrajectory*)RigVMMemoryHandles[0].GetOutputData(); \
		const float DebugThickness = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float DebugOffset = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool Enabled = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Trajectory, \
			DebugThickness, \
			DebugOffset, \
			Enabled \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_DebugDrawTrajectory;
// ********** End ScriptStruct FRigUnit_DebugDrawTrajectory ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_DebugDrawTrajectory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
