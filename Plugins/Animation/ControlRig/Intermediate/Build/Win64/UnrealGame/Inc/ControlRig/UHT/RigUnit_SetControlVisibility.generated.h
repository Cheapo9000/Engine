// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetControlVisibility.h"

#ifdef CONTROLRIG_RigUnit_SetControlVisibility_generated_h
#error "RigUnit_SetControlVisibility.generated.h already included, missing '#pragma once' in RigUnit_SetControlVisibility.h"
#endif
#define CONTROLRIG_RigUnit_SetControlVisibility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetControlVisibility *************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics;

#define FRigUnit_GetControlVisibility_Execute() \
	void FRigUnit_GetControlVisibility::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& bVisible, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlVisibility_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& bVisible, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		bool& bVisible = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			bVisible, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlVisibility;
// ********** End ScriptStruct FRigUnit_GetControlVisibility ***************************************

// ********** Begin ScriptStruct FRigUnit_SetControlVisibility *************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics;

#define FRigUnit_SetControlVisibility_Execute() \
	void FRigUnit_SetControlVisibility::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FString& Pattern, \
		const bool bVisible, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlVisibility_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FString& Pattern, \
		const bool bVisible, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Pattern = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bVisible = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Pattern, \
			bVisible, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlVisibility;
// ********** End ScriptStruct FRigUnit_SetControlVisibility ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlVisibility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
