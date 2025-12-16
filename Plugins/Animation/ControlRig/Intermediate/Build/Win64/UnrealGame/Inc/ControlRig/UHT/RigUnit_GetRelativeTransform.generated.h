// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetRelativeTransform.h"

#ifdef CONTROLRIG_RigUnit_GetRelativeTransform_generated_h
#error "RigUnit_GetRelativeTransform.generated.h already included, missing '#pragma once' in RigUnit_GetRelativeTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetRelativeTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetRelativeTransformForItem ******************************
struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics;

#define FRigUnit_GetRelativeTransformForItem_Execute() \
	void FRigUnit_GetRelativeTransformForItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bChildInitial, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		FTransform& RelativeTransform, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetRelativeTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bChildInitial, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		FTransform& RelativeTransform, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bChildInitial = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bParentInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FTransform& RelativeTransform = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bChildInitial, \
			Parent, \
			bParentInitial, \
			RelativeTransform, \
			CachedChild, \
			CachedParent \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetRelativeTransformForItem;
// ********** End ScriptStruct FRigUnit_GetRelativeTransformForItem ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetRelativeTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
