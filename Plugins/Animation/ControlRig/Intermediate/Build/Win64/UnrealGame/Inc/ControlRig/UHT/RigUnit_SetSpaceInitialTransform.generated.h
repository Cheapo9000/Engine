// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h"

#ifdef CONTROLRIG_RigUnit_SetSpaceInitialTransform_generated_h
#error "RigUnit_SetSpaceInitialTransform.generated.h already included, missing '#pragma once' in RigUnit_SetSpaceInitialTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetSpaceInitialTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SetSpaceInitialTransform *********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics;

#define FRigUnit_SetSpaceInitialTransform_Execute() \
	void FRigUnit_SetSpaceInitialTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& SpaceName, \
		const FTransform& Transform, \
		FTransform& Result, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& SpaceName, \
		const FTransform& Transform, \
		FTransform& Result, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& SpaceName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		FCachedRigElement& CachedSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SpaceName, \
			Transform, \
			Result, \
			Space, \
			CachedSpaceIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetSpaceInitialTransform;
// ********** End ScriptStruct FRigUnit_SetSpaceInitialTransform ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
