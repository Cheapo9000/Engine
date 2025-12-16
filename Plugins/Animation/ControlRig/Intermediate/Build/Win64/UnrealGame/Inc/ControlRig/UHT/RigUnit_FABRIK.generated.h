// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_FABRIK.h"

#ifdef CONTROLRIG_RigUnit_FABRIK_generated_h
#error "RigUnit_FABRIK.generated.h already included, missing '#pragma once' in RigUnit_FABRIK.h"
#endif
#define CONTROLRIG_RigUnit_FABRIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_FABRIK_WorkData ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_FABRIK_WorkData;
// ********** End ScriptStruct FRigUnit_FABRIK_WorkData ********************************************

// ********** Begin ScriptStruct FRigUnit_FABRIK ***************************************************
struct Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics;

#define FRigUnit_FABRIK_Execute() \
	void FRigUnit_FABRIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EffectorBone, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics; \
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
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform \
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
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[6].GetInputData(); \
		FRigUnit_FABRIK_WorkData& WorkData = *(FRigUnit_FABRIK_WorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		const bool bSetEffectorTransform = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EffectorBone, \
			EffectorTransform, \
			Precision, \
			Weight, \
			bPropagateToChildren, \
			MaxIterations, \
			WorkData, \
			bSetEffectorTransform \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_FABRIK;
// ********** End ScriptStruct FRigUnit_FABRIK *****************************************************

// ********** Begin ScriptStruct FRigUnit_FABRIKPerItem ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics;

#define FRigUnit_FABRIKPerItem_Execute() \
	void FRigUnit_FABRIKPerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_119_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform \
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
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[5].GetInputData(); \
		FRigUnit_FABRIK_WorkData& WorkData = *(FRigUnit_FABRIK_WorkData*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		const bool bSetEffectorTransform = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			EffectorTransform, \
			Precision, \
			Weight, \
			bPropagateToChildren, \
			MaxIterations, \
			WorkData, \
			bSetEffectorTransform \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_FABRIKPerItem;
// ********** End ScriptStruct FRigUnit_FABRIKPerItem **********************************************

// ********** Begin ScriptStruct FRigUnit_FABRIKItemArray ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics;

#define FRigUnit_FABRIKItemArray_Execute() \
	void FRigUnit_FABRIKItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_193_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform \
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
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[5].GetInputData(); \
		FRigUnit_FABRIK_WorkData& WorkData = *(FRigUnit_FABRIK_WorkData*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		const bool bSetEffectorTransform = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			EffectorTransform, \
			Precision, \
			Weight, \
			bPropagateToChildren, \
			MaxIterations, \
			WorkData, \
			bSetEffectorTransform \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_FABRIKItemArray;
// ********** End ScriptStruct FRigUnit_FABRIKItemArray ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
