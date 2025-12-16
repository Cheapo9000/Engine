// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetControlOffset.h"

#ifdef CONTROLRIG_RigUnit_SetControlOffset_generated_h
#error "RigUnit_SetControlOffset.generated.h already included, missing '#pragma once' in RigUnit_SetControlOffset.h"
#endif
#define CONTROLRIG_RigUnit_SetControlOffset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SetControlOffset *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics;

#define FRigUnit_SetControlOffset_Execute() \
	void FRigUnit_SetControlOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FTransform& Offset, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlOffset_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FTransform& Offset, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Offset = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetInputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Offset, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlOffset;
// ********** End ScriptStruct FRigUnit_SetControlOffset *******************************************

// ********** Begin ScriptStruct FRigUnit_SetControlTranslationOffset ******************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlTranslationOffset_Statics;

#define FRigUnit_SetControlTranslationOffset_Execute() \
	void FRigUnit_SetControlTranslationOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FVector& Offset, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlOffset_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlTranslationOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FVector& Offset, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Offset = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetInputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Offset, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlTranslationOffset;
// ********** End ScriptStruct FRigUnit_SetControlTranslationOffset ********************************

// ********** Begin ScriptStruct FRigUnit_SetControlRotationOffset *********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlRotationOffset_Statics;

#define FRigUnit_SetControlRotationOffset_Execute() \
	void FRigUnit_SetControlRotationOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FQuat& Offset, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlOffset_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlRotationOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FQuat& Offset, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Offset = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetInputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Offset, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlRotationOffset;
// ********** End ScriptStruct FRigUnit_SetControlRotationOffset ***********************************

// ********** Begin ScriptStruct FRigUnit_SetControlScaleOffset ************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlScaleOffset_Statics;

#define FRigUnit_SetControlScaleOffset_Execute() \
	void FRigUnit_SetControlScaleOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FVector& Scale, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlOffset_h_153_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlScaleOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FVector& Scale, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Scale = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetInputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Scale, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlScaleOffset;
// ********** End ScriptStruct FRigUnit_SetControlScaleOffset **************************************

// ********** Begin ScriptStruct FRigUnit_GetShapeTransform ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics;

#define FRigUnit_GetShapeTransform_Execute() \
	void FRigUnit_GetShapeTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlOffset_h_198_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Transform, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetShapeTransform;
// ********** End ScriptStruct FRigUnit_GetShapeTransform ******************************************

// ********** Begin ScriptStruct FRigUnit_SetShapeTransform ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics;

#define FRigUnit_SetShapeTransform_Execute() \
	void FRigUnit_SetShapeTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlOffset_h_233_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Transform, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetShapeTransform;
// ********** End ScriptStruct FRigUnit_SetShapeTransform ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlOffset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
