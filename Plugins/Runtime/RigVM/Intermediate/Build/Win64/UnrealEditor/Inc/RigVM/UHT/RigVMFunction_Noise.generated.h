// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_Noise.h"

#ifdef RIGVM_RigVMFunction_Noise_generated_h
#error "RigVMFunction_Noise.generated.h already included, missing '#pragma once' in RigVMFunction_Noise.h"
#endif
#define RIGVM_RigVMFunction_Noise_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_NoiseFloat *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics;

#define FRigVMFunction_NoiseFloat_Execute() \
	void FRigVMFunction_NoiseFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Speed, \
		const float Frequency, \
		const float Minimum, \
		const float Maximum, \
		float& Result, \
		float& Time \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Speed, \
		const float Frequency, \
		const float Minimum, \
		const float Maximum, \
		float& Result, \
		float& Time \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Speed = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Frequency = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		float& Time = *(float*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_NoiseFloat;
// ********** End ScriptStruct FRigVMFunction_NoiseFloat *******************************************

// ********** Begin ScriptStruct FRigVMFunction_NoiseDouble ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics;

#define FRigVMFunction_NoiseDouble_Execute() \
	void FRigVMFunction_NoiseDouble::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Speed, \
		const double Frequency, \
		const double Minimum, \
		const double Maximum, \
		double& Result, \
		double& Time \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Speed, \
		const double Frequency, \
		const double Minimum, \
		const double Maximum, \
		double& Result, \
		double& Time \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double Speed = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		const double Frequency = *(double*)RigVMMemoryHandles[2].GetInputData(); \
		const double Minimum = *(double*)RigVMMemoryHandles[3].GetInputData(); \
		const double Maximum = *(double*)RigVMMemoryHandles[4].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[5].GetOutputData(); \
		double& Time = *(double*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_NoiseDouble;
// ********** End ScriptStruct FRigVMFunction_NoiseDouble ******************************************

// ********** Begin ScriptStruct FRigVMFunction_NoiseVector ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics;

#define FRigVMFunction_NoiseVector_Execute() \
	void FRigVMFunction_NoiseVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Position, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const float Minimum, \
		const float Maximum, \
		FVector& Result, \
		FVector& Time \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Position, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const float Minimum, \
		const float Maximum, \
		FVector& Result, \
		FVector& Time \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Position = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& Frequency = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		FVector& Time = *(FVector*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Position, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_NoiseVector;
// ********** End ScriptStruct FRigVMFunction_NoiseVector ******************************************

// ********** Begin ScriptStruct FRigVMFunction_NoiseVector2 ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics;

#define FRigVMFunction_NoiseVector2_Execute() \
	void FRigVMFunction_NoiseVector2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const double Minimum, \
		const double Maximum, \
		FVector& Result, \
		FVector& Time \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const double Minimum, \
		const double Maximum, \
		FVector& Result, \
		FVector& Time \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& Frequency = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const double Minimum = *(double*)RigVMMemoryHandles[3].GetInputData(); \
		const double Maximum = *(double*)RigVMMemoryHandles[4].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		FVector& Time = *(FVector*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_NoiseVector2;
// ********** End ScriptStruct FRigVMFunction_NoiseVector2 *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
