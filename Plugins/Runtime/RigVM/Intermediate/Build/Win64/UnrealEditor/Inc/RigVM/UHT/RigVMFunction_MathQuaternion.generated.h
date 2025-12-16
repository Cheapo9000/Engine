// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathQuaternion.h"

#ifdef RIGVM_RigVMFunction_MathQuaternion_generated_h
#error "RigVMFunction_MathQuaternion.generated.h already included, missing '#pragma once' in RigVMFunction_MathQuaternion.h"
#endif
#define RIGVM_RigVMFunction_MathQuaternion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionBase *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathQuaternionBase;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionBase ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionUnaryOp ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionUnaryOp;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionUnaryOp ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionBinaryOp *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionBinaryOp;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionBinaryOp *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionBinaryAggregateOp ********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionBinaryAggregateOp;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionBinaryAggregateOp **********************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionMake *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics;

#define FRigVMFunction_MathQuaternionMake_Execute() \
	void FRigVMFunction_MathQuaternionMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float X, \
		const float Y, \
		const float Z, \
		const float W, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float X, \
		const float Y, \
		const float Z, \
		const float W, \
		FQuat& Result \
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
		const float W = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			X, \
			Y, \
			Z, \
			W, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionMake;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionMake ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionFromAxisAndAngle *********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics;

#define FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute() \
	void FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Axis = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Angle = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Axis, \
			Angle, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionFromAxisAndAngle;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionFromAxisAndAngle ***********************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionFromEuler ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics;

#define FRigVMFunction_MathQuaternionFromEuler_Execute() \
	void FRigVMFunction_MathQuaternionFromEuler::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Euler, \
		const EEulerRotationOrder RotationOrder, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Euler, \
		const EEulerRotationOrder RotationOrder, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Euler = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Euler, \
			RotationOrder, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionFromEuler;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionFromEuler ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionFromRotator **************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics;

#define FRigVMFunction_MathQuaternionFromRotator_Execute() \
	void FRigVMFunction_MathQuaternionFromRotator::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRotator& Rotator, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_168_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRotator& Rotator, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& Rotator = *(FRotator*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Rotator, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionFromRotator;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionFromRotator ****************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionFromRotatorV2 ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics;

#define FRigVMFunction_MathQuaternionFromRotatorV2_Execute() \
	void FRigVMFunction_MathQuaternionFromRotatorV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_195_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionFromRotatorV2;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionFromRotatorV2 **************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionFromTwoVectors ***********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics;

#define FRigVMFunction_MathQuaternionFromTwoVectors_Execute() \
	void FRigVMFunction_MathQuaternionFromTwoVectors::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_219_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionFromTwoVectors;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionFromTwoVectors *************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionToAxisAndAngle ***********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics;

#define FRigVMFunction_MathQuaternionToAxisAndAngle_Execute() \
	void FRigVMFunction_MathQuaternionToAxisAndAngle::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FVector& Axis, \
		float& Angle \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_246_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FVector& Axis, \
		float& Angle \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Axis = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Axis, \
			Angle \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionToAxisAndAngle;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionToAxisAndAngle *************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionToVectors ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics;

#define FRigVMFunction_MathQuaternionToVectors_Execute() \
	void FRigVMFunction_MathQuaternionToVectors::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FVector& Forward, \
		FVector& Right, \
		FVector& Up \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_274_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
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
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
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
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionToVectors;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionToVectors ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionScale ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics;

#define FRigVMFunction_MathQuaternionScale_Execute() \
	void FRigVMFunction_MathQuaternionScale::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const float Scale \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_304_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const float Scale \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetOutputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Scale \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionScale;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionScale **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionScaleV2 ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics;

#define FRigVMFunction_MathQuaternionScaleV2_Execute() \
	void FRigVMFunction_MathQuaternionScaleV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const float Factor, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_331_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const float Factor, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const float Factor = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Factor, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionScaleV2;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionScaleV2 ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionToEuler ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics;

#define FRigVMFunction_MathQuaternionToEuler_Execute() \
	void FRigVMFunction_MathQuaternionToEuler::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const EEulerRotationOrder RotationOrder, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_358_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const EEulerRotationOrder RotationOrder, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			RotationOrder, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionToEuler;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionToEuler ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionToRotator ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics;

#define FRigVMFunction_MathQuaternionToRotator_Execute() \
	void FRigVMFunction_MathQuaternionToRotator::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FRotator& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_386_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FRotator& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FRotator& Result = *(FRotator*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionToRotator;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionToRotator ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionMul **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics;

#define FRigVMFunction_MathQuaternionMul_Execute() \
	void FRigVMFunction_MathQuaternionMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_410_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBinaryAggregateOp Super;


struct FRigVMFunction_MathQuaternionMul;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionMul ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionInverse ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics;

#define FRigVMFunction_MathQuaternionInverse_Execute() \
	void FRigVMFunction_MathQuaternionInverse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_421_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionUnaryOp Super;


struct FRigVMFunction_MathQuaternionInverse;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionInverse ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionSlerp ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics;

#define FRigVMFunction_MathQuaternionSlerp_Execute() \
	void FRigVMFunction_MathQuaternionSlerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		const float T, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_432_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		const float T, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		const float T = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionSlerp;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionSlerp **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionEquals *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics;

#define FRigVMFunction_MathQuaternionEquals_Execute() \
	void FRigVMFunction_MathQuaternionEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_462_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionEquals;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionEquals *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionNotEquals ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics;

#define FRigVMFunction_MathQuaternionNotEquals_Execute() \
	void FRigVMFunction_MathQuaternionNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_492_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionNotEquals;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionNotEquals ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionSelectBool ***************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics;

#define FRigVMFunction_MathQuaternionSelectBool_Execute() \
	void FRigVMFunction_MathQuaternionSelectBool::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FQuat& IfTrue, \
		const FQuat& IfFalse, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_522_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FQuat& IfTrue, \
		const FQuat& IfFalse, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& IfTrue = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		const FQuat& IfFalse = *(FQuat*)RigVMMemoryHandles[2].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionSelectBool;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionSelectBool *****************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionDot **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics;

#define FRigVMFunction_MathQuaternionDot_Execute() \
	void FRigVMFunction_MathQuaternionDot::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_555_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionDot;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionDot ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionUnit *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics;

#define FRigVMFunction_MathQuaternionUnit_Execute() \
	void FRigVMFunction_MathQuaternionUnit::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_582_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionUnaryOp Super;


struct FRigVMFunction_MathQuaternionUnit;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionUnit ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionRotateVector *************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics;

#define FRigVMFunction_MathQuaternionRotateVector_Execute() \
	void FRigVMFunction_MathQuaternionRotateVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Transform, \
		const FVector& Vector, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_593_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Transform, \
		const FVector& Vector, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Transform = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
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
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionRotateVector;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionRotateVector ***************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionGetAxis ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics;

#define FRigVMFunction_MathQuaternionGetAxis_Execute() \
	void FRigVMFunction_MathQuaternionGetAxis::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Quaternion, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_620_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Quaternion, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Quaternion = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const TEnumAsByte<EAxis::Type>& Axis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Quaternion, \
			Axis, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionGetAxis;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionGetAxis ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionSwingTwist ***************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics;

#define FRigVMFunction_MathQuaternionSwingTwist_Execute() \
	void FRigVMFunction_MathQuaternionSwingTwist::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_649_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Swing = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		FQuat& Twist = *(FQuat*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Input, \
			TwistAxis, \
			Swing, \
			Twist \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionSwingTwist;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionSwingTwist *****************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionRotationOrder ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics;

#define FRigVMFunction_MathQuaternionRotationOrder_Execute() \
	void FRigVMFunction_MathQuaternionRotationOrder::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		EEulerRotationOrder& RotationOrder \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_679_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		EEulerRotationOrder& RotationOrder \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		EEulerRotationOrder& RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			RotationOrder \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathQuaternionRotationOrder;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionRotationOrder **************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionMakeRelative *************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics;

#define FRigVMFunction_MathQuaternionMakeRelative_Execute() \
	void FRigVMFunction_MathQuaternionMakeRelative::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Global, \
		const FQuat& Parent, \
		FQuat& Local \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_700_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Global, \
		const FQuat& Parent, \
		FQuat& Local \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Global = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& Parent = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Local = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Global, \
			Parent, \
			Local \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionMakeRelative;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionMakeRelative ***************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionMakeAbsolute *************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics;

#define FRigVMFunction_MathQuaternionMakeAbsolute_Execute() \
	void FRigVMFunction_MathQuaternionMakeAbsolute::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Local, \
		const FQuat& Parent, \
		FQuat& Global \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_726_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Local, \
		const FQuat& Parent, \
		FQuat& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Local = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& Parent = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Global = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Local, \
			Parent, \
			Global \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionMakeAbsolute;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionMakeAbsolute ***************************

// ********** Begin ScriptStruct FRigVMFunction_MathQuaternionMirrorTransform **********************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics;

#define FRigVMFunction_MathQuaternionMirrorTransform_Execute() \
	void FRigVMFunction_MathQuaternionMirrorTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_752_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const TEnumAsByte<EAxis::Type>& MirrorAxis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetInputData(); \
		const TEnumAsByte<EAxis::Type>& AxisToFlip = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& CentralTransform = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetOutputData(); \
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
	typedef FRigVMFunction_MathQuaternionBase Super;


struct FRigVMFunction_MathQuaternionMirrorTransform;
// ********** End ScriptStruct FRigVMFunction_MathQuaternionMirrorTransform ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
