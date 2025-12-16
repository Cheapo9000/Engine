// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_Verlet.h"

#ifdef RIGVM_RigVMFunction_Verlet_generated_h
#error "RigVMFunction_Verlet.generated.h already included, missing '#pragma once' in RigVMFunction_Verlet.h"
#endif
#define RIGVM_RigVMFunction_Verlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_VerletIntegrateVector ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics;

#define FRigVMFunction_VerletIntegrateVector_Execute() \
	void FRigVMFunction_VerletIntegrateVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float Damp, \
		const float Blend, \
		const FVector& Force, \
		FVector& Position, \
		FVector& Velocity, \
		FVector& Acceleration, \
		FRigVMSimPoint& Point, \
		bool& bInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Verlet_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float Damp, \
		const float Blend, \
		const FVector& Force, \
		FVector& Position, \
		FVector& Velocity, \
		FVector& Acceleration, \
		FRigVMSimPoint& Point, \
		bool& bInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Damp = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Blend = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FVector& Force = *(FVector*)RigVMMemoryHandles[4].GetInputData(); \
		FVector& Position = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		FVector& Velocity = *(FVector*)RigVMMemoryHandles[6].GetOutputData(); \
		FVector& Acceleration = *(FVector*)RigVMMemoryHandles[7].GetOutputData(); \
		FRigVMSimPoint& Point = *(FRigVMSimPoint*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bInitialized = *(bool*)RigVMMemoryHandles[9].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Target, \
			Strength, \
			Damp, \
			Blend, \
			Force, \
			Position, \
			Velocity, \
			Acceleration, \
			Point, \
			bInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_VerletIntegrateVector;
// ********** End ScriptStruct FRigVMFunction_VerletIntegrateVector ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Verlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
