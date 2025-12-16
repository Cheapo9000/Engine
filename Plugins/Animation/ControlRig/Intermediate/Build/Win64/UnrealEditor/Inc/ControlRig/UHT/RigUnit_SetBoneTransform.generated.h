// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetBoneTransform.h"

#ifdef CONTROLRIG_RigUnit_SetBoneTransform_generated_h
#error "RigUnit_SetBoneTransform.generated.h already included, missing '#pragma once' in RigUnit_SetBoneTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetBoneTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SetBoneTransform *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetBoneTransform_Statics;

#define FRigUnit_SetBoneTransform_Execute() \
	void FRigUnit_SetBoneTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FTransform& Transform, \
		FTransform& Result, \
		const ERigVMTransformSpace Space, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetBoneTransform_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetBoneTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FTransform& Transform, \
		FTransform& Result, \
		const ERigVMTransformSpace Space, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& CachedBone = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bone, \
			Transform, \
			Result, \
			Space, \
			Weight, \
			bPropagateToChildren, \
			CachedBone \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetBoneTransform;
// ********** End ScriptStruct FRigUnit_SetBoneTransform *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetBoneTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
