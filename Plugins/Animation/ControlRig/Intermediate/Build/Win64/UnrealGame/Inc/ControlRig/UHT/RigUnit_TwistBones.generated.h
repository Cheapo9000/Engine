// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_TwistBones.h"

#ifdef CONTROLRIG_RigUnit_TwistBones_generated_h
#error "RigUnit_TwistBones.generated.h already included, missing '#pragma once' in RigUnit_TwistBones.h"
#endif
#define CONTROLRIG_RigUnit_TwistBones_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_TwistBones_WorkData **************************************
struct Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_TwistBones_WorkData;
// ********** End ScriptStruct FRigUnit_TwistBones_WorkData ****************************************

// ********** Begin ScriptStruct FRigUnit_TwistBones ***********************************************
struct Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics;

#define FRigUnit_TwistBones_Execute() \
	void FRigUnit_TwistBones::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const FVector& TwistAxis, \
		const FVector& PoleAxis, \
		const ERigVMAnimEasingType TwistEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_TwistBones_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const FVector& TwistAxis, \
		const FVector& PoleAxis, \
		const ERigVMAnimEasingType TwistEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_TwistBones_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& PoleAxis = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const ERigVMAnimEasingType TwistEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[4].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		FRigUnit_TwistBones_WorkData& WorkData = *(FRigUnit_TwistBones_WorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EndBone, \
			TwistAxis, \
			PoleAxis, \
			TwistEaseType, \
			Weight, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_TwistBones;
// ********** End ScriptStruct FRigUnit_TwistBones *************************************************

// ********** Begin ScriptStruct FRigUnit_TwistBonesPerItem ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics;

#define FRigUnit_TwistBonesPerItem_Execute() \
	void FRigUnit_TwistBonesPerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FVector& TwistAxis, \
		const FVector& PoleAxis, \
		const ERigVMAnimEasingType TwistEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_TwistBones_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FVector& TwistAxis, \
		const FVector& PoleAxis, \
		const ERigVMAnimEasingType TwistEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_TwistBones_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& PoleAxis = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigVMAnimEasingType TwistEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FRigUnit_TwistBones_WorkData& WorkData = *(FRigUnit_TwistBones_WorkData*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			TwistAxis, \
			PoleAxis, \
			TwistEaseType, \
			Weight, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_TwistBonesPerItem;
// ********** End ScriptStruct FRigUnit_TwistBonesPerItem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
