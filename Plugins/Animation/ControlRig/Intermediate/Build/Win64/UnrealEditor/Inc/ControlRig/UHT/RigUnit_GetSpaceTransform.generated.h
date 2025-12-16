// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetSpaceTransform.h"

#ifdef CONTROLRIG_RigUnit_GetSpaceTransform_generated_h
#error "RigUnit_GetSpaceTransform.generated.h already included, missing '#pragma once' in RigUnit_GetSpaceTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetSpaceTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetSpaceTransform ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetSpaceTransform_Statics;

#define FRigUnit_GetSpaceTransform_Execute() \
	void FRigUnit_GetSpaceTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Space, \
		const ERigVMTransformSpace SpaceType, \
		FTransform& Transform, \
		FCachedRigElement& CachedSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetSpaceTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetSpaceTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Space, \
		const ERigVMTransformSpace SpaceType, \
		FTransform& Transform, \
		FCachedRigElement& CachedSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Space = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace SpaceType = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Space, \
			SpaceType, \
			Transform, \
			CachedSpaceIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetSpaceTransform;
// ********** End ScriptStruct FRigUnit_GetSpaceTransform ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetSpaceTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
