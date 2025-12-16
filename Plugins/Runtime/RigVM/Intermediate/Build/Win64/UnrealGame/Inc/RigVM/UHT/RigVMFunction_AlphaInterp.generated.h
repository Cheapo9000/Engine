// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h"

#ifdef RIGVM_RigVMFunction_AlphaInterp_generated_h
#error "RigVMFunction_AlphaInterp.generated.h already included, missing '#pragma once' in RigVMFunction_AlphaInterp.h"
#endif
#define RIGVM_RigVMFunction_AlphaInterp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_AlphaInterp ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics;

#define FRigVMFunction_AlphaInterp_Execute() \
	void FRigVMFunction_AlphaInterp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		float& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		float& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Bias = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bMapRange = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const FInputRange& InRange = *(FInputRange*)RigVMMemoryHandles[4].GetInputData(); \
		const FInputRange& OutRange = *(FInputRange*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bClampResult = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const float ClampMin = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		const float ClampMax = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		const bool bInterpResult = *(bool*)RigVMMemoryHandles[9].GetInputData(); \
		const float InterpSpeedIncreasing = *(float*)RigVMMemoryHandles[10].GetInputData(); \
		const float InterpSpeedDecreasing = *(float*)RigVMMemoryHandles[11].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[12].GetOutputData(); \
		FInputScaleBiasClamp& ScaleBiasClamp = *(FInputScaleBiasClamp*)RigVMMemoryHandles[13].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Scale, \
			Bias, \
			bMapRange, \
			InRange, \
			OutRange, \
			bClampResult, \
			ClampMin, \
			ClampMax, \
			bInterpResult, \
			InterpSpeedIncreasing, \
			InterpSpeedDecreasing, \
			Result, \
			ScaleBiasClamp \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_AlphaInterp;
// ********** End ScriptStruct FRigVMFunction_AlphaInterp ******************************************

// ********** Begin ScriptStruct FRigVMFunction_AlphaInterpVector **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics;

#define FRigVMFunction_AlphaInterpVector_Execute() \
	void FRigVMFunction_AlphaInterpVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FVector& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FVector& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Bias = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bMapRange = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const FInputRange& InRange = *(FInputRange*)RigVMMemoryHandles[4].GetInputData(); \
		const FInputRange& OutRange = *(FInputRange*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bClampResult = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const float ClampMin = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		const float ClampMax = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		const bool bInterpResult = *(bool*)RigVMMemoryHandles[9].GetInputData(); \
		const float InterpSpeedIncreasing = *(float*)RigVMMemoryHandles[10].GetInputData(); \
		const float InterpSpeedDecreasing = *(float*)RigVMMemoryHandles[11].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[12].GetOutputData(); \
		FInputScaleBiasClamp& ScaleBiasClamp = *(FInputScaleBiasClamp*)RigVMMemoryHandles[13].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Scale, \
			Bias, \
			bMapRange, \
			InRange, \
			OutRange, \
			bClampResult, \
			ClampMin, \
			ClampMax, \
			bInterpResult, \
			InterpSpeedIncreasing, \
			InterpSpeedDecreasing, \
			Result, \
			ScaleBiasClamp \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_AlphaInterpVector;
// ********** End ScriptStruct FRigVMFunction_AlphaInterpVector ************************************

// ********** Begin ScriptStruct FRigVMFunction_AlphaInterpQuat ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics;

#define FRigVMFunction_AlphaInterpQuat_Execute() \
	void FRigVMFunction_AlphaInterpQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FQuat& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FQuat& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Bias = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bMapRange = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const FInputRange& InRange = *(FInputRange*)RigVMMemoryHandles[4].GetInputData(); \
		const FInputRange& OutRange = *(FInputRange*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bClampResult = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const float ClampMin = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		const float ClampMax = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		const bool bInterpResult = *(bool*)RigVMMemoryHandles[9].GetInputData(); \
		const float InterpSpeedIncreasing = *(float*)RigVMMemoryHandles[10].GetInputData(); \
		const float InterpSpeedDecreasing = *(float*)RigVMMemoryHandles[11].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[12].GetOutputData(); \
		FInputScaleBiasClamp& ScaleBiasClamp = *(FInputScaleBiasClamp*)RigVMMemoryHandles[13].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Scale, \
			Bias, \
			bMapRange, \
			InRange, \
			OutRange, \
			bClampResult, \
			ClampMin, \
			ClampMax, \
			bInterpResult, \
			InterpSpeedIncreasing, \
			InterpSpeedDecreasing, \
			Result, \
			ScaleBiasClamp \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_AlphaInterpQuat;
// ********** End ScriptStruct FRigVMFunction_AlphaInterpQuat **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
