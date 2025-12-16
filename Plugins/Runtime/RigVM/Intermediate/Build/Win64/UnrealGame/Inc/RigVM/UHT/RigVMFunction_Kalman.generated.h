// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_Kalman.h"

#ifdef RIGVM_RigVMFunction_Kalman_generated_h
#error "RigVMFunction_Kalman.generated.h already included, missing '#pragma once' in RigVMFunction_Kalman.h"
#endif
#define RIGVM_RigVMFunction_Kalman_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_KalmanFloat ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics;

#define FRigVMFunction_KalmanFloat_Execute() \
	void FRigVMFunction_KalmanFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const int32 BufferSize, \
		float& Result, \
		TArray<float>& Buffer, \
		int32& LastInsertIndex \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const int32 BufferSize, \
		float& Result, \
		TArray<float>& Buffer, \
		int32& LastInsertIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		TArray<float>& Buffer = *(TArray<float>*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			BufferSize, \
			Result, \
			Buffer, \
			LastInsertIndex \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_KalmanFloat;
// ********** End ScriptStruct FRigVMFunction_KalmanFloat ******************************************

// ********** Begin ScriptStruct FRigVMFunction_KalmanVector ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics;

#define FRigVMFunction_KalmanVector_Execute() \
	void FRigVMFunction_KalmanVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const int32 BufferSize, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		int32& LastInsertIndex \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const int32 BufferSize, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		int32& LastInsertIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		TArray<FVector>& Buffer = *(TArray<FVector>*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			BufferSize, \
			Result, \
			Buffer, \
			LastInsertIndex \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_KalmanVector;
// ********** End ScriptStruct FRigVMFunction_KalmanVector *****************************************

// ********** Begin ScriptStruct FRigVMFunction_KalmanTransform ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics;

#define FRigVMFunction_KalmanTransform_Execute() \
	void FRigVMFunction_KalmanTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const int32 BufferSize, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		int32& LastInsertIndex \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const int32 BufferSize, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		int32& LastInsertIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		TArray<FTransform>& Buffer = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			BufferSize, \
			Result, \
			Buffer, \
			LastInsertIndex \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_KalmanTransform;
// ********** End ScriptStruct FRigVMFunction_KalmanTransform **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
