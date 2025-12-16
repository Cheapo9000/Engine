// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetControlDrivenList.h"

#ifdef CONTROLRIG_RigUnit_SetControlDrivenList_generated_h
#error "RigUnit_SetControlDrivenList.generated.h already included, missing '#pragma once' in RigUnit_SetControlDrivenList.h"
#endif
#define CONTROLRIG_RigUnit_SetControlDrivenList_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetControlDrivenList *************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics;

#define FRigUnit_GetControlDrivenList_Execute() \
	void FRigUnit_GetControlDrivenList::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		TArray<FRigElementKey>& Driven, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlDrivenList_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		TArray<FRigElementKey>& Driven, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementKey>& Driven = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Driven, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlDrivenList;
// ********** End ScriptStruct FRigUnit_GetControlDrivenList ***************************************

// ********** Begin ScriptStruct FRigUnit_SetControlDrivenList *************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics;

#define FRigUnit_SetControlDrivenList_Execute() \
	void FRigUnit_SetControlDrivenList::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const TArrayView<const FRigElementKey>& Driven, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlDrivenList_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const TArrayView<const FRigElementKey>& Driven, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementKey>& Driven = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetInputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Driven, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlDrivenList;
// ********** End ScriptStruct FRigUnit_SetControlDrivenList ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlDrivenList_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
