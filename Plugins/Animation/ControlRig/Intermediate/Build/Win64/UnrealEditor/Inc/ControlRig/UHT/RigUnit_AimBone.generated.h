// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_AimBone.h"

#ifdef CONTROLRIG_RigUnit_AimBone_generated_h
#error "RigUnit_AimBone.generated.h already included, missing '#pragma once' in RigUnit_AimBone.h"
#endif
#define CONTROLRIG_RigUnit_AimBone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AimBone_Target *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_AimBone_Target;
// ********** End ScriptStruct FRigUnit_AimBone_Target *********************************************

// ********** Begin ScriptStruct FRigUnit_AimItem_Target *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_AimItem_Target;
// ********** End ScriptStruct FRigUnit_AimItem_Target *********************************************

// ********** Begin ScriptStruct FRigUnit_AimBone_DebugSettings ************************************
struct Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_AimBone_DebugSettings;
// ********** End ScriptStruct FRigUnit_AimBone_DebugSettings **************************************

// ********** Begin ScriptStruct FRigUnit_AimBoneMath **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics;

#define FRigUnit_AimBoneMath_Execute() \
	void FRigUnit_AimBoneMath::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& InputTransform, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		FTransform& Result, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& InputTransform, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		FTransform& Result, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& InputTransform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_AimItem_Target& Primary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigUnit_AimItem_Target& Secondary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[2].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		const FRigUnit_AimBone_DebugSettings& DebugSettings = *(FRigUnit_AimBone_DebugSettings*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& PrimaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& SecondaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InputTransform, \
			Primary, \
			Secondary, \
			Weight, \
			Result, \
			DebugSettings, \
			PrimaryCachedSpace, \
			SecondaryCachedSpace, \
			bIsInitialized \
		); \
	} \
	typedef FRigUnit_HighlevelBase Super;


struct FRigUnit_AimBoneMath;
// ********** End ScriptStruct FRigUnit_AimBoneMath ************************************************

// ********** Begin ScriptStruct FRigUnit_AimBone **************************************************
struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics;

#define FRigUnit_AimBone_Execute() \
	void FRigUnit_AimBone::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FRigUnit_AimBone_Target& Primary, \
		const FRigUnit_AimBone_Target& Secondary, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneIndex, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_211_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FRigUnit_AimBone_Target& Primary, \
		const FRigUnit_AimBone_Target& Secondary, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneIndex, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_AimBone_Target& Primary = *(FRigUnit_AimBone_Target*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigUnit_AimBone_Target& Secondary = *(FRigUnit_AimBone_Target*)RigVMMemoryHandles[2].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigUnit_AimBone_DebugSettings& DebugSettings = *(FRigUnit_AimBone_DebugSettings*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& CachedBoneIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& PrimaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& SecondaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[9].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bone, \
			Primary, \
			Secondary, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			CachedBoneIndex, \
			PrimaryCachedSpace, \
			SecondaryCachedSpace, \
			bIsInitialized \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_AimBone;
// ********** End ScriptStruct FRigUnit_AimBone ****************************************************

// ********** Begin ScriptStruct FRigUnit_AimItem **************************************************
struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics;

#define FRigUnit_AimItem_Execute() \
	void FRigUnit_AimItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItem, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_291_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItem, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_AimItem_Target& Primary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigUnit_AimItem_Target& Secondary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[2].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigUnit_AimBone_DebugSettings& DebugSettings = *(FRigUnit_AimBone_DebugSettings*)RigVMMemoryHandles[4].GetInputData(); \
		FCachedRigElement& CachedItem = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& PrimaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& SecondaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Primary, \
			Secondary, \
			Weight, \
			DebugSettings, \
			CachedItem, \
			PrimaryCachedSpace, \
			SecondaryCachedSpace, \
			bIsInitialized \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_AimItem;
// ********** End ScriptStruct FRigUnit_AimItem ****************************************************

// ********** Begin ScriptStruct FRigUnit_AimConstraint_WorldUp ************************************
struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_363_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_AimConstraint_WorldUp;
// ********** End ScriptStruct FRigUnit_AimConstraint_WorldUp **************************************

// ********** Begin ScriptStruct FRigUnit_AimConstraint_AdvancedSettings ***************************
struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_395_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_AimConstraint_AdvancedSettings;
// ********** End ScriptStruct FRigUnit_AimConstraint_AdvancedSettings *****************************

// ********** Begin ScriptStruct FRigUnit_AimConstraintLocalSpaceOffset ****************************
struct Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics;

#define FRigUnit_AimConstraintLocalSpaceOffset_Execute() \
	void FRigUnit_AimConstraintLocalSpaceOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const FVector& AimAxis, \
		const FVector& UpAxis, \
		const FRigUnit_AimConstraint_WorldUp& WorldUp, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_AimConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& WorldUpSpaceCache, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_421_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const FVector& AimAxis, \
		const FVector& UpAxis, \
		const FRigUnit_AimConstraint_WorldUp& WorldUp, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_AimConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& WorldUpSpaceCache, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const FFilterOptionPerAxis& Filter = *(FFilterOptionPerAxis*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& AimAxis = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const FVector& UpAxis = *(FVector*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigUnit_AimConstraint_WorldUp& WorldUp = *(FRigUnit_AimConstraint_WorldUp*)RigVMMemoryHandles[5].GetInputData(); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigUnit_AimConstraint_AdvancedSettings& AdvancedSettings = *(FRigUnit_AimConstraint_AdvancedSettings*)RigVMMemoryHandles[7].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		FCachedRigElement& WorldUpSpaceCache = *(FCachedRigElement*)RigVMMemoryHandles[9].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[10].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[11].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[12].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			AimAxis, \
			UpAxis, \
			WorldUp, \
			Parents, \
			AdvancedSettings, \
			Weight, \
			WorldUpSpaceCache, \
			ChildCache, \
			ParentCaches, \
			bIsInitialized \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_AimConstraintLocalSpaceOffset;
// ********** End ScriptStruct FRigUnit_AimConstraintLocalSpaceOffset ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
