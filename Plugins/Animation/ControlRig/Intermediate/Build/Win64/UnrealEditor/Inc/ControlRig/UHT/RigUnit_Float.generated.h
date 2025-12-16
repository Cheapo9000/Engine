// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Float.h"

#ifdef CONTROLRIG_RigUnit_Float_generated_h
#error "RigUnit_Float.generated.h already included, missing '#pragma once' in RigUnit_Float.h"
#endif
#define CONTROLRIG_RigUnit_Float_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_BinaryFloatOp ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Float_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_BinaryFloatOp;
// ********** End ScriptStruct FRigUnit_BinaryFloatOp **********************************************

// ********** Begin ScriptStruct FRigUnit_Multiply_FloatFloat **************************************
struct Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics;

#define FRigUnit_Multiply_FloatFloat_Execute() \
	void FRigUnit_Multiply_FloatFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Float_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Argument0 = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Argument1 = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryFloatOp Super;


struct FRigUnit_Multiply_FloatFloat;
// ********** End ScriptStruct FRigUnit_Multiply_FloatFloat ****************************************

// ********** Begin ScriptStruct FRigUnit_Add_FloatFloat *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics;

#define FRigUnit_Add_FloatFloat_Execute() \
	void FRigUnit_Add_FloatFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Float_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Argument0 = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Argument1 = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryFloatOp Super;


struct FRigUnit_Add_FloatFloat;
// ********** End ScriptStruct FRigUnit_Add_FloatFloat *********************************************

// ********** Begin ScriptStruct FRigUnit_Subtract_FloatFloat **************************************
struct Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics;

#define FRigUnit_Subtract_FloatFloat_Execute() \
	void FRigUnit_Subtract_FloatFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Float_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Argument0 = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Argument1 = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryFloatOp Super;


struct FRigUnit_Subtract_FloatFloat;
// ********** End ScriptStruct FRigUnit_Subtract_FloatFloat ****************************************

// ********** Begin ScriptStruct FRigUnit_Divide_FloatFloat ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics;

#define FRigUnit_Divide_FloatFloat_Execute() \
	void FRigUnit_Divide_FloatFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Float_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Argument0 = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Argument1 = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryFloatOp Super;


struct FRigUnit_Divide_FloatFloat;
// ********** End ScriptStruct FRigUnit_Divide_FloatFloat ******************************************

// ********** Begin ScriptStruct FRigUnit_Clamp_Float **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics;

#define FRigUnit_Clamp_Float_Execute() \
	void FRigUnit_Clamp_Float::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const float Min, \
		const float Max, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Float_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const float Min, \
		const float Max, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Min = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Max = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Min, \
			Max, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_Clamp_Float;
// ********** End ScriptStruct FRigUnit_Clamp_Float ************************************************

// ********** Begin ScriptStruct FRigUnit_MapRange_Float *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics;

#define FRigUnit_MapRange_Float_Execute() \
	void FRigUnit_MapRange_Float::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const float MinIn, \
		const float MaxIn, \
		const float MinOut, \
		const float MaxOut, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Float_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const float MinIn, \
		const float MaxIn, \
		const float MinOut, \
		const float MaxOut, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float MinIn = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float MaxIn = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float MinOut = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float MaxOut = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			MinIn, \
			MaxIn, \
			MinOut, \
			MaxOut, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_MapRange_Float;
// ********** End ScriptStruct FRigUnit_MapRange_Float *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Float_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
