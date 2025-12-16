// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetControlTransform.h"

#ifdef CONTROLRIG_RigUnit_SetControlTransform_generated_h
#error "RigUnit_SetControlTransform.generated.h already included, missing '#pragma once' in RigUnit_SetControlTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetControlTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SetControlBool *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics;

#define FRigUnit_SetControlBool_Execute() \
	void FRigUnit_SetControlBool::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		bool& BoolValue, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
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
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlBool;
// ********** End ScriptStruct FRigUnit_SetControlBool *********************************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlBool_Entry ********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SetMultiControlBool_Entry;
// ********** End ScriptStruct FRigUnit_SetMultiControlBool_Entry **********************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlBool **************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics;

#define FRigUnit_SetMultiControlBool_Execute() \
	void FRigUnit_SetMultiControlBool::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlBool_Entry>& Entries, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlBool_Entry>& Entries, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlBool_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlBool_Entry>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[1].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetMultiControlBool;
// ********** End ScriptStruct FRigUnit_SetMultiControlBool ****************************************

// ********** Begin ScriptStruct FRigUnit_SetControlFloat ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics;

#define FRigUnit_SetControlFloat_Execute() \
	void FRigUnit_SetControlFloat::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		float& FloatValue, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		float& FloatValue, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& FloatValue = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			FloatValue, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlFloat;
// ********** End ScriptStruct FRigUnit_SetControlFloat ********************************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlFloat_Entry *******************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SetMultiControlFloat_Entry;
// ********** End ScriptStruct FRigUnit_SetMultiControlFloat_Entry *********************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlFloat *************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics;

#define FRigUnit_SetMultiControlFloat_Execute() \
	void FRigUnit_SetMultiControlFloat::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlFloat_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_157_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlFloat_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlFloat_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlFloat_Entry>*)RigVMMemoryHandles[0].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			Weight, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetMultiControlFloat;
// ********** End ScriptStruct FRigUnit_SetMultiControlFloat ***************************************

// ********** Begin ScriptStruct FRigUnit_SetControlInteger ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics;

#define FRigUnit_SetControlInteger_Execute() \
	void FRigUnit_SetControlInteger::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const int32 Weight, \
		int32& IntegerValue, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_193_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const int32 Weight, \
		int32& IntegerValue, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 Weight = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& IntegerValue = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			IntegerValue, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlInteger;
// ********** End ScriptStruct FRigUnit_SetControlInteger ******************************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlInteger_Entry *****************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_230_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SetMultiControlInteger_Entry;
// ********** End ScriptStruct FRigUnit_SetMultiControlInteger_Entry *******************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlInteger ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics;

#define FRigUnit_SetMultiControlInteger_Execute() \
	void FRigUnit_SetMultiControlInteger::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlInteger_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_254_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlInteger_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlInteger_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlInteger_Entry>*)RigVMMemoryHandles[0].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			Weight, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetMultiControlInteger;
// ********** End ScriptStruct FRigUnit_SetMultiControlInteger *************************************

// ********** Begin ScriptStruct FRigUnit_SetControlVector2D ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics;

#define FRigUnit_SetControlVector2D_Execute() \
	void FRigUnit_SetControlVector2D::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector2D& Vector, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_288_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector2D& Vector, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FVector2D& Vector = *(FVector2D*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			Vector, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlVector2D;
// ********** End ScriptStruct FRigUnit_SetControlVector2D *****************************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlVector2D_Entry ****************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_325_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SetMultiControlVector2D_Entry;
// ********** End ScriptStruct FRigUnit_SetMultiControlVector2D_Entry ******************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlVector2D **********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics;

#define FRigUnit_SetMultiControlVector2D_Execute() \
	void FRigUnit_SetMultiControlVector2D::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlVector2D_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_350_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlVector2D_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlVector2D_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlVector2D_Entry>*)RigVMMemoryHandles[0].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			Weight, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetMultiControlVector2D;
// ********** End ScriptStruct FRigUnit_SetMultiControlVector2D ************************************

// ********** Begin ScriptStruct FRigUnit_SetControlVector *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics;

#define FRigUnit_SetControlVector_Execute() \
	void FRigUnit_SetControlVector::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector& Vector, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_384_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector& Vector, \
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
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Vector = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			Vector, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlVector;
// ********** End ScriptStruct FRigUnit_SetControlVector *******************************************

// ********** Begin ScriptStruct FRigUnit_SetControlRotator ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics;

#define FRigUnit_SetControlRotator_Execute() \
	void FRigUnit_SetControlRotator::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FRotator& Rotator, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_432_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FRotator& Rotator, \
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
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FRotator& Rotator = *(FRotator*)RigVMMemoryHandles[2].GetOutputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			Rotator, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlRotator;
// ********** End ScriptStruct FRigUnit_SetControlRotator ******************************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlRotator_Entry *****************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_477_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SetMultiControlRotator_Entry;
// ********** End ScriptStruct FRigUnit_SetMultiControlRotator_Entry *******************************

// ********** Begin ScriptStruct FRigUnit_SetMultiControlRotator ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics;

#define FRigUnit_SetMultiControlRotator_Execute() \
	void FRigUnit_SetMultiControlRotator::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlRotator_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_511_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlRotator_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlRotator_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlRotator_Entry>*)RigVMMemoryHandles[0].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			Weight, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetMultiControlRotator;
// ********** End ScriptStruct FRigUnit_SetMultiControlRotator *************************************

// ********** Begin ScriptStruct FRigUnit_SetControlTransform **************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics;

#define FRigUnit_SetControlTransform_Execute() \
	void FRigUnit_SetControlTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_545_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FTransform& Transform, \
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
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			Transform, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetControlTransform;
// ********** End ScriptStruct FRigUnit_SetControlTransform ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
