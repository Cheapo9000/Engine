// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h"

#ifdef CONTROLRIG_RigUnit_ProjectTransformToNewParent_generated_h
#error "RigUnit_ProjectTransformToNewParent.generated.h already included, missing '#pragma once' in RigUnit_ProjectTransformToNewParent.h"
#endif
#define CONTROLRIG_RigUnit_ProjectTransformToNewParent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ProjectTransformToNewParent ******************************
struct Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics;

#define FRigUnit_ProjectTransformToNewParent_Execute() \
	void FRigUnit_ProjectTransformToNewParent::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bChildInitial, \
		const FRigElementKey& OldParent, \
		const bool bOldParentInitial, \
		const FRigElementKey& NewParent, \
		const bool bNewParentInitial, \
		FTransform& Transform, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedOldParent, \
		FCachedRigElement& CachedNewParent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ProjectTransformToNewParent_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bChildInitial, \
		const FRigElementKey& OldParent, \
		const bool bOldParentInitial, \
		const FRigElementKey& NewParent, \
		const bool bNewParentInitial, \
		FTransform& Transform, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedOldParent, \
		FCachedRigElement& CachedNewParent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bChildInitial = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigElementKey& OldParent = *(FRigElementKey*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bOldParentInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& NewParent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bNewParentInitial = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[6].GetOutputData(); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedOldParent = *(FCachedRigElement*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedNewParent = *(FCachedRigElement*)RigVMMemoryHandles[9].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bChildInitial, \
			OldParent, \
			bOldParentInitial, \
			NewParent, \
			bNewParentInitial, \
			Transform, \
			CachedChild, \
			CachedOldParent, \
			CachedNewParent \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ProjectTransformToNewParent;
// ********** End ScriptStruct FRigUnit_ProjectTransformToNewParent ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ProjectTransformToNewParent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
