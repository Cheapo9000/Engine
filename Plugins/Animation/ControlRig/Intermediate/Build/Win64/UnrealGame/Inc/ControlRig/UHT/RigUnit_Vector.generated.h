// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Vector.h"

#ifdef CONTROLRIG_RigUnit_Vector_generated_h
#error "RigUnit_Vector.generated.h already included, missing '#pragma once' in RigUnit_Vector.h"
#endif
#define CONTROLRIG_RigUnit_Vector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_BinaryVectorOp *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Vector_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_BinaryVectorOp;
// ********** End ScriptStruct FRigUnit_BinaryVectorOp *********************************************

// ********** Begin ScriptStruct FRigUnit_Multiply_VectorVector ************************************
struct Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics;

#define FRigUnit_Multiply_VectorVector_Execute() \
	void FRigUnit_Multiply_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Vector_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


struct FRigUnit_Multiply_VectorVector;
// ********** End ScriptStruct FRigUnit_Multiply_VectorVector **************************************

// ********** Begin ScriptStruct FRigUnit_Add_VectorVector *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics;

#define FRigUnit_Add_VectorVector_Execute() \
	void FRigUnit_Add_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Vector_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


struct FRigUnit_Add_VectorVector;
// ********** End ScriptStruct FRigUnit_Add_VectorVector *******************************************

// ********** Begin ScriptStruct FRigUnit_Subtract_VectorVector ************************************
struct Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics;

#define FRigUnit_Subtract_VectorVector_Execute() \
	void FRigUnit_Subtract_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Vector_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


struct FRigUnit_Subtract_VectorVector;
// ********** End ScriptStruct FRigUnit_Subtract_VectorVector **************************************

// ********** Begin ScriptStruct FRigUnit_Divide_VectorVector **************************************
struct Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics;

#define FRigUnit_Divide_VectorVector_Execute() \
	void FRigUnit_Divide_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Vector_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


struct FRigUnit_Divide_VectorVector;
// ********** End ScriptStruct FRigUnit_Divide_VectorVector ****************************************

// ********** Begin ScriptStruct FRigUnit_Distance_VectorVector ************************************
struct Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics;

#define FRigUnit_Distance_VectorVector_Execute() \
	void FRigUnit_Distance_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Vector_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_Distance_VectorVector;
// ********** End ScriptStruct FRigUnit_Distance_VectorVector **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Vector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
