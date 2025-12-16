// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetControlOffset.h"

#ifdef CONTROLRIG_RigUnit_GetControlOffset_generated_h
#error "RigUnit_GetControlOffset.generated.h already included, missing '#pragma once' in RigUnit_GetControlOffset.h"
#endif
#define CONTROLRIG_RigUnit_GetControlOffset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetControlOffset *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlOffset_Statics;

#define FRigUnit_GetControlOffset_Execute() \
	void FRigUnit_GetControlOffset::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FTransform& OffsetTransform, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlOffset_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FTransform& OffsetTransform, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Space, \
			OffsetTransform, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlOffset;
// ********** End ScriptStruct FRigUnit_GetControlOffset *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlOffset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
