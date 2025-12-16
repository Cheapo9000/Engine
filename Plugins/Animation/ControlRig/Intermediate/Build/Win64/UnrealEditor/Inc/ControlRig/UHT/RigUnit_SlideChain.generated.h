// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_SlideChain.h"

#ifdef CONTROLRIG_RigUnit_SlideChain_generated_h
#error "RigUnit_SlideChain.generated.h already included, missing '#pragma once' in RigUnit_SlideChain.h"
#endif
#define CONTROLRIG_RigUnit_SlideChain_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SlideChain_WorkData **************************************
struct Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SlideChain_WorkData;
// ********** End ScriptStruct FRigUnit_SlideChain_WorkData ****************************************

// ********** Begin ScriptStruct FRigUnit_SlideChain ***********************************************
struct Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics;

#define FRigUnit_SlideChain_Execute() \
	void FRigUnit_SlideChain::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const float SlideAmount = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigUnit_SlideChain_WorkData& WorkData = *(FRigUnit_SlideChain_WorkData*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EndBone, \
			SlideAmount, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_SlideChain;
// ********** End ScriptStruct FRigUnit_SlideChain *************************************************

// ********** Begin ScriptStruct FRigUnit_SlideChainPerItem ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics;

#define FRigUnit_SlideChainPerItem_Execute() \
	void FRigUnit_SlideChainPerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const float SlideAmount = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FRigUnit_SlideChain_WorkData& WorkData = *(FRigUnit_SlideChain_WorkData*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			SlideAmount, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_SlideChainPerItem;
// ********** End ScriptStruct FRigUnit_SlideChainPerItem ******************************************

// ********** Begin ScriptStruct FRigUnit_SlideChainItemArray **************************************
struct Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics;

#define FRigUnit_SlideChainItemArray_Execute() \
	void FRigUnit_SlideChainItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const float SlideAmount = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FRigUnit_SlideChain_WorkData& WorkData = *(FRigUnit_SlideChain_WorkData*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			SlideAmount, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_SlideChainItemArray;
// ********** End ScriptStruct FRigUnit_SlideChainItemArray ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
