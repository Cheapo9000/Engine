// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h"

#ifdef CONTROLRIG_RigUnit_TransformConstraint_generated_h
#error "RigUnit_TransformConstraint.generated.h already included, missing '#pragma once' in RigUnit_TransformConstraint.h"
#endif
#define CONTROLRIG_RigUnit_TransformConstraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConstraintTarget *************************************************
struct Z_Construct_UScriptStruct_FConstraintTarget_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintTarget_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FConstraintTarget;
// ********** End ScriptStruct FConstraintTarget ***************************************************

// ********** Begin ScriptStruct FRigUnit_TransformConstraint_WorkData *****************************
struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_TransformConstraint_WorkData;
// ********** End ScriptStruct FRigUnit_TransformConstraint_WorkData *******************************

// ********** Begin ScriptStruct FRigUnit_TransformConstraint **************************************
struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics;

#define FRigUnit_TransformConstraint_Execute() \
	void FRigUnit_TransformConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const ETransformSpaceMode BaseTransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseBone, \
		const TArrayView<const FConstraintTarget>& Targets, \
		const bool bUseInitialTransforms, \
		FRigUnit_TransformConstraint_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const ETransformSpaceMode BaseTransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseBone, \
		const TArrayView<const FConstraintTarget>& Targets, \
		const bool bUseInitialTransforms, \
		FRigUnit_TransformConstraint_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ETransformSpaceMode BaseTransformSpace = *(ETransformSpaceMode*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& BaseTransform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const FName& BaseBone = *(FName*)RigVMMemoryHandles[3].GetInputData(); \
		TArray<FConstraintTarget>& Targets = *(TArray<FConstraintTarget>*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bUseInitialTransforms = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FRigUnit_TransformConstraint_WorkData& WorkData = *(FRigUnit_TransformConstraint_WorkData*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bone, \
			BaseTransformSpace, \
			BaseTransform, \
			BaseBone, \
			Targets, \
			bUseInitialTransforms, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_TransformConstraint;
// ********** End ScriptStruct FRigUnit_TransformConstraint ****************************************

// ********** Begin ScriptStruct FRigUnit_TransformConstraintPerItem *******************************
struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics;

#define FRigUnit_TransformConstraintPerItem_Execute() \
	void FRigUnit_TransformConstraintPerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ETransformSpaceMode BaseTransformSpace, \
		const FTransform& BaseTransform, \
		const FRigElementKey& BaseItem, \
		const TArrayView<const FConstraintTarget>& Targets, \
		const bool bUseInitialTransforms, \
		FRigUnit_TransformConstraint_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ETransformSpaceMode BaseTransformSpace, \
		const FTransform& BaseTransform, \
		const FRigElementKey& BaseItem, \
		const TArrayView<const FConstraintTarget>& Targets, \
		const bool bUseInitialTransforms, \
		FRigUnit_TransformConstraint_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const ETransformSpaceMode BaseTransformSpace = *(ETransformSpaceMode*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& BaseTransform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigElementKey& BaseItem = *(FRigElementKey*)RigVMMemoryHandles[3].GetInputData(); \
		TArray<FConstraintTarget>& Targets = *(TArray<FConstraintTarget>*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bUseInitialTransforms = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FRigUnit_TransformConstraint_WorkData& WorkData = *(FRigUnit_TransformConstraint_WorkData*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			BaseTransformSpace, \
			BaseTransform, \
			BaseItem, \
			Targets, \
			bUseInitialTransforms, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_TransformConstraintPerItem;
// ********** End ScriptStruct FRigUnit_TransformConstraintPerItem *********************************

// ********** Begin ScriptStruct FConstraintParent *************************************************
struct Z_Construct_UScriptStruct_FConstraintParent_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintParent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FConstraintParent;
// ********** End ScriptStruct FConstraintParent ***************************************************

// ********** Begin ScriptStruct FRigUnit_ParentConstraint_AdvancedSettings ************************
struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_188_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ParentConstraint_AdvancedSettings;
// ********** End ScriptStruct FRigUnit_ParentConstraint_AdvancedSettings **************************

// ********** Begin ScriptStruct FRigUnit_ParentConstraint *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics;

#define FRigUnit_ParentConstraint_Execute() \
	void FRigUnit_ParentConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FTransformFilter& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_ParentConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_214_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FTransformFilter& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_ParentConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransformFilter& Filter = *(FTransformFilter*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigUnit_ParentConstraint_AdvancedSettings& AdvancedSettings = *(FRigUnit_ParentConstraint_AdvancedSettings*)RigVMMemoryHandles[4].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			AdvancedSettings, \
			Weight, \
			ChildCache, \
			ParentCaches \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_ParentConstraint;
// ********** End ScriptStruct FRigUnit_ParentConstraint *******************************************

// ********** Begin ScriptStruct FRigUnit_ParentConstraintMath_AdvancedSettings ********************
struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_257_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ParentConstraintMath_AdvancedSettings;
// ********** End ScriptStruct FRigUnit_ParentConstraintMath_AdvancedSettings **********************

// ********** Begin ScriptStruct FRigUnit_ParentConstraintMath *************************************
struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics;

#define FRigUnit_ParentConstraintMath_Execute() \
	void FRigUnit_ParentConstraintMath::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Input, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_ParentConstraintMath_AdvancedSettings& AdvancedSettings, \
		FTransform& Output, \
		TArray<FCachedRigElement>& ParentCaches \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_276_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Input, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_ParentConstraintMath_AdvancedSettings& AdvancedSettings, \
		FTransform& Output, \
		TArray<FCachedRigElement>& ParentCaches \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Input = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigUnit_ParentConstraintMath_AdvancedSettings& AdvancedSettings = *(FRigUnit_ParentConstraintMath_AdvancedSettings*)RigVMMemoryHandles[2].GetInputData(); \
		FTransform& Output = *(FTransform*)RigVMMemoryHandles[3].GetOutputData(); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			Parents, \
			AdvancedSettings, \
			Output, \
			ParentCaches \
		); \
	} \
	typedef FRigUnit_HighlevelBase Super;


struct FRigUnit_ParentConstraintMath;
// ********** End ScriptStruct FRigUnit_ParentConstraintMath ***************************************

// ********** Begin ScriptStruct FRigUnit_PositionConstraint ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics;

#define FRigUnit_PositionConstraint_Execute() \
	void FRigUnit_PositionConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_313_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight \
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
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			Weight \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_PositionConstraint;
// ********** End ScriptStruct FRigUnit_PositionConstraint *****************************************

// ********** Begin ScriptStruct FRigUnit_PositionConstraintLocalSpaceOffset ***********************
struct Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics;

#define FRigUnit_PositionConstraintLocalSpaceOffset_Execute() \
	void FRigUnit_PositionConstraintLocalSpaceOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_351_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
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
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			Weight, \
			ChildCache, \
			ParentCaches \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_PositionConstraintLocalSpaceOffset;
// ********** End ScriptStruct FRigUnit_PositionConstraintLocalSpaceOffset *************************

// ********** Begin ScriptStruct FRigUnit_RotationConstraint_AdvancedSettings **********************
struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_392_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_RotationConstraint_AdvancedSettings;
// ********** End ScriptStruct FRigUnit_RotationConstraint_AdvancedSettings ************************

// ********** Begin ScriptStruct FRigUnit_RotationConstraint ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics;

#define FRigUnit_RotationConstraint_Execute() \
	void FRigUnit_RotationConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_418_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight \
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
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings = *(FRigUnit_RotationConstraint_AdvancedSettings*)RigVMMemoryHandles[4].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			AdvancedSettings, \
			Weight \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_RotationConstraint;
// ********** End ScriptStruct FRigUnit_RotationConstraint *****************************************

// ********** Begin ScriptStruct FRigUnit_RotationConstraintLocalSpaceOffset ***********************
struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics;

#define FRigUnit_RotationConstraintLocalSpaceOffset_Execute() \
	void FRigUnit_RotationConstraintLocalSpaceOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_459_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
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
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings = *(FRigUnit_RotationConstraint_AdvancedSettings*)RigVMMemoryHandles[4].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			AdvancedSettings, \
			Weight, \
			ChildCache, \
			ParentCaches \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_RotationConstraintLocalSpaceOffset;
// ********** End ScriptStruct FRigUnit_RotationConstraintLocalSpaceOffset *************************

// ********** Begin ScriptStruct FRigUnit_ScaleConstraint ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics;

#define FRigUnit_ScaleConstraint_Execute() \
	void FRigUnit_ScaleConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_505_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight \
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
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			Weight \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_ScaleConstraint;
// ********** End ScriptStruct FRigUnit_ScaleConstraint ********************************************

// ********** Begin ScriptStruct FRigUnit_ScaleConstraintLocalSpaceOffset **************************
struct Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics;

#define FRigUnit_ScaleConstraintLocalSpaceOffset_Execute() \
	void FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_543_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
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
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			Weight, \
			ChildCache, \
			ParentCaches \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_ScaleConstraintLocalSpaceOffset;
// ********** End ScriptStruct FRigUnit_ScaleConstraintLocalSpaceOffset ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h

// ********** Begin Enum EConstraintInterpType *****************************************************
#define FOREACH_ENUM_ECONSTRAINTINTERPTYPE(op) \
	op(EConstraintInterpType::Average) \
	op(EConstraintInterpType::Shortest) \
	op(EConstraintInterpType::Max) 

enum class EConstraintInterpType : uint8;
template<> struct TIsUEnumClass<EConstraintInterpType> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EConstraintInterpType>();
// ********** End Enum EConstraintInterpType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
