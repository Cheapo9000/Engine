// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_Random.h"

#ifdef RIGVM_RigVMFunction_Random_generated_h
#error "RigVMFunction_Random.generated.h already included, missing '#pragma once' in RigVMFunction_Random.h"
#endif
#define RIGVM_RigVMFunction_Random_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_RandomFloat ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics;

#define FRigVMFunction_RandomFloat_Execute() \
	void FRigVMFunction_RandomFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		float& Result, \
		float& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		float& Result, \
		float& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Seed = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Duration = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetOutputData(); \
		float& LastResult = *(float*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastSeed = *(int32*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& BaseSeed = *(int32*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Seed, \
			Minimum, \
			Maximum, \
			Duration, \
			Result, \
			LastResult, \
			LastSeed, \
			BaseSeed, \
			TimeLeft \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_RandomFloat;
// ********** End ScriptStruct FRigVMFunction_RandomFloat ******************************************

// ********** Begin ScriptStruct FRigVMFunction_RandomVector ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics;

#define FRigVMFunction_RandomVector_Execute() \
	void FRigVMFunction_RandomVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		FVector& Result, \
		FVector& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		FVector& Result, \
		FVector& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Seed = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Duration = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		FVector& LastResult = *(FVector*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastSeed = *(int32*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& BaseSeed = *(int32*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Seed, \
			Minimum, \
			Maximum, \
			Duration, \
			Result, \
			LastResult, \
			LastSeed, \
			BaseSeed, \
			TimeLeft \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_RandomVector;
// ********** End ScriptStruct FRigVMFunction_RandomVector *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
