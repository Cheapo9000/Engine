// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h"

#ifdef CONTROLRIG_RigUnit_ModifyBoneTransforms_generated_h
#error "RigUnit_ModifyBoneTransforms.generated.h already included, missing '#pragma once' in RigUnit_ModifyBoneTransforms.h"
#endif
#define CONTROLRIG_RigUnit_ModifyBoneTransforms_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ModifyBoneTransforms_PerBone *****************************
struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ModifyBoneTransforms_PerBone;
// ********** End ScriptStruct FRigUnit_ModifyBoneTransforms_PerBone *******************************

// ********** Begin ScriptStruct FRigUnit_ModifyBoneTransforms_WorkData ****************************
struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_ModifyTransforms_WorkData Super;


struct FRigUnit_ModifyBoneTransforms_WorkData;
// ********** End ScriptStruct FRigUnit_ModifyBoneTransforms_WorkData ******************************

// ********** Begin ScriptStruct FRigUnit_ModifyBoneTransforms *************************************
struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics;

#define FRigUnit_ModifyBoneTransforms_Execute() \
	void FRigUnit_ModifyBoneTransforms::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_ModifyBoneTransforms_PerBone>& BoneToModify, \
		const float Weight, \
		const float WeightMinimum, \
		const float WeightMaximum, \
		const EControlRigModifyBoneMode Mode, \
		FRigUnit_ModifyBoneTransforms_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_ModifyBoneTransforms_PerBone>& BoneToModify, \
		const float Weight, \
		const float WeightMinimum, \
		const float WeightMaximum, \
		const EControlRigModifyBoneMode Mode, \
		FRigUnit_ModifyBoneTransforms_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_ModifyBoneTransforms_PerBone>& BoneToModify = *(TArray<FRigUnit_ModifyBoneTransforms_PerBone>*)RigVMMemoryHandles[0].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float WeightMinimum = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float WeightMaximum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const EControlRigModifyBoneMode Mode = *(EControlRigModifyBoneMode*)RigVMMemoryHandles[4].GetInputData(); \
		FRigUnit_ModifyBoneTransforms_WorkData& WorkData = *(FRigUnit_ModifyBoneTransforms_WorkData*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			BoneToModify, \
			Weight, \
			WeightMinimum, \
			WeightMaximum, \
			Mode, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_ModifyBoneTransforms;
// ********** End ScriptStruct FRigUnit_ModifyBoneTransforms ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
