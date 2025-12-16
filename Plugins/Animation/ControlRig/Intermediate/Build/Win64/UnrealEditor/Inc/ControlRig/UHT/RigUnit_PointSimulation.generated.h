// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Simulation/RigUnit_PointSimulation.h"

#ifdef CONTROLRIG_RigUnit_PointSimulation_generated_h
#error "RigUnit_PointSimulation.generated.h already included, missing '#pragma once' in RigUnit_PointSimulation.h"
#endif
#define CONTROLRIG_RigUnit_PointSimulation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_PointSimulation_DebugSettings ****************************
struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_PointSimulation_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_PointSimulation_DebugSettings;
// ********** End ScriptStruct FRigUnit_PointSimulation_DebugSettings ******************************

// ********** Begin ScriptStruct FRigUnit_PointSimulation_BoneTarget *******************************
struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_PointSimulation_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_PointSimulation_BoneTarget;
// ********** End ScriptStruct FRigUnit_PointSimulation_BoneTarget *********************************

// ********** Begin ScriptStruct FRigUnit_PointSimulation_WorkData *********************************
struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_PointSimulation_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_PointSimulation_WorkData;
// ********** End ScriptStruct FRigUnit_PointSimulation_WorkData ***********************************

// ********** Begin ScriptStruct FRigUnit_PointSimulation ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics;

#define FRigUnit_PointSimulation_Execute() \
	void FRigUnit_PointSimulation::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FRigVMSimPoint>& Points, \
		const TArrayView<const FCRSimLinearSpring>& Links, \
		const TArrayView<const FCRSimPointForce>& Forces, \
		const TArrayView<const FCRSimSoftCollision>& CollisionVolumes, \
		const float SimulatedStepsPerSecond, \
		const ERigVMSimPointIntegrateType IntegratorType, \
		const float VerletBlend, \
		const TArrayView<const FRigUnit_PointSimulation_BoneTarget>& BoneTargets, \
		const bool bLimitLocalPosition, \
		const bool bPropagateToChildren, \
		const FVector& PrimaryAimAxis, \
		const FVector& SecondaryAimAxis, \
		const FRigUnit_PointSimulation_DebugSettings& DebugSettings, \
		FRigVMFourPointBezier& Bezier, \
		FRigUnit_PointSimulation_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_PointSimulation_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FRigVMSimPoint>& Points, \
		const TArrayView<const FCRSimLinearSpring>& Links, \
		const TArrayView<const FCRSimPointForce>& Forces, \
		const TArrayView<const FCRSimSoftCollision>& CollisionVolumes, \
		const float SimulatedStepsPerSecond, \
		const ERigVMSimPointIntegrateType IntegratorType, \
		const float VerletBlend, \
		const TArrayView<const FRigUnit_PointSimulation_BoneTarget>& BoneTargets, \
		const bool bLimitLocalPosition, \
		const bool bPropagateToChildren, \
		const FVector& PrimaryAimAxis, \
		const FVector& SecondaryAimAxis, \
		const FRigUnit_PointSimulation_DebugSettings& DebugSettings, \
		FRigVMFourPointBezier& Bezier, \
		FRigUnit_PointSimulation_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigVMSimPoint>& Points = *(TArray<FRigVMSimPoint>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FCRSimLinearSpring>& Links = *(TArray<FCRSimLinearSpring>*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FCRSimPointForce>& Forces = *(TArray<FCRSimPointForce>*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<FCRSimSoftCollision>& CollisionVolumes = *(TArray<FCRSimSoftCollision>*)RigVMMemoryHandles[3].GetInputData(); \
		const float SimulatedStepsPerSecond = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const ERigVMSimPointIntegrateType IntegratorType = *(ERigVMSimPointIntegrateType*)RigVMMemoryHandles[5].GetInputData(); \
		const float VerletBlend = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		TArray<FRigUnit_PointSimulation_BoneTarget>& BoneTargets = *(TArray<FRigUnit_PointSimulation_BoneTarget>*)RigVMMemoryHandles[7].GetInputData(); \
		const bool bLimitLocalPosition = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[9].GetInputData(); \
		const FVector& PrimaryAimAxis = *(FVector*)RigVMMemoryHandles[10].GetInputData(); \
		const FVector& SecondaryAimAxis = *(FVector*)RigVMMemoryHandles[11].GetInputData(); \
		const FRigUnit_PointSimulation_DebugSettings& DebugSettings = *(FRigUnit_PointSimulation_DebugSettings*)RigVMMemoryHandles[12].GetInputData(); \
		FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[13].GetOutputData(); \
		FRigUnit_PointSimulation_WorkData& WorkData = *(FRigUnit_PointSimulation_WorkData*)RigVMMemoryHandles[14].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Points, \
			Links, \
			Forces, \
			CollisionVolumes, \
			SimulatedStepsPerSecond, \
			IntegratorType, \
			VerletBlend, \
			BoneTargets, \
			bLimitLocalPosition, \
			bPropagateToChildren, \
			PrimaryAimAxis, \
			SecondaryAimAxis, \
			DebugSettings, \
			Bezier, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_SimBaseMutable Super;


struct FRigUnit_PointSimulation;
// ********** End ScriptStruct FRigUnit_PointSimulation ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_PointSimulation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
