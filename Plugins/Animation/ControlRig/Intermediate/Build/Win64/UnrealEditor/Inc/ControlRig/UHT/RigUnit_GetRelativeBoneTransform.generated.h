// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetRelativeBoneTransform.h"

#ifdef CONTROLRIG_RigUnit_GetRelativeBoneTransform_generated_h
#error "RigUnit_GetRelativeBoneTransform.generated.h already included, missing '#pragma once' in RigUnit_GetRelativeBoneTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetRelativeBoneTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetRelativeBoneTransform *********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics;

#define FRigUnit_GetRelativeBoneTransform_Execute() \
	void FRigUnit_GetRelativeBoneTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FName& Space, \
		FTransform& Transform, \
		FCachedRigElement& CachedBone, \
		FCachedRigElement& CachedSpace \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetRelativeBoneTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FName& Space, \
		FTransform& Transform, \
		FCachedRigElement& CachedBone, \
		FCachedRigElement& CachedSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedBone = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bone, \
			Space, \
			Transform, \
			CachedBone, \
			CachedSpace \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetRelativeBoneTransform;
// ********** End ScriptStruct FRigUnit_GetRelativeBoneTransform ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetRelativeBoneTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
