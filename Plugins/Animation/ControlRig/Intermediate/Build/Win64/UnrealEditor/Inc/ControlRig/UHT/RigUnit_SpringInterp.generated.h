// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Simulation/RigUnit_SpringInterp.h"

#ifdef CONTROLRIG_RigUnit_SpringInterp_generated_h
#error "RigUnit_SpringInterp.generated.h already included, missing '#pragma once' in RigUnit_SpringInterp.h"
#endif
#define CONTROLRIG_RigUnit_SpringInterp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SpringInterp *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics;

#define FRigUnit_SpringInterp_Execute() \
	void FRigUnit_SpringInterp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Current, \
		const float Target, \
		const float Stiffness, \
		const float CriticalDamping, \
		const float Mass, \
		float& Result, \
		FFloatSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_SpringInterp_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Current, \
		const float Target, \
		const float Stiffness, \
		const float CriticalDamping, \
		const float Mass, \
		float& Result, \
		FFloatSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Current = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Target = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Stiffness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Mass = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		FFloatSpringState& SpringState = *(FFloatSpringState*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Current, \
			Target, \
			Stiffness, \
			CriticalDamping, \
			Mass, \
			Result, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigUnit_SpringInterp;
// ********** End ScriptStruct FRigUnit_SpringInterp ***********************************************

// ********** Begin ScriptStruct FRigUnit_SpringInterpVector ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics;

#define FRigUnit_SpringInterpVector_Execute() \
	void FRigUnit_SpringInterpVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Current, \
		const FVector& Target, \
		const float Stiffness, \
		const float CriticalDamping, \
		const float Mass, \
		FVector& Result, \
		FVectorSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_SpringInterp_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Current, \
		const FVector& Target, \
		const float Stiffness, \
		const float CriticalDamping, \
		const float Mass, \
		FVector& Result, \
		FVectorSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Current = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float Stiffness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Mass = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		FVectorSpringState& SpringState = *(FVectorSpringState*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Current, \
			Target, \
			Stiffness, \
			CriticalDamping, \
			Mass, \
			Result, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigUnit_SpringInterpVector;
// ********** End ScriptStruct FRigUnit_SpringInterpVector *****************************************

// ********** Begin ScriptStruct FRigUnit_SpringInterpV2 *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics;

#define FRigUnit_SpringInterpV2_Execute() \
	void FRigUnit_SpringInterpV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Target, \
		const float Strength, \
		const float CriticalDamping, \
		const float Force, \
		const bool bUseCurrentInput, \
		const float Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		float& Result, \
		float& Velocity, \
		float& SimulatedResult, \
		FFloatSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_SpringInterp_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Target, \
		const float Strength, \
		const float CriticalDamping, \
		const float Force, \
		const bool bUseCurrentInput, \
		const float Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		float& Result, \
		float& Velocity, \
		float& SimulatedResult, \
		FFloatSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Target = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Force = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bUseCurrentInput = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const float Current = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const float TargetVelocityAmount = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bInitializeFromTarget = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[8].GetOutputData(); \
		float& Velocity = *(float*)RigVMMemoryHandles[9].GetOutputData(); \
		float& SimulatedResult = *(float*)RigVMMemoryHandles[10].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FFloatSpringState& SpringState = *(FFloatSpringState*)RigVMMemoryHandles[11].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Target, \
			Strength, \
			CriticalDamping, \
			Force, \
			bUseCurrentInput, \
			Current, \
			TargetVelocityAmount, \
			bInitializeFromTarget, \
			Result, \
			Velocity, \
			SimulatedResult, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigUnit_SpringInterpV2;
// ********** End ScriptStruct FRigUnit_SpringInterpV2 *********************************************

// ********** Begin ScriptStruct FRigUnit_SpringInterpVectorV2 *************************************
struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics;

#define FRigUnit_SpringInterpVectorV2_Execute() \
	void FRigUnit_SpringInterpVectorV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Force, \
		const bool bUseCurrentInput, \
		const FVector& Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		FVector& Result, \
		FVector& Velocity, \
		FVector& SimulatedResult, \
		FVectorSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_SpringInterp_h_197_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Force, \
		const bool bUseCurrentInput, \
		const FVector& Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		FVector& Result, \
		FVector& Velocity, \
		FVector& SimulatedResult, \
		FVectorSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& Force = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bUseCurrentInput = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const FVector& Current = *(FVector*)RigVMMemoryHandles[5].GetInputData(); \
		const float TargetVelocityAmount = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bInitializeFromTarget = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[8].GetOutputData(); \
		FVector& Velocity = *(FVector*)RigVMMemoryHandles[9].GetOutputData(); \
		FVector& SimulatedResult = *(FVector*)RigVMMemoryHandles[10].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FVectorSpringState& SpringState = *(FVectorSpringState*)RigVMMemoryHandles[11].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Target, \
			Strength, \
			CriticalDamping, \
			Force, \
			bUseCurrentInput, \
			Current, \
			TargetVelocityAmount, \
			bInitializeFromTarget, \
			Result, \
			Velocity, \
			SimulatedResult, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigUnit_SpringInterpVectorV2;
// ********** End ScriptStruct FRigUnit_SpringInterpVectorV2 ***************************************

// ********** Begin ScriptStruct FRigUnit_SpringInterpQuaternionV2 *********************************
struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics;

#define FRigUnit_SpringInterpQuaternionV2_Execute() \
	void FRigUnit_SpringInterpQuaternionV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Torque, \
		const bool bUseCurrentInput, \
		const FQuat& Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		FQuat& Result, \
		FVector& AngularVelocity, \
		FQuat& SimulatedResult, \
		FQuaternionSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_SpringInterp_h_287_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Torque, \
		const bool bUseCurrentInput, \
		const FQuat& Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		FQuat& Result, \
		FVector& AngularVelocity, \
		FQuat& SimulatedResult, \
		FQuaternionSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Target = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& Torque = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bUseCurrentInput = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const FQuat& Current = *(FQuat*)RigVMMemoryHandles[5].GetInputData(); \
		const float TargetVelocityAmount = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bInitializeFromTarget = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[8].GetOutputData(); \
		FVector& AngularVelocity = *(FVector*)RigVMMemoryHandles[9].GetOutputData(); \
		FQuat& SimulatedResult = *(FQuat*)RigVMMemoryHandles[10].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FQuaternionSpringState& SpringState = *(FQuaternionSpringState*)RigVMMemoryHandles[11].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Target, \
			Strength, \
			CriticalDamping, \
			Torque, \
			bUseCurrentInput, \
			Current, \
			TargetVelocityAmount, \
			bInitializeFromTarget, \
			Result, \
			AngularVelocity, \
			SimulatedResult, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigUnit_SpringInterpQuaternionV2;
// ********** End ScriptStruct FRigUnit_SpringInterpQuaternionV2 ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_SpringInterp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
