// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_Timeline.h"

#ifdef RIGVM_RigVMFunction_Timeline_generated_h
#error "RigVMFunction_Timeline.generated.h already included, missing '#pragma once' in RigVMFunction_Timeline.h"
#endif
#define RIGVM_RigVMFunction_Timeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_Timeline *******************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_Timeline_Statics;

#define FRigVMFunction_Timeline_Execute() \
	void FRigVMFunction_Timeline::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Speed, \
		float& Time, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Timeline_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_Timeline_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Speed, \
		float& Time, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Speed = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Time = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Speed, \
			Time, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_Timeline;
// ********** End ScriptStruct FRigVMFunction_Timeline *********************************************

// ********** Begin ScriptStruct FRigVMFunction_TimeLoop *******************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_TimeLoop_Statics;

#define FRigVMFunction_TimeLoop_Execute() \
	void FRigVMFunction_TimeLoop::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Speed, \
		const float Duration, \
		const bool Normalize, \
		float& Absolute, \
		float& Relative, \
		float& FlipFlop, \
		bool& Even, \
		float& AccumulatedAbsolute, \
		float& AccumulatedRelative, \
		int32& NumIterations, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Timeline_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_TimeLoop_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Speed, \
		const float Duration, \
		const bool Normalize, \
		float& Absolute, \
		float& Relative, \
		float& FlipFlop, \
		bool& Even, \
		float& AccumulatedAbsolute, \
		float& AccumulatedRelative, \
		int32& NumIterations, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Speed = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Duration = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const bool Normalize = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		float& Absolute = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		float& Relative = *(float*)RigVMMemoryHandles[4].GetOutputData(); \
		float& FlipFlop = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		bool& Even = *(bool*)RigVMMemoryHandles[6].GetOutputData(); \
		float& AccumulatedAbsolute = *(float*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		float& AccumulatedRelative = *(float*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& NumIterations = *(int32*)RigVMMemoryHandles[9].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[10].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Speed, \
			Duration, \
			Normalize, \
			Absolute, \
			Relative, \
			FlipFlop, \
			Even, \
			AccumulatedAbsolute, \
			AccumulatedRelative, \
			NumIterations, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_TimeLoop;
// ********** End ScriptStruct FRigVMFunction_TimeLoop *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Timeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
