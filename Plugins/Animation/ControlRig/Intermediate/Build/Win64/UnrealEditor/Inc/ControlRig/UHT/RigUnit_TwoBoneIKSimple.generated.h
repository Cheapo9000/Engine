// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h"

#ifdef CONTROLRIG_RigUnit_TwoBoneIKSimple_generated_h
#error "RigUnit_TwoBoneIKSimple.generated.h already included, missing '#pragma once' in RigUnit_TwoBoneIKSimple.h"
#endif
#define CONTROLRIG_RigUnit_TwoBoneIKSimple_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_TwoBoneIKSimple_DebugSettings ****************************
struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_TwoBoneIKSimple_DebugSettings;
// ********** End ScriptStruct FRigUnit_TwoBoneIKSimple_DebugSettings ******************************

// ********** Begin ScriptStruct FRigUnit_TwoBoneIKSimple ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics;

#define FRigUnit_TwoBoneIKSimple_Execute() \
	void FRigUnit_TwoBoneIKSimple::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& BoneA, \
		const FName& BoneB, \
		const FName& EffectorBone, \
		const FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const FVector& PoleVector, \
		const EControlRigVectorKind PoleVectorKind, \
		const FName& PoleVectorSpace, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float Weight, \
		const float BoneALength, \
		const float BoneBLength, \
		const bool bPropagateToChildren, \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneAIndex, \
		FCachedRigElement& CachedBoneBIndex, \
		FCachedRigElement& CachedEffectorBoneIndex, \
		FCachedRigElement& CachedPoleVectorSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& BoneA, \
		const FName& BoneB, \
		const FName& EffectorBone, \
		const FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const FVector& PoleVector, \
		const EControlRigVectorKind PoleVectorKind, \
		const FName& PoleVectorSpace, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float Weight, \
		const float BoneALength, \
		const float BoneBLength, \
		const bool bPropagateToChildren, \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneAIndex, \
		FCachedRigElement& CachedBoneBIndex, \
		FCachedRigElement& CachedEffectorBoneIndex, \
		FCachedRigElement& CachedPoleVectorSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& BoneA = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& BoneB = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& EffectorBone = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& Effector = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[4].GetInputData(); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[5].GetInputData(); \
		const float SecondaryAxisWeight = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		const EControlRigVectorKind PoleVectorKind = *(EControlRigVectorKind*)RigVMMemoryHandles[8].GetInputData(); \
		const FName& PoleVectorSpace = *(FName*)RigVMMemoryHandles[9].GetInputData(); \
		const bool bEnableStretch = *(bool*)RigVMMemoryHandles[10].GetInputData(); \
		const float StretchStartRatio = *(float*)RigVMMemoryHandles[11].GetInputData(); \
		const float StretchMaximumRatio = *(float*)RigVMMemoryHandles[12].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[13].GetInputData(); \
		const float BoneALength = *(float*)RigVMMemoryHandles[14].GetInputData(); \
		const float BoneBLength = *(float*)RigVMMemoryHandles[15].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[16].GetInputData(); \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings = *(FRigUnit_TwoBoneIKSimple_DebugSettings*)RigVMMemoryHandles[17].GetInputData(); \
		FCachedRigElement& CachedBoneAIndex = *(FCachedRigElement*)RigVMMemoryHandles[18].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedBoneBIndex = *(FCachedRigElement*)RigVMMemoryHandles[19].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedEffectorBoneIndex = *(FCachedRigElement*)RigVMMemoryHandles[20].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedPoleVectorSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[21].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			BoneA, \
			BoneB, \
			EffectorBone, \
			Effector, \
			PrimaryAxis, \
			SecondaryAxis, \
			SecondaryAxisWeight, \
			PoleVector, \
			PoleVectorKind, \
			PoleVectorSpace, \
			bEnableStretch, \
			StretchStartRatio, \
			StretchMaximumRatio, \
			Weight, \
			BoneALength, \
			BoneBLength, \
			bPropagateToChildren, \
			DebugSettings, \
			CachedBoneAIndex, \
			CachedBoneBIndex, \
			CachedEffectorBoneIndex, \
			CachedPoleVectorSpaceIndex \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_TwoBoneIKSimple;
// ********** End ScriptStruct FRigUnit_TwoBoneIKSimple ********************************************

// ********** Begin ScriptStruct FRigUnit_TwoBoneIKSimplePerItem ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics;

#define FRigUnit_TwoBoneIKSimplePerItem_Execute() \
	void FRigUnit_TwoBoneIKSimplePerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ItemA, \
		const FRigElementKey& ItemB, \
		const FRigElementKey& EffectorItem, \
		const FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const FVector& PoleVector, \
		const EControlRigVectorKind PoleVectorKind, \
		const FRigElementKey& PoleVectorSpace, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float Weight, \
		const float ItemALength, \
		const float ItemBLength, \
		const bool bPropagateToChildren, \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItemAIndex, \
		FCachedRigElement& CachedItemBIndex, \
		FCachedRigElement& CachedEffectorItemIndex, \
		FCachedRigElement& CachedPoleVectorSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_209_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ItemA, \
		const FRigElementKey& ItemB, \
		const FRigElementKey& EffectorItem, \
		const FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const FVector& PoleVector, \
		const EControlRigVectorKind PoleVectorKind, \
		const FRigElementKey& PoleVectorSpace, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float Weight, \
		const float ItemALength, \
		const float ItemBLength, \
		const bool bPropagateToChildren, \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItemAIndex, \
		FCachedRigElement& CachedItemBIndex, \
		FCachedRigElement& CachedEffectorItemIndex, \
		FCachedRigElement& CachedPoleVectorSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& ItemA = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& ItemB = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigElementKey& EffectorItem = *(FRigElementKey*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& Effector = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[4].GetInputData(); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[5].GetInputData(); \
		const float SecondaryAxisWeight = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		const EControlRigVectorKind PoleVectorKind = *(EControlRigVectorKind*)RigVMMemoryHandles[8].GetInputData(); \
		const FRigElementKey& PoleVectorSpace = *(FRigElementKey*)RigVMMemoryHandles[9].GetInputData(); \
		const bool bEnableStretch = *(bool*)RigVMMemoryHandles[10].GetInputData(); \
		const float StretchStartRatio = *(float*)RigVMMemoryHandles[11].GetInputData(); \
		const float StretchMaximumRatio = *(float*)RigVMMemoryHandles[12].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[13].GetInputData(); \
		const float ItemALength = *(float*)RigVMMemoryHandles[14].GetInputData(); \
		const float ItemBLength = *(float*)RigVMMemoryHandles[15].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[16].GetInputData(); \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings = *(FRigUnit_TwoBoneIKSimple_DebugSettings*)RigVMMemoryHandles[17].GetInputData(); \
		FCachedRigElement& CachedItemAIndex = *(FCachedRigElement*)RigVMMemoryHandles[18].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedItemBIndex = *(FCachedRigElement*)RigVMMemoryHandles[19].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedEffectorItemIndex = *(FCachedRigElement*)RigVMMemoryHandles[20].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedPoleVectorSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[21].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ItemA, \
			ItemB, \
			EffectorItem, \
			Effector, \
			PrimaryAxis, \
			SecondaryAxis, \
			SecondaryAxisWeight, \
			PoleVector, \
			PoleVectorKind, \
			PoleVectorSpace, \
			bEnableStretch, \
			StretchStartRatio, \
			StretchMaximumRatio, \
			Weight, \
			ItemALength, \
			ItemBLength, \
			bPropagateToChildren, \
			DebugSettings, \
			CachedItemAIndex, \
			CachedItemBIndex, \
			CachedEffectorItemIndex, \
			CachedPoleVectorSpaceIndex \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_TwoBoneIKSimplePerItem;
// ********** End ScriptStruct FRigUnit_TwoBoneIKSimplePerItem *************************************

// ********** Begin ScriptStruct FRigUnit_TwoBoneIKSimpleVectors ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics;

#define FRigUnit_TwoBoneIKSimpleVectors_Execute() \
	void FRigUnit_TwoBoneIKSimpleVectors::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Root, \
		const FVector& PoleVector, \
		FVector& Effector, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float BoneALength, \
		const float BoneBLength, \
		FVector& Elbow \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_372_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Root, \
		const FVector& PoleVector, \
		FVector& Effector, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float BoneALength, \
		const float BoneBLength, \
		FVector& Elbow \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Root = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Effector = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		const bool bEnableStretch = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const float StretchStartRatio = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float StretchMaximumRatio = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const float BoneALength = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		const float BoneBLength = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		FVector& Elbow = *(FVector*)RigVMMemoryHandles[8].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Root, \
			PoleVector, \
			Effector, \
			bEnableStretch, \
			StretchStartRatio, \
			StretchMaximumRatio, \
			BoneALength, \
			BoneBLength, \
			Elbow \
		); \
	} \
	typedef FRigUnit_HighlevelBase Super;


struct FRigUnit_TwoBoneIKSimpleVectors;
// ********** End ScriptStruct FRigUnit_TwoBoneIKSimpleVectors *************************************

// ********** Begin ScriptStruct FRigUnit_TwoBoneIKSimpleTransforms ********************************
struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics;

#define FRigUnit_TwoBoneIKSimpleTransforms_Execute() \
	void FRigUnit_TwoBoneIKSimpleTransforms::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Root, \
		const FVector& PoleVector, \
		FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float BoneALength, \
		const float BoneBLength, \
		FTransform& Elbow \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_450_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Root, \
		const FVector& PoleVector, \
		FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float BoneALength, \
		const float BoneBLength, \
		FTransform& Elbow \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Root = *(FTransform*)RigVMMemoryHandles[0].GetOutputData(); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Effector = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[4].GetInputData(); \
		const float SecondaryAxisWeight = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bEnableStretch = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const float StretchStartRatio = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		const float StretchMaximumRatio = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		const float BoneALength = *(float*)RigVMMemoryHandles[9].GetInputData(); \
		const float BoneBLength = *(float*)RigVMMemoryHandles[10].GetInputData(); \
		FTransform& Elbow = *(FTransform*)RigVMMemoryHandles[11].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Root, \
			PoleVector, \
			Effector, \
			PrimaryAxis, \
			SecondaryAxis, \
			SecondaryAxisWeight, \
			bEnableStretch, \
			StretchStartRatio, \
			StretchMaximumRatio, \
			BoneALength, \
			BoneBLength, \
			Elbow \
		); \
	} \
	typedef FRigUnit_HighlevelBase Super;


struct FRigUnit_TwoBoneIKSimpleTransforms;
// ********** End ScriptStruct FRigUnit_TwoBoneIKSimpleTransforms **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
