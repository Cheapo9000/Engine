// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetRelativeTransform.h"

#ifdef CONTROLRIG_RigUnit_SetRelativeTransform_generated_h
#error "RigUnit_SetRelativeTransform.generated.h already included, missing '#pragma once' in RigUnit_SetRelativeTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetRelativeTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SetRelativeTransformForItem ******************************
struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics;

#define FRigUnit_SetRelativeTransformForItem_Execute() \
	void FRigUnit_SetRelativeTransformForItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FTransform& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetRelativeTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FTransform& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bParentInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent, \
			bParentInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedChild, \
			CachedParent \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetRelativeTransformForItem;
// ********** End ScriptStruct FRigUnit_SetRelativeTransformForItem ********************************

// ********** Begin ScriptStruct FRigUnit_SetRelativeTranslationForItem ****************************
struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics;

#define FRigUnit_SetRelativeTranslationForItem_Execute() \
	void FRigUnit_SetRelativeTranslationForItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FVector& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetRelativeTransform_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FVector& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bParentInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent, \
			bParentInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedChild, \
			CachedParent \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetRelativeTranslationForItem;
// ********** End ScriptStruct FRigUnit_SetRelativeTranslationForItem ******************************

// ********** Begin ScriptStruct FRigUnit_SetRelativeRotationForItem *******************************
struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics;

#define FRigUnit_SetRelativeRotationForItem_Execute() \
	void FRigUnit_SetRelativeRotationForItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FQuat& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetRelativeTransform_h_154_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FQuat& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bParentInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent, \
			bParentInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedChild, \
			CachedParent \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetRelativeRotationForItem;
// ********** End ScriptStruct FRigUnit_SetRelativeRotationForItem *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetRelativeTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
