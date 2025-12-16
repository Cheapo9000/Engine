// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_CCDIK.h"

#ifdef CONTROLRIG_RigUnit_CCDIK_generated_h
#error "RigUnit_CCDIK.generated.h already included, missing '#pragma once' in RigUnit_CCDIK.h"
#endif
#define CONTROLRIG_RigUnit_CCDIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_CCDIK_RotationLimit **************************************
struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_CCDIK_RotationLimit;
// ********** End ScriptStruct FRigUnit_CCDIK_RotationLimit ****************************************

// ********** Begin ScriptStruct FRigUnit_CCDIK_RotationLimitPerItem *******************************
struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_CCDIK_RotationLimitPerItem;
// ********** End ScriptStruct FRigUnit_CCDIK_RotationLimitPerItem *********************************

// ********** Begin ScriptStruct FRigUnit_CCDIK_WorkData *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_CCDIK_WorkData;
// ********** End ScriptStruct FRigUnit_CCDIK_WorkData *********************************************

// ********** Begin ScriptStruct FRigUnit_CCDIK ****************************************************
struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics;

#define FRigUnit_CCDIK_Execute() \
	void FRigUnit_CCDIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EffectorBone, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimit>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EffectorBone, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimit>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& EffectorBone = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& EffectorTransform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const float Precision = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bStartFromTail = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const float BaseRotationLimit = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		TArray<FRigUnit_CCDIK_RotationLimit>& RotationLimits = *(TArray<FRigUnit_CCDIK_RotationLimit>*)RigVMMemoryHandles[8].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[9].GetInputData(); \
		FRigUnit_CCDIK_WorkData& WorkData = *(FRigUnit_CCDIK_WorkData*)RigVMMemoryHandles[10].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EffectorBone, \
			EffectorTransform, \
			Precision, \
			Weight, \
			MaxIterations, \
			bStartFromTail, \
			BaseRotationLimit, \
			RotationLimits, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_CCDIK;
// ********** End ScriptStruct FRigUnit_CCDIK ******************************************************

// ********** Begin ScriptStruct FRigUnit_CCDIKPerItem *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics;

#define FRigUnit_CCDIKPerItem_Execute() \
	void FRigUnit_CCDIKPerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_186_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& EffectorTransform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		const float Precision = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bStartFromTail = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		const float BaseRotationLimit = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		TArray<FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits = *(TArray<FRigUnit_CCDIK_RotationLimitPerItem>*)RigVMMemoryHandles[7].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		FRigUnit_CCDIK_WorkData& WorkData = *(FRigUnit_CCDIK_WorkData*)RigVMMemoryHandles[9].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			EffectorTransform, \
			Precision, \
			Weight, \
			MaxIterations, \
			bStartFromTail, \
			BaseRotationLimit, \
			RotationLimits, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_CCDIKPerItem;
// ********** End ScriptStruct FRigUnit_CCDIKPerItem ***********************************************

// ********** Begin ScriptStruct FRigUnit_CCDIKItemArray *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics;

#define FRigUnit_CCDIKItemArray_Execute() \
	void FRigUnit_CCDIKItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_273_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& EffectorTransform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		const float Precision = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bStartFromTail = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		const float BaseRotationLimit = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		TArray<FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits = *(TArray<FRigUnit_CCDIK_RotationLimitPerItem>*)RigVMMemoryHandles[7].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		FRigUnit_CCDIK_WorkData& WorkData = *(FRigUnit_CCDIK_WorkData*)RigVMMemoryHandles[9].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			EffectorTransform, \
			Precision, \
			Weight, \
			MaxIterations, \
			bStartFromTail, \
			BaseRotationLimit, \
			RotationLimits, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_CCDIKItemArray;
// ********** End ScriptStruct FRigUnit_CCDIKItemArray *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
