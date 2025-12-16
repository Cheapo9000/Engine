// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_SpringMath.h"

#ifdef RIGVM_RigVMFunction_SpringMath_generated_h
#error "RigVMFunction_SpringMath.generated.h already included, missing '#pragma once' in RigVMFunction_SpringMath.h"
#endif
#define RIGVM_RigVMFunction_SpringMath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_DampFloat ******************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DampFloat_Statics;

#define FRigVMFunction_DampFloat_Execute() \
	void FRigVMFunction_DampFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Target, \
		const float SmoothingTime, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DampFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Target, \
		const float SmoothingTime, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Target = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float SmoothingTime = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Target, \
			SmoothingTime, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_DampFloat;
// ********** End ScriptStruct FRigVMFunction_DampFloat ********************************************

// ********** Begin ScriptStruct FRigVMFunction_DampVector *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DampVector_Statics;

#define FRigVMFunction_DampVector_Execute() \
	void FRigVMFunction_DampVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Target, \
		const float SmoothingTime, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DampVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Target, \
		const float SmoothingTime, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float SmoothingTime = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Target, \
			SmoothingTime, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_DampVector;
// ********** End ScriptStruct FRigVMFunction_DampVector *******************************************

// ********** Begin ScriptStruct FRigVMFunction_DampQuaternion *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DampQuaternion_Statics;

#define FRigVMFunction_DampQuaternion_Execute() \
	void FRigVMFunction_DampQuaternion::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const FQuat& Target, \
		const float SmoothingTime, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DampQuaternion_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const FQuat& Target, \
		const float SmoothingTime, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& Target = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		const float SmoothingTime = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Target, \
			SmoothingTime, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_DampQuaternion;
// ********** End ScriptStruct FRigVMFunction_DampQuaternion ***************************************

// ********** Begin ScriptStruct FRigVMFunction_SpringDampFloat ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_SpringDampFloat_Statics;

#define FRigVMFunction_SpringDampFloat_Execute() \
	void FRigVMFunction_SpringDampFloat::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		float& Value, \
		float& ValueVelocity, \
		const float Target, \
		const float SmoothingTime \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_SpringDampFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		float& Value, \
		float& ValueVelocity, \
		const float Target, \
		const float SmoothingTime \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		float& ValueVelocity = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		const float Target = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float SmoothingTime = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			ValueVelocity, \
			Target, \
			SmoothingTime \
		); \
	} \
	typedef FRigVMFunction_MathMutableBase Super;


struct FRigVMFunction_SpringDampFloat;
// ********** End ScriptStruct FRigVMFunction_SpringDampFloat **************************************

// ********** Begin ScriptStruct FRigVMFunction_SpringDampVector ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_SpringDampVector_Statics;

#define FRigVMFunction_SpringDampVector_Execute() \
	void FRigVMFunction_SpringDampVector::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		FVector& ValueVelocity, \
		const FVector& Target, \
		const float SmoothingTime \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_SpringDampVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		FVector& ValueVelocity, \
		const FVector& Target, \
		const float SmoothingTime \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetOutputData(); \
		FVector& ValueVelocity = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const float SmoothingTime = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			ValueVelocity, \
			Target, \
			SmoothingTime \
		); \
	} \
	typedef FRigVMFunction_MathMutableBase Super;


struct FRigVMFunction_SpringDampVector;
// ********** End ScriptStruct FRigVMFunction_SpringDampVector *************************************

// ********** Begin ScriptStruct FRigVMFunction_SpringDampQuat *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_SpringDampQuat_Statics;

#define FRigVMFunction_SpringDampQuat_Execute() \
	void FRigVMFunction_SpringDampQuat::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		FVector& ValueVelocity, \
		const FQuat& Target, \
		const float SmoothingTime \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_SpringDampQuat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		FVector& ValueVelocity, \
		const FQuat& Target, \
		const float SmoothingTime \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetOutputData(); \
		FVector& ValueVelocity = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		const FQuat& Target = *(FQuat*)RigVMMemoryHandles[2].GetInputData(); \
		const float SmoothingTime = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			ValueVelocity, \
			Target, \
			SmoothingTime \
		); \
	} \
	typedef FRigVMFunction_MathMutableBase Super;


struct FRigVMFunction_SpringDampQuat;
// ********** End ScriptStruct FRigVMFunction_SpringDampQuat ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
