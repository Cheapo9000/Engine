// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_OffsetTransform.h"

#ifdef CONTROLRIG_RigUnit_OffsetTransform_generated_h
#error "RigUnit_OffsetTransform.generated.h already included, missing '#pragma once' in RigUnit_OffsetTransform.h"
#endif
#define CONTROLRIG_RigUnit_OffsetTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_OffsetTransformForItem ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_OffsetTransformForItem_Statics;

#define FRigUnit_OffsetTransformForItem_Execute() \
	void FRigUnit_OffsetTransformForItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FTransform& OffsetTransform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_OffsetTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_OffsetTransformForItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FTransform& OffsetTransform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			OffsetTransform, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_OffsetTransformForItem;
// ********** End ScriptStruct FRigUnit_OffsetTransformForItem *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_OffsetTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
