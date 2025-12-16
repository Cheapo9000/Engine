// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathVector.h"

#ifdef RIGVM_RigVMFunction_MathVector_generated_h
#error "RigVMFunction_MathVector.generated.h already included, missing '#pragma once' in RigVMFunction_MathVector.h"
#endif
#define RIGVM_RigVMFunction_MathVector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathVectorBase *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathVectorBase;
// ********** End ScriptStruct FRigVMFunction_MathVectorBase ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorUnaryOp **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorUnaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorUnaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorUnaryOp;
// ********** End ScriptStruct FRigVMFunction_MathVectorUnaryOp ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorBinaryOp *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBinaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBinaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorBinaryOp;
// ********** End ScriptStruct FRigVMFunction_MathVectorBinaryOp ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorBinaryAggregateOp ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBinaryAggregateOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBinaryAggregateOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorBinaryAggregateOp;
// ********** End ScriptStruct FRigVMFunction_MathVectorBinaryAggregateOp **************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMake *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMake_Statics;

#define FRigVMFunction_MathVectorMake_Execute() \
	void FRigVMFunction_MathVectorMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float X, \
		const float Y, \
		const float Z, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMake_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float X, \
		const float Y, \
		const float Z, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float X = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Y = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Z = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			X, \
			Y, \
			Z, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorMake;
// ********** End ScriptStruct FRigVMFunction_MathVectorMake ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorFromFloat ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorFromFloat_Statics;

#define FRigVMFunction_MathVectorFromFloat_Execute() \
	void FRigVMFunction_MathVectorFromFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_110_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorFromFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorFromFloat;
// ********** End ScriptStruct FRigVMFunction_MathVectorFromFloat **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorFromDouble *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorFromDouble_Statics;

#define FRigVMFunction_MathVectorFromDouble_Execute() \
	void FRigVMFunction_MathVectorFromDouble::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorFromDouble_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorFromDouble;
// ********** End ScriptStruct FRigVMFunction_MathVectorFromDouble *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorAdd **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAdd_Statics;

#define FRigVMFunction_MathVectorAdd_Execute() \
	void FRigVMFunction_MathVectorAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAdd_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryAggregateOp Super;


struct FRigVMFunction_MathVectorAdd;
// ********** End ScriptStruct FRigVMFunction_MathVectorAdd ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorSub **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSub_Statics;

#define FRigVMFunction_MathVectorSub_Execute() \
	void FRigVMFunction_MathVectorSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_168_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSub_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryOp Super;


struct FRigVMFunction_MathVectorSub;
// ********** End ScriptStruct FRigVMFunction_MathVectorSub ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMul **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMul_Statics;

#define FRigVMFunction_MathVectorMul_Execute() \
	void FRigVMFunction_MathVectorMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_180_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryAggregateOp Super;


struct FRigVMFunction_MathVectorMul;
// ********** End ScriptStruct FRigVMFunction_MathVectorMul ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorScale ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorScale_Statics;

#define FRigVMFunction_MathVectorScale_Execute() \
	void FRigVMFunction_MathVectorScale::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Factor, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_197_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorScale_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Factor, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Factor = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Factor, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorScale;
// ********** End ScriptStruct FRigVMFunction_MathVectorScale **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorDiv **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDiv_Statics;

#define FRigVMFunction_MathVectorDiv_Execute() \
	void FRigVMFunction_MathVectorDiv::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_224_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDiv_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryOp Super;


struct FRigVMFunction_MathVectorDiv;
// ********** End ScriptStruct FRigVMFunction_MathVectorDiv ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMod **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMod_Statics;

#define FRigVMFunction_MathVectorMod_Execute() \
	void FRigVMFunction_MathVectorMod::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_241_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMod_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryOp Super;


struct FRigVMFunction_MathVectorMod;
// ********** End ScriptStruct FRigVMFunction_MathVectorMod ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMin **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMin_Statics;

#define FRigVMFunction_MathVectorMin_Execute() \
	void FRigVMFunction_MathVectorMin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_259_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMin_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryAggregateOp Super;


struct FRigVMFunction_MathVectorMin;
// ********** End ScriptStruct FRigVMFunction_MathVectorMin ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMax **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMax_Statics;

#define FRigVMFunction_MathVectorMax_Execute() \
	void FRigVMFunction_MathVectorMax::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_271_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMax_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryAggregateOp Super;


struct FRigVMFunction_MathVectorMax;
// ********** End ScriptStruct FRigVMFunction_MathVectorMax ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorNegate ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorNegate_Statics;

#define FRigVMFunction_MathVectorNegate_Execute() \
	void FRigVMFunction_MathVectorNegate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_283_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorNegate_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


struct FRigVMFunction_MathVectorNegate;
// ********** End ScriptStruct FRigVMFunction_MathVectorNegate *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorAbs **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAbs_Statics;

#define FRigVMFunction_MathVectorAbs_Execute() \
	void FRigVMFunction_MathVectorAbs::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_295_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAbs_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


struct FRigVMFunction_MathVectorAbs;
// ********** End ScriptStruct FRigVMFunction_MathVectorAbs ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorFloor ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorFloor_Statics;

#define FRigVMFunction_MathVectorFloor_Execute() \
	void FRigVMFunction_MathVectorFloor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_307_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorFloor_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


struct FRigVMFunction_MathVectorFloor;
// ********** End ScriptStruct FRigVMFunction_MathVectorFloor **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorCeil *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorCeil_Statics;

#define FRigVMFunction_MathVectorCeil_Execute() \
	void FRigVMFunction_MathVectorCeil::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_319_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorCeil_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


struct FRigVMFunction_MathVectorCeil;
// ********** End ScriptStruct FRigVMFunction_MathVectorCeil ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorRound ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRound_Statics;

#define FRigVMFunction_MathVectorRound_Execute() \
	void FRigVMFunction_MathVectorRound::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_331_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRound_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


struct FRigVMFunction_MathVectorRound;
// ********** End ScriptStruct FRigVMFunction_MathVectorRound **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorSign *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSign_Statics;

#define FRigVMFunction_MathVectorSign_Execute() \
	void FRigVMFunction_MathVectorSign::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_343_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSign_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


struct FRigVMFunction_MathVectorSign;
// ********** End ScriptStruct FRigVMFunction_MathVectorSign ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorClamp ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClamp_Statics;

#define FRigVMFunction_MathVectorClamp_Execute() \
	void FRigVMFunction_MathVectorClamp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Minimum, \
		const FVector& Maximum, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_355_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClamp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Minimum, \
		const FVector& Maximum, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Minimum = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& Maximum = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorClamp;
// ********** End ScriptStruct FRigVMFunction_MathVectorClamp **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorLerp *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLerp_Statics;

#define FRigVMFunction_MathVectorLerp_Execute() \
	void FRigVMFunction_MathVectorLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const float T, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_385_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const float T, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float T = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorLerp;
// ********** End ScriptStruct FRigVMFunction_MathVectorLerp ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorRemap ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRemap_Statics;

#define FRigVMFunction_MathVectorRemap_Execute() \
	void FRigVMFunction_MathVectorRemap::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& SourceMinimum, \
		const FVector& SourceMaximum, \
		const FVector& TargetMinimum, \
		const FVector& TargetMaximum, \
		const bool bClamp, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_416_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRemap_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& SourceMinimum, \
		const FVector& SourceMaximum, \
		const FVector& TargetMinimum, \
		const FVector& TargetMaximum, \
		const bool bClamp, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& SourceMinimum = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& SourceMaximum = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& TargetMinimum = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const FVector& TargetMaximum = *(FVector*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bClamp = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			SourceMinimum, \
			SourceMaximum, \
			TargetMinimum, \
			TargetMaximum, \
			bClamp, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorRemap;
// ********** End ScriptStruct FRigVMFunction_MathVectorRemap **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorEquals ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorEquals_Statics;

#define FRigVMFunction_MathVectorEquals_Execute() \
	void FRigVMFunction_MathVectorEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_457_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorEquals;
// ********** End ScriptStruct FRigVMFunction_MathVectorEquals *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorNotEquals ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorNotEquals_Statics;

#define FRigVMFunction_MathVectorNotEquals_Execute() \
	void FRigVMFunction_MathVectorNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_487_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorNotEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorNotEquals;
// ********** End ScriptStruct FRigVMFunction_MathVectorNotEquals **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorIsNearlyZero *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorIsNearlyZero_Statics;

#define FRigVMFunction_MathVectorIsNearlyZero_Execute() \
	void FRigVMFunction_MathVectorIsNearlyZero::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Tolerance, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_517_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorIsNearlyZero_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Tolerance = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Tolerance, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorIsNearlyZero;
// ********** End ScriptStruct FRigVMFunction_MathVectorIsNearlyZero *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorIsNearlyEqual ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorIsNearlyEqual_Statics;

#define FRigVMFunction_MathVectorIsNearlyEqual_Execute() \
	void FRigVMFunction_MathVectorIsNearlyEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const float Tolerance, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_545_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorIsNearlyEqual_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const float Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float Tolerance = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Tolerance, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorIsNearlyEqual;
// ********** End ScriptStruct FRigVMFunction_MathVectorIsNearlyEqual ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorSelectBool *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSelectBool_Statics;

#define FRigVMFunction_MathVectorSelectBool_Execute() \
	void FRigVMFunction_MathVectorSelectBool::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FVector& IfTrue, \
		const FVector& IfFalse, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_576_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSelectBool_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FVector& IfTrue, \
		const FVector& IfFalse, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& IfTrue = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& IfFalse = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorSelectBool;
// ********** End ScriptStruct FRigVMFunction_MathVectorSelectBool *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorDeg **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDeg_Statics;

#define FRigVMFunction_MathVectorDeg_Execute() \
	void FRigVMFunction_MathVectorDeg::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_609_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDeg_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


struct FRigVMFunction_MathVectorDeg;
// ********** End ScriptStruct FRigVMFunction_MathVectorDeg ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorRad **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRad_Statics;

#define FRigVMFunction_MathVectorRad_Execute() \
	void FRigVMFunction_MathVectorRad::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_621_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRad_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


struct FRigVMFunction_MathVectorRad;
// ********** End ScriptStruct FRigVMFunction_MathVectorRad ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorLengthSquared ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLengthSquared_Statics;

#define FRigVMFunction_MathVectorLengthSquared_Execute() \
	void FRigVMFunction_MathVectorLengthSquared::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_633_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLengthSquared_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorLengthSquared;
// ********** End ScriptStruct FRigVMFunction_MathVectorLengthSquared ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorLength ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLength_Statics;

#define FRigVMFunction_MathVectorLength_Execute() \
	void FRigVMFunction_MathVectorLength::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_657_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLength_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorLength;
// ********** End ScriptStruct FRigVMFunction_MathVectorLength *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorDistance *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDistance_Statics;

#define FRigVMFunction_MathVectorDistance_Execute() \
	void FRigVMFunction_MathVectorDistance::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_681_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDistance_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorDistance;
// ********** End ScriptStruct FRigVMFunction_MathVectorDistance ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorCross ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorCross_Statics;

#define FRigVMFunction_MathVectorCross_Execute() \
	void FRigVMFunction_MathVectorCross::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_708_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorCross_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryOp Super;


struct FRigVMFunction_MathVectorCross;
// ********** End ScriptStruct FRigVMFunction_MathVectorCross **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorDot **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDot_Statics;

#define FRigVMFunction_MathVectorDot_Execute() \
	void FRigVMFunction_MathVectorDot::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_719_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDot_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorDot;
// ********** End ScriptStruct FRigVMFunction_MathVectorDot ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorUnit *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorUnit_Statics;

#define FRigVMFunction_MathVectorUnit_Execute() \
	void FRigVMFunction_MathVectorUnit::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_746_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorUnit_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


struct FRigVMFunction_MathVectorUnit;
// ********** End ScriptStruct FRigVMFunction_MathVectorUnit ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorSetLength ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSetLength_Statics;

#define FRigVMFunction_MathVectorSetLength_Execute() \
	void FRigVMFunction_MathVectorSetLength::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Length, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_758_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSetLength_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Length, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Length = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Length, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorSetLength;
// ********** End ScriptStruct FRigVMFunction_MathVectorSetLength **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorClampLength ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClampLength_Statics;

#define FRigVMFunction_MathVectorClampLength_Execute() \
	void FRigVMFunction_MathVectorClampLength::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float MinimumLength, \
		const float MaximumLength, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_785_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClampLength_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float MinimumLength, \
		const float MaximumLength, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float MinimumLength = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float MaximumLength = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			MinimumLength, \
			MaximumLength, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorClampLength;
// ********** End ScriptStruct FRigVMFunction_MathVectorClampLength ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMirror ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMirror_Statics;

#define FRigVMFunction_MathVectorMirror_Execute() \
	void FRigVMFunction_MathVectorMirror::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Normal, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_817_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMirror_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Normal, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Normal = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Normal, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorMirror;
// ********** End ScriptStruct FRigVMFunction_MathVectorMirror *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorAngle ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAngle_Statics;

#define FRigVMFunction_MathVectorAngle_Execute() \
	void FRigVMFunction_MathVectorAngle::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_844_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAngle_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorAngle;
// ********** End ScriptStruct FRigVMFunction_MathVectorAngle **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorParallel *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorParallel_Statics;

#define FRigVMFunction_MathVectorParallel_Execute() \
	void FRigVMFunction_MathVectorParallel::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_871_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorParallel_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorParallel;
// ********** End ScriptStruct FRigVMFunction_MathVectorParallel ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorOrthogonal *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorOrthogonal_Statics;

#define FRigVMFunction_MathVectorOrthogonal_Execute() \
	void FRigVMFunction_MathVectorOrthogonal::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_898_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorOrthogonal_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorOrthogonal;
// ********** End ScriptStruct FRigVMFunction_MathVectorOrthogonal *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorBezierFourPoint **************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBezierFourPoint_Statics;

#define FRigVMFunction_MathVectorBezierFourPoint_Execute() \
	void FRigVMFunction_MathVectorBezierFourPoint::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float T, \
		FVector& Result, \
		FVector& Tangent \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_926_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBezierFourPoint_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float T, \
		FVector& Result, \
		FVector& Tangent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[0].GetInputData(); \
		const float T = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		FVector& Tangent = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Bezier, \
			T, \
			Result, \
			Tangent \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorBezierFourPoint;
// ********** End ScriptStruct FRigVMFunction_MathVectorBezierFourPoint ****************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMakeBezierFourPoint **********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeBezierFourPoint_Statics;

#define FRigVMFunction_MathVectorMakeBezierFourPoint_Execute() \
	void FRigVMFunction_MathVectorMakeBezierFourPoint::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FRigVMFourPointBezier& Bezier \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_960_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeBezierFourPoint_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FRigVMFourPointBezier& Bezier \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Bezier \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorMakeBezierFourPoint;
// ********** End ScriptStruct FRigVMFunction_MathVectorMakeBezierFourPoint ************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorClampSpatially ***************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClampSpatially_Statics;

#define FRigVMFunction_MathVectorClampSpatially_Execute() \
	void FRigVMFunction_MathVectorClampSpatially::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_985_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClampSpatially_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const TEnumAsByte<EAxis::Type>& Axis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetInputData(); \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type = *(TEnumAsByte<ERigVMClampSpatialMode::Type>*)RigVMMemoryHandles[2].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FTransform& Space = *(FTransform*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FLinearColor& DebugColor = *(FLinearColor*)RigVMMemoryHandles[7].GetInputData(); \
		const float DebugThickness = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[9].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Axis, \
			Type, \
			Minimum, \
			Maximum, \
			Space, \
			bDrawDebug, \
			DebugColor, \
			DebugThickness, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorClampSpatially;
// ********** End ScriptStruct FRigVMFunction_MathVectorClampSpatially *****************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntersectPlane *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntersectPlane_Statics;

#define FRigVMFunction_MathIntersectPlane_Execute() \
	void FRigVMFunction_MathIntersectPlane::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& Direction, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& Result, \
		float& Distance \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1049_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntersectPlane_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& Direction, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& Result, \
		float& Distance \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Direction = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& PlanePoint = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& PlaneNormal = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		float& Distance = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Start, \
			Direction, \
			PlanePoint, \
			PlaneNormal, \
			Result, \
			Distance \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathIntersectPlane;
// ********** End ScriptStruct FRigVMFunction_MathIntersectPlane ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDistanceToPlane ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDistanceToPlane_Statics;

#define FRigVMFunction_MathDistanceToPlane_Execute() \
	void FRigVMFunction_MathDistanceToPlane::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Point, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& ClosestPointOnPlane, \
		float& SignedDistance \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1086_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDistanceToPlane_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Point, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& ClosestPointOnPlane, \
		float& SignedDistance \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Point = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& PlanePoint = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& PlaneNormal = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& ClosestPointOnPlane = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		float& SignedDistance = *(float*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Point, \
			PlanePoint, \
			PlaneNormal, \
			ClosestPointOnPlane, \
			SignedDistance \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathDistanceToPlane;
// ********** End ScriptStruct FRigVMFunction_MathDistanceToPlane **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMakeRelative *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeRelative_Statics;

#define FRigVMFunction_MathVectorMakeRelative_Execute() \
	void FRigVMFunction_MathVectorMakeRelative::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Global, \
		const FVector& Parent, \
		FVector& Local \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1120_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeRelative_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Global, \
		const FVector& Parent, \
		FVector& Local \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Global = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Parent = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Local = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Global, \
			Parent, \
			Local \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorMakeRelative;
// ********** End ScriptStruct FRigVMFunction_MathVectorMakeRelative *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMakeAbsolute *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeAbsolute_Statics;

#define FRigVMFunction_MathVectorMakeAbsolute_Execute() \
	void FRigVMFunction_MathVectorMakeAbsolute::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Local, \
		const FVector& Parent, \
		FVector& Global \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1146_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeAbsolute_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Local, \
		const FVector& Parent, \
		FVector& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Local = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Parent = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Global = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Local, \
			Parent, \
			Global \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorMakeAbsolute;
// ********** End ScriptStruct FRigVMFunction_MathVectorMakeAbsolute *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorMirrorTransform **************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMirrorTransform_Statics;

#define FRigVMFunction_MathVectorMirrorTransform_Execute() \
	void FRigVMFunction_MathVectorMirrorTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMirrorTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const TEnumAsByte<EAxis::Type>& MirrorAxis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetInputData(); \
		const TEnumAsByte<EAxis::Type>& AxisToFlip = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& CentralTransform = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			MirrorAxis, \
			AxisToFlip, \
			CentralTransform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorMirrorTransform;
// ********** End ScriptStruct FRigVMFunction_MathVectorMirrorTransform ****************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorArraySum *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArraySum_Statics;

#define FRigVMFunction_MathVectorArraySum_Execute() \
	void FRigVMFunction_MathVectorArraySum::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FVector& Sum \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1210_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArraySum_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FVector& Sum \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FVector>& Array = *(TArray<FVector>*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Sum = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Sum \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorArraySum;
// ********** End ScriptStruct FRigVMFunction_MathVectorArraySum ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathVectorArrayAverage *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArrayAverage_Statics;

#define FRigVMFunction_MathVectorArrayAverage_Execute() \
	void FRigVMFunction_MathVectorArrayAverage::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FVector& Average \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1235_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArrayAverage_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FVector& Average \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FVector>& Array = *(TArray<FVector>*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Average = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Average \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


struct FRigVMFunction_MathVectorArrayAverage;
// ********** End ScriptStruct FRigVMFunction_MathVectorArrayAverage *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
