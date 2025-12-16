// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h"

#ifdef CONTROLRIG_RigUnit_SetRelativeBoneTransform_generated_h
#error "RigUnit_SetRelativeBoneTransform.generated.h already included, missing '#pragma once' in RigUnit_SetRelativeBoneTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetRelativeBoneTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SetRelativeBoneTransform *********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics;

#define FRigUnit_SetRelativeBoneTransform_Execute() \
	void FRigUnit_SetRelativeBoneTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FName& Space, \
		const FTransform& Transform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone, \
		FCachedRigElement& CachedSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetRelativeBoneTransform_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FName& Space, \
		const FTransform& Transform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone, \
		FCachedRigElement& CachedSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		FCachedRigElement& CachedBone = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bone, \
			Space, \
			Transform, \
			Weight, \
			bPropagateToChildren, \
			CachedBone, \
			CachedSpaceIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetRelativeBoneTransform;
// ********** End ScriptStruct FRigUnit_SetRelativeBoneTransform ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetRelativeBoneTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
