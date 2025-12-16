// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h"

#ifdef RIGVM_RigVMFunction_MathRBFInterpolate_generated_h
#error "RigVMFunction_MathRBFInterpolate.generated.h already included, missing '#pragma once' in RigVMFunction_MathRBFInterpolate.h"
#endif
#define RIGVM_RigVMFunction_MathRBFInterpolate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateQuatWorkData *********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMFunction_MathRBFInterpolateQuatWorkData;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateQuatWorkData ***********************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateVectorWorkData *******************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMFunction_MathRBFInterpolateVectorWorkData;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateVectorWorkData *********************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateBase *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathRBFInterpolateBase;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateBase *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateQuatBase *************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathRBFInterpolateBase Super;


struct FRigVMFunction_MathRBFInterpolateQuatBase;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateQuatBase ***************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateVectorBase ***********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_132_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathRBFInterpolateBase Super;


struct FRigVMFunction_MathRBFInterpolateVectorBase;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateVectorBase *************************

// ********** Begin ScriptStruct FMathRBFInterpolateQuatFloat_Target *******************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_175_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateQuatFloat_Target;
// ********** End ScriptStruct FMathRBFInterpolateQuatFloat_Target *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateQuatFloat ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics;

#define FRigVMFunction_MathRBFInterpolateQuatFloat_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatFloat_Target>& Targets, \
		float& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_188_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatFloat_Target>& Targets, \
		float& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatFloat_Target>& Targets = *(TArray<FMathRBFInterpolateQuatFloat_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		float& Output = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


struct FRigVMFunction_MathRBFInterpolateQuatFloat;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateQuatFloat **************************

// ********** Begin ScriptStruct FMathRBFInterpolateQuatVector_Target ******************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_204_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateQuatVector_Target;
// ********** End ScriptStruct FMathRBFInterpolateQuatVector_Target ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateQuatVector ***********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics;

#define FRigVMFunction_MathRBFInterpolateQuatVector_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatVector_Target>& Targets, \
		FVector& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatVector_Target>& Targets, \
		FVector& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatVector_Target>& Targets = *(TArray<FMathRBFInterpolateQuatVector_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Output = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


struct FRigVMFunction_MathRBFInterpolateQuatVector;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateQuatVector *************************

// ********** Begin ScriptStruct FMathRBFInterpolateQuatColor_Target *******************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_233_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateQuatColor_Target;
// ********** End ScriptStruct FMathRBFInterpolateQuatColor_Target *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateQuatColor ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics;

#define FRigVMFunction_MathRBFInterpolateQuatColor_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatColor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatColor_Target>& Targets, \
		FLinearColor& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_246_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatColor_Target>& Targets, \
		FLinearColor& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatColor_Target>& Targets = *(TArray<FMathRBFInterpolateQuatColor_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		FLinearColor& Output = *(FLinearColor*)RigVMMemoryHandles[1].GetOutputData(); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


struct FRigVMFunction_MathRBFInterpolateQuatColor;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateQuatColor **************************

// ********** Begin ScriptStruct FMathRBFInterpolateQuatQuat_Target ********************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_262_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateQuatQuat_Target;
// ********** End ScriptStruct FMathRBFInterpolateQuatQuat_Target **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateQuatQuat *************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics;

#define FRigVMFunction_MathRBFInterpolateQuatQuat_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatQuat_Target>& Targets, \
		FQuat& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_275_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatQuat_Target>& Targets, \
		FQuat& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatQuat_Target>& Targets = *(TArray<FMathRBFInterpolateQuatQuat_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Output = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


struct FRigVMFunction_MathRBFInterpolateQuatQuat;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateQuatQuat ***************************

// ********** Begin ScriptStruct FMathRBFInterpolateQuatXform_Target *******************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_291_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateQuatXform_Target;
// ********** End ScriptStruct FMathRBFInterpolateQuatXform_Target *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateQuatXform ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics;

#define FRigVMFunction_MathRBFInterpolateQuatXform_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatXform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatXform_Target>& Targets, \
		FTransform& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_304_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatXform_Target>& Targets, \
		FTransform& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatXform_Target>& Targets = *(TArray<FMathRBFInterpolateQuatXform_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Output = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


struct FRigVMFunction_MathRBFInterpolateQuatXform;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateQuatXform **************************

// ********** Begin ScriptStruct FMathRBFInterpolateVectorFloat_Target *****************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_322_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateVectorFloat_Target;
// ********** End ScriptStruct FMathRBFInterpolateVectorFloat_Target *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateVectorFloat **********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics;

#define FRigVMFunction_MathRBFInterpolateVectorFloat_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorFloat_Target>& Targets, \
		float& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_335_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorFloat_Target>& Targets, \
		float& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorFloat_Target>& Targets = *(TArray<FMathRBFInterpolateVectorFloat_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		float& Output = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


struct FRigVMFunction_MathRBFInterpolateVectorFloat;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateVectorFloat ************************

// ********** Begin ScriptStruct FMathRBFInterpolateVectorVector_Target ****************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_351_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateVectorVector_Target;
// ********** End ScriptStruct FMathRBFInterpolateVectorVector_Target ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateVectorVector *********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics;

#define FRigVMFunction_MathRBFInterpolateVectorVector_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorVector_Target>& Targets, \
		FVector& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_364_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorVector_Target>& Targets, \
		FVector& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorVector_Target>& Targets = *(TArray<FMathRBFInterpolateVectorVector_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Output = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


struct FRigVMFunction_MathRBFInterpolateVectorVector;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateVectorVector ***********************

// ********** Begin ScriptStruct FMathRBFInterpolateVectorColor_Target *****************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_380_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateVectorColor_Target;
// ********** End ScriptStruct FMathRBFInterpolateVectorColor_Target *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateVectorColor **********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics;

#define FRigVMFunction_MathRBFInterpolateVectorColor_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorColor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorColor_Target>& Targets, \
		FLinearColor& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_393_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorColor_Target>& Targets, \
		FLinearColor& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorColor_Target>& Targets = *(TArray<FMathRBFInterpolateVectorColor_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		FLinearColor& Output = *(FLinearColor*)RigVMMemoryHandles[1].GetOutputData(); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


struct FRigVMFunction_MathRBFInterpolateVectorColor;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateVectorColor ************************

// ********** Begin ScriptStruct FMathRBFInterpolateVectorQuat_Target ******************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_410_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateVectorQuat_Target;
// ********** End ScriptStruct FMathRBFInterpolateVectorQuat_Target ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateVectorQuat ***********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics;

#define FRigVMFunction_MathRBFInterpolateVectorQuat_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorQuat_Target>& Targets, \
		FQuat& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_423_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorQuat_Target>& Targets, \
		FQuat& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorQuat_Target>& Targets = *(TArray<FMathRBFInterpolateVectorQuat_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Output = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


struct FRigVMFunction_MathRBFInterpolateVectorQuat;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateVectorQuat *************************

// ********** Begin ScriptStruct FMathRBFInterpolateVectorXform_Target *****************************
struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_438_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FMathRBFInterpolateVectorXform_Target;
// ********** End ScriptStruct FMathRBFInterpolateVectorXform_Target *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathRBFInterpolateVectorXform **********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics;

#define FRigVMFunction_MathRBFInterpolateVectorXform_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorXform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorXform_Target>& Targets, \
		FTransform& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_451_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorXform_Target>& Targets, \
		FTransform& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorXform_Target>& Targets = *(TArray<FMathRBFInterpolateVectorXform_Target>*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Output = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetInputData(); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetInputData(); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


struct FRigVMFunction_MathRBFInterpolateVectorXform;
// ********** End ScriptStruct FRigVMFunction_MathRBFInterpolateVectorXform ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h

// ********** Begin Enum ERBFKernelType ************************************************************
#define FOREACH_ENUM_ERBFKERNELTYPE(op) \
	op(ERBFKernelType::Gaussian) \
	op(ERBFKernelType::Exponential) \
	op(ERBFKernelType::Linear) \
	op(ERBFKernelType::Cubic) \
	op(ERBFKernelType::Quintic) 

enum class ERBFKernelType : uint8;
template<> struct TIsUEnumClass<ERBFKernelType> { enum { Value = true }; };
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERBFKernelType>();
// ********** End Enum ERBFKernelType **************************************************************

// ********** Begin Enum ERBFQuatDistanceType ******************************************************
#define FOREACH_ENUM_ERBFQUATDISTANCETYPE(op) \
	op(ERBFQuatDistanceType::Euclidean) \
	op(ERBFQuatDistanceType::ArcLength) \
	op(ERBFQuatDistanceType::SwingAngle) \
	op(ERBFQuatDistanceType::TwistAngle) 

enum class ERBFQuatDistanceType : uint8;
template<> struct TIsUEnumClass<ERBFQuatDistanceType> { enum { Value = true }; };
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERBFQuatDistanceType>();
// ********** End Enum ERBFQuatDistanceType ********************************************************

// ********** Begin Enum ERBFVectorDistanceType ****************************************************
#define FOREACH_ENUM_ERBFVECTORDISTANCETYPE(op) \
	op(ERBFVectorDistanceType::Euclidean) \
	op(ERBFVectorDistanceType::Manhattan) \
	op(ERBFVectorDistanceType::ArcLength) 

enum class ERBFVectorDistanceType : uint8;
template<> struct TIsUEnumClass<ERBFVectorDistanceType> { enum { Value = true }; };
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERBFVectorDistanceType>();
// ********** End Enum ERBFVectorDistanceType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
