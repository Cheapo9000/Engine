// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h"

#ifdef CONTROLRIG_RigUnit_DistributeRotation_generated_h
#error "RigUnit_DistributeRotation.generated.h already included, missing '#pragma once' in RigUnit_DistributeRotation.h"
#endif
#define CONTROLRIG_RigUnit_DistributeRotation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DistributeRotation_Rotation ******************************
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_DistributeRotation_Rotation;
// ********** End ScriptStruct FRigUnit_DistributeRotation_Rotation ********************************

// ********** Begin ScriptStruct FRigUnit_DistributeRotation_WorkData ******************************
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_DistributeRotation_WorkData;
// ********** End ScriptStruct FRigUnit_DistributeRotation_WorkData ********************************

// ********** Begin ScriptStruct FRigUnit_DistributeRotation ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics;

#define FRigUnit_DistributeRotation_Execute() \
	void FRigUnit_DistributeRotation::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FRigUnit_DistributeRotation_Rotation>& Rotations = *(TArray<FRigUnit_DistributeRotation_Rotation>*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FRigUnit_DistributeRotation_WorkData& WorkData = *(FRigUnit_DistributeRotation_WorkData*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EndBone, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_DistributeRotation;
// ********** End ScriptStruct FRigUnit_DistributeRotation *****************************************

// ********** Begin ScriptStruct FRigUnit_DistributeRotationForCollection **************************
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics;

#define FRigUnit_DistributeRotationForCollection_Execute() \
	void FRigUnit_DistributeRotationForCollection::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigUnit_DistributeRotation_Rotation>& Rotations = *(TArray<FRigUnit_DistributeRotation_Rotation>*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[2].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		FRigUnit_DistributeRotation_WorkData& WorkData = *(FRigUnit_DistributeRotation_WorkData*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_DistributeRotationForCollection;
// ********** End ScriptStruct FRigUnit_DistributeRotationForCollection ****************************

// ********** Begin ScriptStruct FRigUnit_DistributeRotationForItemArray ***************************
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics;

#define FRigUnit_DistributeRotationForItemArray_Execute() \
	void FRigUnit_DistributeRotationForItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_180_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigUnit_DistributeRotation_Rotation>& Rotations = *(TArray<FRigUnit_DistributeRotation_Rotation>*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[2].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		FRigUnit_DistributeRotation_WorkData& WorkData = *(FRigUnit_DistributeRotation_WorkData*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_DistributeRotationForItemArray;
// ********** End ScriptStruct FRigUnit_DistributeRotationForItemArray *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
