// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetControlTransform.h"

#ifdef CONTROLRIG_RigUnit_GetControlTransform_generated_h
#error "RigUnit_GetControlTransform.generated.h already included, missing '#pragma once' in RigUnit_GetControlTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetControlTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetControlBool *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics;

#define FRigUnit_GetControlBool_Execute() \
	void FRigUnit_GetControlBool::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		bool& BoolValue, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		bool& BoolValue, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		bool& BoolValue = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			BoolValue, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlBool;
// ********** End ScriptStruct FRigUnit_GetControlBool *********************************************

// ********** Begin ScriptStruct FRigUnit_GetControlFloat ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics;

#define FRigUnit_GetControlFloat_Execute() \
	void FRigUnit_GetControlFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		float& FloatValue, \
		float& Minimum, \
		float& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		float& FloatValue, \
		float& Minimum, \
		float& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		float& FloatValue = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		float& Minimum = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		float& Maximum = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			FloatValue, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlFloat;
// ********** End ScriptStruct FRigUnit_GetControlFloat ********************************************

// ********** Begin ScriptStruct FRigUnit_GetControlInteger ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics;

#define FRigUnit_GetControlInteger_Execute() \
	void FRigUnit_GetControlInteger::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		int32& IntegerValue, \
		int32& Minimum, \
		int32& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		int32& IntegerValue, \
		int32& Minimum, \
		int32& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		int32& IntegerValue = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		int32& Minimum = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		int32& Maximum = *(int32*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			IntegerValue, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlInteger;
// ********** End ScriptStruct FRigUnit_GetControlInteger ******************************************

// ********** Begin ScriptStruct FRigUnit_GetControlVector2D ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics;

#define FRigUnit_GetControlVector2D_Execute() \
	void FRigUnit_GetControlVector2D::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FVector2D& Vector, \
		FVector2D& Minimum, \
		FVector2D& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FVector2D& Vector, \
		FVector2D& Minimum, \
		FVector2D& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		FVector2D& Vector = *(FVector2D*)RigVMMemoryHandles[1].GetOutputData(); \
		FVector2D& Minimum = *(FVector2D*)RigVMMemoryHandles[2].GetOutputData(); \
		FVector2D& Maximum = *(FVector2D*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Vector, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlVector2D;
// ********** End ScriptStruct FRigUnit_GetControlVector2D *****************************************

// ********** Begin ScriptStruct FRigUnit_GetControlVector *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics;

#define FRigUnit_GetControlVector_Execute() \
	void FRigUnit_GetControlVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FVector& Vector, \
		FVector& Minimum, \
		FVector& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_170_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FVector& Vector, \
		FVector& Minimum, \
		FVector& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Vector = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		FVector& Minimum = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		FVector& Maximum = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Space, \
			Vector, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlVector;
// ********** End ScriptStruct FRigUnit_GetControlVector *******************************************

// ********** Begin ScriptStruct FRigUnit_GetControlRotator ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics;

#define FRigUnit_GetControlRotator_Execute() \
	void FRigUnit_GetControlRotator::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FRotator& Rotator, \
		FRotator& Minimum, \
		FRotator& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_219_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FRotator& Rotator, \
		FRotator& Minimum, \
		FRotator& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		FRotator& Rotator = *(FRotator*)RigVMMemoryHandles[2].GetOutputData(); \
		FRotator& Minimum = *(FRotator*)RigVMMemoryHandles[3].GetOutputData(); \
		FRotator& Maximum = *(FRotator*)RigVMMemoryHandles[4].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Space, \
			Rotator, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlRotator;
// ********** End ScriptStruct FRigUnit_GetControlRotator ******************************************

// ********** Begin ScriptStruct FRigUnit_GetControlTransform **************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics;

#define FRigUnit_GetControlTransform_Execute() \
	void FRigUnit_GetControlTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform, \
		FTransform& Minimum, \
		FTransform& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_269_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform, \
		FTransform& Minimum, \
		FTransform& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		FTransform& Minimum = *(FTransform*)RigVMMemoryHandles[3].GetOutputData(); \
		FTransform& Maximum = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Space, \
			Transform, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetControlTransform;
// ********** End ScriptStruct FRigUnit_GetControlTransform ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
