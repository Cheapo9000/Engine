// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathMatrix.h"

#ifdef RIGVM_RigVMFunction_MathMatrix_generated_h
#error "RigVMFunction_MathMatrix.generated.h already included, missing '#pragma once' in RigVMFunction_MathMatrix.h"
#endif
#define RIGVM_RigVMFunction_MathMatrix_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixBase *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathMatrixBase;
// ********** End ScriptStruct FRigVMFunction_MathMatrixBase ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixUnaryOp **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathMatrixBase Super;


struct FRigVMFunction_MathMatrixUnaryOp;
// ********** End ScriptStruct FRigVMFunction_MathMatrixUnaryOp ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixBinaryOp *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathMatrixBase Super;


struct FRigVMFunction_MathMatrixBinaryOp;
// ********** End ScriptStruct FRigVMFunction_MathMatrixBinaryOp ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixBinaryAggregateOp ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathMatrixBase Super;


struct FRigVMFunction_MathMatrixBinaryAggregateOp;
// ********** End ScriptStruct FRigVMFunction_MathMatrixBinaryAggregateOp **************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixToTransform ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics;

#define FRigVMFunction_MathMatrixToTransform_Execute() \
	void FRigVMFunction_MathMatrixToTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FMatrix& Value = *(FMatrix*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


struct FRigVMFunction_MathMatrixToTransform;
// ********** End ScriptStruct FRigVMFunction_MathMatrixToTransform ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixFromTransform ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics;

#define FRigVMFunction_MathMatrixFromTransform_Execute() \
	void FRigVMFunction_MathMatrixFromTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		FMatrix& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


struct FRigVMFunction_MathMatrixFromTransform;
// ********** End ScriptStruct FRigVMFunction_MathMatrixFromTransform ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixFromTransformV2 **************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics;

#define FRigVMFunction_MathMatrixFromTransformV2_Execute() \
	void FRigVMFunction_MathMatrixFromTransformV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FMatrix& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


struct FRigVMFunction_MathMatrixFromTransformV2;
// ********** End ScriptStruct FRigVMFunction_MathMatrixFromTransformV2 ****************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixToVectors ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics;

#define FRigVMFunction_MathMatrixToVectors_Execute() \
	void FRigVMFunction_MathMatrixToVectors::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FVector& Origin, \
		FVector& X, \
		FVector& Y, \
		FVector& Z \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_153_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FVector& Origin, \
		FVector& X, \
		FVector& Y, \
		FVector& Z \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FMatrix& Value = *(FMatrix*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Origin = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		FVector& X = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		FVector& Y = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		FVector& Z = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Origin, \
			X, \
			Y, \
			Z \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


struct FRigVMFunction_MathMatrixToVectors;
// ********** End ScriptStruct FRigVMFunction_MathMatrixToVectors **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixFromVectors ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics;

#define FRigVMFunction_MathMatrixFromVectors_Execute() \
	void FRigVMFunction_MathMatrixFromVectors::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Origin, \
		const FVector& X, \
		const FVector& Y, \
		const FVector& Z, \
		FMatrix& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_189_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Origin, \
		const FVector& X, \
		const FVector& Y, \
		const FVector& Z, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Origin = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& X = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& Y = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& Z = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Origin, \
			X, \
			Y, \
			Z, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


struct FRigVMFunction_MathMatrixFromVectors;
// ********** End ScriptStruct FRigVMFunction_MathMatrixFromVectors ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixMul **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics;

#define FRigVMFunction_MathMatrixMul_Execute() \
	void FRigVMFunction_MathMatrixMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& A, \
		const FMatrix& B, \
		FMatrix& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& A, \
		const FMatrix& B, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FMatrix& A = *(FMatrix*)RigVMMemoryHandles[0].GetInputData(); \
		const FMatrix& B = *(FMatrix*)RigVMMemoryHandles[1].GetInputData(); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBinaryAggregateOp Super;


struct FRigVMFunction_MathMatrixMul;
// ********** End ScriptStruct FRigVMFunction_MathMatrixMul ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathMatrixInverse **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics;

#define FRigVMFunction_MathMatrixInverse_Execute() \
	void FRigVMFunction_MathMatrixInverse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FMatrix& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_236_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FMatrix& Value = *(FMatrix*)RigVMMemoryHandles[0].GetInputData(); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixUnaryOp Super;


struct FRigVMFunction_MathMatrixInverse;
// ********** End ScriptStruct FRigVMFunction_MathMatrixInverse ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
