// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_PropagateTransform.h"

#ifdef CONTROLRIG_RigUnit_PropagateTransform_generated_h
#error "RigUnit_PropagateTransform.generated.h already included, missing '#pragma once' in RigUnit_PropagateTransform.h"
#endif
#define CONTROLRIG_RigUnit_PropagateTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_PropagateTransform ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics;

#define FRigUnit_PropagateTransform_Execute() \
	void FRigUnit_PropagateTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const bool bRecomputeGlobal, \
		const bool bApplyToChildren, \
		const bool bRecursive, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_PropagateTransform_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const bool bRecomputeGlobal, \
		const bool bApplyToChildren, \
		const bool bRecursive, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bRecomputeGlobal = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bApplyToChildren = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bRecursive = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			bRecomputeGlobal, \
			bApplyToChildren, \
			bRecursive, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_PropagateTransform;
// ********** End ScriptStruct FRigUnit_PropagateTransform *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_PropagateTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
