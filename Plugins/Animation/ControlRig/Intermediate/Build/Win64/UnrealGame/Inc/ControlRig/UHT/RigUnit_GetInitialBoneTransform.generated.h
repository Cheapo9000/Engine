// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetInitialBoneTransform.h"

#ifdef CONTROLRIG_RigUnit_GetInitialBoneTransform_generated_h
#error "RigUnit_GetInitialBoneTransform.generated.h already included, missing '#pragma once' in RigUnit_GetInitialBoneTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetInitialBoneTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetInitialBoneTransform **********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetInitialBoneTransform_Statics;

#define FRigUnit_GetInitialBoneTransform_Execute() \
	void FRigUnit_GetInitialBoneTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform, \
		FCachedRigElement& CachedBone \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetInitialBoneTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetInitialBoneTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform, \
		FCachedRigElement& CachedBone \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedBone = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bone, \
			Space, \
			Transform, \
			CachedBone \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetInitialBoneTransform;
// ********** End ScriptStruct FRigUnit_GetInitialBoneTransform ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetInitialBoneTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
