// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_FindClosestItem.h"

#ifdef CONTROLRIG_RigUnit_FindClosestItem_generated_h
#error "RigUnit_FindClosestItem.generated.h already included, missing '#pragma once' in RigUnit_FindClosestItem.h"
#endif
#define CONTROLRIG_RigUnit_FindClosestItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_FindClosestItem ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_FindClosestItem_Statics;

#define FRigUnit_FindClosestItem_Execute() \
	void FRigUnit_FindClosestItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FVector& Point, \
		FRigElementKey& Item, \
		TArray<FCachedRigElement>& CachedItems \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_FindClosestItem_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FindClosestItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FVector& Point, \
		FRigElementKey& Item, \
		TArray<FCachedRigElement>& CachedItems \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Point = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[2].GetOutputData(); \
		TArray<FCachedRigElement>& CachedItems = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Point, \
			Item, \
			CachedItems \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_FindClosestItem;
// ********** End ScriptStruct FRigUnit_FindClosestItem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_FindClosestItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
