// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathTransform.h"

#ifdef RIGVM_RigVMFunction_MathTransform_generated_h
#error "RigVMFunction_MathTransform.generated.h already included, missing '#pragma once' in RigVMFunction_MathTransform.h"
#endif
#define RIGVM_RigVMFunction_MathTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathTransformBase **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathTransformBase;
// ********** End ScriptStruct FRigVMFunction_MathTransformBase ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformMutableBase ***************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathMutableBase Super;


struct FRigVMFunction_MathTransformMutableBase;
// ********** End ScriptStruct FRigVMFunction_MathTransformMutableBase *****************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformUnaryOp *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformUnaryOp;
// ********** End ScriptStruct FRigVMFunction_MathTransformUnaryOp *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformBinaryOp ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformBinaryOp;
// ********** End ScriptStruct FRigVMFunction_MathTransformBinaryOp ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformBinaryAggregateOp *********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformBinaryAggregateOp;
// ********** End ScriptStruct FRigVMFunction_MathTransformBinaryAggregateOp ***********************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformMake **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics;

#define FRigVMFunction_MathTransformMake_Execute() \
	void FRigVMFunction_MathTransformMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Translation, \
		const FQuat& Rotation, \
		const FVector& Scale, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Translation, \
		const FQuat& Rotation, \
		const FVector& Scale, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Translation = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& Rotation = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& Scale = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Translation, \
			Rotation, \
			Scale, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformMake;
// ********** End ScriptStruct FRigVMFunction_MathTransformMake ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformFromEulerTransform ********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics;

#define FRigVMFunction_MathTransformFromEulerTransform_Execute() \
	void FRigVMFunction_MathTransformFromEulerTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FEulerTransform& EulerTransform, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_120_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FEulerTransform& EulerTransform, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FEulerTransform& EulerTransform = *(FEulerTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			EulerTransform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformFromEulerTransform;
// ********** End ScriptStruct FRigVMFunction_MathTransformFromEulerTransform **********************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformFromEulerTransformV2 ******************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics;

#define FRigVMFunction_MathTransformFromEulerTransformV2_Execute() \
	void FRigVMFunction_MathTransformFromEulerTransformV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FEulerTransform& Value, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FEulerTransform& Value, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FEulerTransform& Value = *(FEulerTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformFromEulerTransformV2;
// ********** End ScriptStruct FRigVMFunction_MathTransformFromEulerTransformV2 ********************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformToEulerTransform **********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics;

#define FRigVMFunction_MathTransformToEulerTransform_Execute() \
	void FRigVMFunction_MathTransformToEulerTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FEulerTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_171_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FEulerTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FEulerTransform& Result = *(FEulerTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformToEulerTransform;
// ********** End ScriptStruct FRigVMFunction_MathTransformToEulerTransform ************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformToVectors *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToVectors_Statics;

#define FRigVMFunction_MathTransformToVectors_Execute() \
	void FRigVMFunction_MathTransformToVectors::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FVector& Forward, \
		FVector& Right, \
		FVector& Up \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_195_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToVectors_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FVector& Forward, \
		FVector& Right, \
		FVector& Up \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Forward = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		FVector& Right = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		FVector& Up = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Forward, \
			Right, \
			Up \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformToVectors;
// ********** End ScriptStruct FRigVMFunction_MathTransformToVectors *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformMul ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics;

#define FRigVMFunction_MathTransformMul_Execute() \
	void FRigVMFunction_MathTransformMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& A = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& B = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBinaryAggregateOp Super;


struct FRigVMFunction_MathTransformMul;
// ********** End ScriptStruct FRigVMFunction_MathTransformMul *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformMakeRelative **************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics;

#define FRigVMFunction_MathTransformMakeRelative_Execute() \
	void FRigVMFunction_MathTransformMakeRelative::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Global, \
		const FTransform& Parent, \
		FTransform& Local \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_236_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Global, \
		const FTransform& Parent, \
		FTransform& Local \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Global = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Parent = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Local = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Global, \
			Parent, \
			Local \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformMakeRelative;
// ********** End ScriptStruct FRigVMFunction_MathTransformMakeRelative ****************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformMakeAbsolute **************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics;

#define FRigVMFunction_MathTransformMakeAbsolute_Execute() \
	void FRigVMFunction_MathTransformMakeAbsolute::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Local, \
		const FTransform& Parent, \
		FTransform& Global \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_262_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Local, \
		const FTransform& Parent, \
		FTransform& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Local = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Parent = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Global = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Local, \
			Parent, \
			Global \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformMakeAbsolute;
// ********** End ScriptStruct FRigVMFunction_MathTransformMakeAbsolute ****************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformAccumulateArray ***********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics;

#define FRigVMFunction_MathTransformAccumulateArray_Execute() \
	void FRigVMFunction_MathTransformAccumulateArray::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		TArray<FTransform>& Transforms, \
		const ERigVMTransformSpace TargetSpace, \
		const FTransform& Root, \
		const TArrayView<const int32>& ParentIndices \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_290_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		TArray<FTransform>& Transforms, \
		const ERigVMTransformSpace TargetSpace, \
		const FTransform& Root, \
		const TArrayView<const int32>& ParentIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetOutputData(); \
		const ERigVMTransformSpace TargetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& Root = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transforms, \
			TargetSpace, \
			Root, \
			ParentIndices \
		); \
	} \
	typedef FRigVMFunction_MathTransformMutableBase Super;


struct FRigVMFunction_MathTransformAccumulateArray;
// ********** End ScriptStruct FRigVMFunction_MathTransformAccumulateArray *************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformInverse *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics;

#define FRigVMFunction_MathTransformInverse_Execute() \
	void FRigVMFunction_MathTransformInverse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_332_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformUnaryOp Super;


struct FRigVMFunction_MathTransformInverse;
// ********** End ScriptStruct FRigVMFunction_MathTransformInverse *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformLerp **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics;

#define FRigVMFunction_MathTransformLerp_Execute() \
	void FRigVMFunction_MathTransformLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		const float T, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_343_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		const float T, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& A = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& B = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		const float T = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformLerp;
// ********** End ScriptStruct FRigVMFunction_MathTransformLerp ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformSelectBool ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics;

#define FRigVMFunction_MathTransformSelectBool_Execute() \
	void FRigVMFunction_MathTransformSelectBool::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FTransform& IfTrue, \
		const FTransform& IfFalse, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_373_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FTransform& IfTrue, \
		const FTransform& IfFalse, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& IfTrue = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& IfFalse = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformSelectBool;
// ********** End ScriptStruct FRigVMFunction_MathTransformSelectBool ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformRotateVector **************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics;

#define FRigVMFunction_MathTransformRotateVector_Execute() \
	void FRigVMFunction_MathTransformRotateVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FVector& Vector, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_406_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FVector& Vector, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Vector = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Vector, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformRotateVector;
// ********** End ScriptStruct FRigVMFunction_MathTransformRotateVector ****************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformTransformVector ***********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics;

#define FRigVMFunction_MathTransformTransformVector_Execute() \
	void FRigVMFunction_MathTransformTransformVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FVector& Location, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_433_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FVector& Location, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Location = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Location, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformTransformVector;
// ********** End ScriptStruct FRigVMFunction_MathTransformTransformVector *************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformFromSRT *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics;

#define FRigVMFunction_MathTransformFromSRT_Execute() \
	void FRigVMFunction_MathTransformFromSRT::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Location, \
		const FVector& Rotation, \
		const EEulerRotationOrder RotationOrder, \
		const FVector& Scale, \
		FTransform& Transform, \
		FEulerTransform& EulerTransform \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_460_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Location, \
		const FVector& Rotation, \
		const EEulerRotationOrder RotationOrder, \
		const FVector& Scale, \
		FTransform& Transform, \
		FEulerTransform& EulerTransform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Location = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Rotation = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& Scale = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		FEulerTransform& EulerTransform = *(FEulerTransform*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Location, \
			Rotation, \
			RotationOrder, \
			Scale, \
			Transform, \
			EulerTransform \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformFromSRT;
// ********** End ScriptStruct FRigVMFunction_MathTransformFromSRT *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformArrayToSRT ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics;

#define FRigVMFunction_MathTransformArrayToSRT_Execute() \
	void FRigVMFunction_MathTransformArrayToSRT::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		TArray<FVector>& Translations, \
		TArray<FQuat>& Rotations, \
		TArray<FVector>& Scales \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_501_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		TArray<FVector>& Translations, \
		TArray<FQuat>& Rotations, \
		TArray<FVector>& Scales \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FVector>& Translations = *(TArray<FVector>*)RigVMMemoryHandles[1].GetOutputData(); \
		TArray<FQuat>& Rotations = *(TArray<FQuat>*)RigVMMemoryHandles[2].GetOutputData(); \
		TArray<FVector>& Scales = *(TArray<FVector>*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transforms, \
			Translations, \
			Rotations, \
			Scales \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformArrayToSRT;
// ********** End ScriptStruct FRigVMFunction_MathTransformArrayToSRT ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformClampSpatially ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics;

#define FRigVMFunction_MathTransformClampSpatially_Execute() \
	void FRigVMFunction_MathTransformClampSpatially::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_529_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const TEnumAsByte<EAxis::Type>& Axis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetInputData(); \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type = *(TEnumAsByte<ERigVMClampSpatialMode::Type>*)RigVMMemoryHandles[2].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FTransform& Space = *(FTransform*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FLinearColor& DebugColor = *(FLinearColor*)RigVMMemoryHandles[7].GetInputData(); \
		const float DebugThickness = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[9].GetOutputData(); \
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
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformClampSpatially;
// ********** End ScriptStruct FRigVMFunction_MathTransformClampSpatially **************************

// ********** Begin ScriptStruct FRigVMFunction_MathTransformMirrorTransform ***********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics;

#define FRigVMFunction_MathTransformMirrorTransform_Execute() \
	void FRigVMFunction_MathTransformMirrorTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_593_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const TEnumAsByte<EAxis::Type>& MirrorAxis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetInputData(); \
		const TEnumAsByte<EAxis::Type>& AxisToFlip = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& CentralTransform = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
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
	typedef FRigVMFunction_MathTransformBase Super;


struct FRigVMFunction_MathTransformMirrorTransform;
// ********** End ScriptStruct FRigVMFunction_MathTransformMirrorTransform *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
