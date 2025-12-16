// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigPhysicsExecution.h"

#ifdef CONTROLRIGPHYSICS_RigPhysicsExecution_generated_h
#error "RigPhysicsExecution.generated.h already included, missing '#pragma once' in RigPhysicsExecution.h"
#endif
#define CONTROLRIGPHYSICS_RigPhysicsExecution_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_PhysicsBaseMutable ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_PhysicsBaseMutable_Statics;
#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PhysicsBaseMutable_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


struct FRigUnit_PhysicsBaseMutable;
// ********** End ScriptStruct FRigUnit_PhysicsBaseMutable *****************************************

// ********** Begin ScriptStruct FRigUnit_PhysicsBase **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_PhysicsBase_Statics;
#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PhysicsBase_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_PhysicsBase;
// ********** End ScriptStruct FRigUnit_PhysicsBase ************************************************

// ********** Begin ScriptStruct FRigUnit_AddPhysicsSolver *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_AddPhysicsSolver_Statics;

#define FRigUnit_AddPhysicsSolver_Execute() \
	void FRigUnit_AddPhysicsSolver::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		FRigComponentKey& PhysicsSolverComponentKey, \
		const FRigPhysicsSolverSettings& SolverSettings, \
		const FRigPhysicsSimulationSpaceSettings& SimulationSpaceSettings \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AddPhysicsSolver_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		FRigComponentKey& PhysicsSolverComponentKey, \
		const FRigPhysicsSolverSettings& SolverSettings, \
		const FRigPhysicsSimulationSpaceSettings& SimulationSpaceSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Owner = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		FRigComponentKey& PhysicsSolverComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[1].GetOutputData(); \
		const FRigPhysicsSolverSettings& SolverSettings = *(FRigPhysicsSolverSettings*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigPhysicsSimulationSpaceSettings& SimulationSpaceSettings = *(FRigPhysicsSimulationSpaceSettings*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Owner, \
			PhysicsSolverComponentKey, \
			SolverSettings, \
			SimulationSpaceSettings \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_AddPhysicsSolver;
// ********** End ScriptStruct FRigUnit_AddPhysicsSolver *******************************************

// ********** Begin ScriptStruct FRigUnit_InstantiatePhysics ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_InstantiatePhysics_Statics;

#define FRigUnit_InstantiatePhysics_Execute() \
	void FRigUnit_InstantiatePhysics::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_InstantiatePhysics_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsSolverComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsSolverComponentKey \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_InstantiatePhysics;
// ********** End ScriptStruct FRigUnit_InstantiatePhysics *****************************************

// ********** Begin ScriptStruct FRigUnit_StepPhysicsSolver ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_StepPhysicsSolver_Statics;

#define FRigUnit_StepPhysicsSolver_Execute() \
	void FRigUnit_StepPhysicsSolver::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const float DeltaTimeOverride, \
		const float SimulationSpaceDeltaTimeOverride, \
		const float Alpha, \
		const FRigPhysicsVisualizationSettings& VisualizationSettings \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_StepPhysicsSolver_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const float DeltaTimeOverride, \
		const float SimulationSpaceDeltaTimeOverride, \
		const float Alpha, \
		const FRigPhysicsVisualizationSettings& VisualizationSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsSolverComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const float DeltaTimeOverride = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float SimulationSpaceDeltaTimeOverride = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Alpha = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigPhysicsVisualizationSettings& VisualizationSettings = *(FRigPhysicsVisualizationSettings*)RigVMMemoryHandles[4].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsSolverComponentKey, \
			DeltaTimeOverride, \
			SimulationSpaceDeltaTimeOverride, \
			Alpha, \
			VisualizationSettings \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_StepPhysicsSolver;
// ********** End ScriptStruct FRigUnit_StepPhysicsSolver ******************************************

// ********** Begin ScriptStruct FRigUnit_SetPhysicsSolverSimulationSpaceSettings ******************
struct Z_Construct_UScriptStruct_FRigUnit_SetPhysicsSolverSimulationSpaceSettings_Statics;

#define FRigUnit_SetPhysicsSolverSimulationSpaceSettings_Execute() \
	void FRigUnit_SetPhysicsSolverSimulationSpaceSettings::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const FRigPhysicsSimulationSpaceSettings& SimulationSpaceSettings \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_146_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetPhysicsSolverSimulationSpaceSettings_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const FRigPhysicsSimulationSpaceSettings& SimulationSpaceSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsSolverComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigPhysicsSimulationSpaceSettings& SimulationSpaceSettings = *(FRigPhysicsSimulationSpaceSettings*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsSolverComponentKey, \
			SimulationSpaceSettings \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_SetPhysicsSolverSimulationSpaceSettings;
// ********** End ScriptStruct FRigUnit_SetPhysicsSolverSimulationSpaceSettings ********************

// ********** Begin ScriptStruct FRigUnit_SetPhysicsSolverExternalVelocity *************************
struct Z_Construct_UScriptStruct_FRigUnit_SetPhysicsSolverExternalVelocity_Statics;

#define FRigUnit_SetPhysicsSolverExternalVelocity_Execute() \
	void FRigUnit_SetPhysicsSolverExternalVelocity::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const FVector& ExternalLinearVelocity, \
		const FVector& ExternalAngularVelocity, \
		const FVector& ExternalTurbulenceVelocity \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_170_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetPhysicsSolverExternalVelocity_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const FVector& ExternalLinearVelocity, \
		const FVector& ExternalAngularVelocity, \
		const FVector& ExternalTurbulenceVelocity \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsSolverComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& ExternalLinearVelocity = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& ExternalAngularVelocity = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& ExternalTurbulenceVelocity = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsSolverComponentKey, \
			ExternalLinearVelocity, \
			ExternalAngularVelocity, \
			ExternalTurbulenceVelocity \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_SetPhysicsSolverExternalVelocity;
// ********** End ScriptStruct FRigUnit_SetPhysicsSolverExternalVelocity ***************************

// ********** Begin ScriptStruct FRigUnit_TrackInputPose *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_TrackInputPose_Statics;

#define FRigUnit_TrackInputPose_Execute() \
	void FRigUnit_TrackInputPose::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const int32 NumberOfFrames, \
		const bool bForceNumberOfFrames \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_211_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TrackInputPose_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const int32 NumberOfFrames, \
		const bool bForceNumberOfFrames \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsSolverComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 NumberOfFrames = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bForceNumberOfFrames = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsSolverComponentKey, \
			NumberOfFrames, \
			bForceNumberOfFrames \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_TrackInputPose;
// ********** End ScriptStruct FRigUnit_TrackInputPose *********************************************

// ********** Begin ScriptStruct FRigUnit_AddPhysicsComponents *************************************
struct Z_Construct_UScriptStruct_FRigUnit_AddPhysicsComponents_Statics;

#define FRigUnit_AddPhysicsComponents_Execute() \
	void FRigUnit_AddPhysicsComponents::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		const bool bAddJoint, \
		const bool bAddSimSpaceControl, \
		const bool bAddParentSpaceControl, \
		FRigComponentKey& PhysicsBodyComponentKey, \
		FRigComponentKey& PhysicsJointComponentKey, \
		FRigComponentKey& SimSpaceControlComponentKey, \
		FRigComponentKey& ParentSpaceControlComponentKey, \
		const FRigPhysicsBodySolverSettings& Solver, \
		const FRigPhysicsDynamics& Dynamics, \
		const FRigPhysicsCollision& Collision, \
		const FPhysicsControlModifierData& BodyData, \
		const FRigPhysicsJointData& JointData, \
		const FRigPhysicsDriveData& DriveData, \
		const FPhysicsControlData& SimSpaceControlData, \
		const FPhysicsControlData& ParentSpaceControlData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_241_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AddPhysicsComponents_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		const bool bAddJoint, \
		const bool bAddSimSpaceControl, \
		const bool bAddParentSpaceControl, \
		FRigComponentKey& PhysicsBodyComponentKey, \
		FRigComponentKey& PhysicsJointComponentKey, \
		FRigComponentKey& SimSpaceControlComponentKey, \
		FRigComponentKey& ParentSpaceControlComponentKey, \
		const FRigPhysicsBodySolverSettings& Solver, \
		const FRigPhysicsDynamics& Dynamics, \
		const FRigPhysicsCollision& Collision, \
		const FPhysicsControlModifierData& BodyData, \
		const FRigPhysicsJointData& JointData, \
		const FRigPhysicsDriveData& DriveData, \
		const FPhysicsControlData& SimSpaceControlData, \
		const FPhysicsControlData& ParentSpaceControlData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Owner = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bAddJoint = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bAddSimSpaceControl = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bAddParentSpaceControl = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[4].GetOutputData(); \
		FRigComponentKey& PhysicsJointComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[5].GetOutputData(); \
		FRigComponentKey& SimSpaceControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[6].GetOutputData(); \
		FRigComponentKey& ParentSpaceControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[7].GetOutputData(); \
		const FRigPhysicsBodySolverSettings& Solver = *(FRigPhysicsBodySolverSettings*)RigVMMemoryHandles[8].GetInputData(); \
		const FRigPhysicsDynamics& Dynamics = *(FRigPhysicsDynamics*)RigVMMemoryHandles[9].GetInputData(); \
		const FRigPhysicsCollision& Collision = *(FRigPhysicsCollision*)RigVMMemoryHandles[10].GetInputData(); \
		const FPhysicsControlModifierData& BodyData = *(FPhysicsControlModifierData*)RigVMMemoryHandles[11].GetInputData(); \
		const FRigPhysicsJointData& JointData = *(FRigPhysicsJointData*)RigVMMemoryHandles[12].GetInputData(); \
		const FRigPhysicsDriveData& DriveData = *(FRigPhysicsDriveData*)RigVMMemoryHandles[13].GetInputData(); \
		const FPhysicsControlData& SimSpaceControlData = *(FPhysicsControlData*)RigVMMemoryHandles[14].GetInputData(); \
		const FPhysicsControlData& ParentSpaceControlData = *(FPhysicsControlData*)RigVMMemoryHandles[15].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Owner, \
			bAddJoint, \
			bAddSimSpaceControl, \
			bAddParentSpaceControl, \
			PhysicsBodyComponentKey, \
			PhysicsJointComponentKey, \
			SimSpaceControlComponentKey, \
			ParentSpaceControlComponentKey, \
			Solver, \
			Dynamics, \
			Collision, \
			BodyData, \
			JointData, \
			DriveData, \
			SimSpaceControlData, \
			ParentSpaceControlData \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_AddPhysicsComponents;
// ********** End ScriptStruct FRigUnit_AddPhysicsComponents ***************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyImportCollisionFromPhysicsAsset *****************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyImportCollisionFromPhysicsAsset_Statics;

#define FRigUnit_HierarchyImportCollisionFromPhysicsAsset_Execute() \
	void FRigUnit_HierarchyImportCollisionFromPhysicsAsset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const bool bUseAutomaticSolver, \
		const TObjectPtr<UPhysicsAsset>& PhysicsAsset, \
		const FName& ConstraintProfileName, \
		const TArrayView<const FName>& BonesToUse, \
		const FName& NameSpace, \
		const FRigElementKey& Owner, \
		TArray<FRigElementKey>& BoneKeys, \
		TArray<FRigComponentKey>& PhysicsBodyComponentKeys \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_318_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyImportCollisionFromPhysicsAsset_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const bool bUseAutomaticSolver, \
		const TObjectPtr<UPhysicsAsset>& PhysicsAsset, \
		const FName& ConstraintProfileName, \
		const TArrayView<const FName>& BonesToUse, \
		const FName& NameSpace, \
		const FRigElementKey& Owner, \
		TArray<FRigElementKey>& BoneKeys, \
		TArray<FRigComponentKey>& PhysicsBodyComponentKeys \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsSolverComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bUseAutomaticSolver = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const TObjectPtr<UPhysicsAsset>& PhysicsAsset = *(TObjectPtr<UPhysicsAsset>*)RigVMMemoryHandles[2].GetInputData(); \
		const FName& ConstraintProfileName = *(FName*)RigVMMemoryHandles[3].GetInputData(); \
		TArray<FName>& BonesToUse = *(TArray<FName>*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& NameSpace = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigElementKey& Owner = *(FRigElementKey*)RigVMMemoryHandles[6].GetInputData(); \
		TArray<FRigElementKey>& BoneKeys = *(TArray<FRigElementKey>*)RigVMMemoryHandles[7].GetOutputData(); \
		TArray<FRigComponentKey>& PhysicsBodyComponentKeys = *(TArray<FRigComponentKey>*)RigVMMemoryHandles[8].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsSolverComponentKey, \
			bUseAutomaticSolver, \
			PhysicsAsset, \
			ConstraintProfileName, \
			BonesToUse, \
			NameSpace, \
			Owner, \
			BoneKeys, \
			PhysicsBodyComponentKeys \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchyImportCollisionFromPhysicsAsset;
// ********** End ScriptStruct FRigUnit_HierarchyImportCollisionFromPhysicsAsset *******************

// ********** Begin ScriptStruct FRigUnit_HierarchyInstantiateFromPhysicsAsset *********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyInstantiateFromPhysicsAsset_Statics;

#define FRigUnit_HierarchyInstantiateFromPhysicsAsset_Execute() \
	void FRigUnit_HierarchyInstantiateFromPhysicsAsset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const bool bUseAutomaticSolver, \
		const TObjectPtr<UPhysicsAsset>& PhysicsAsset, \
		const FName& ConstraintProfileName, \
		const TArrayView<const FRigElementKey>& BonesToUse, \
		const bool bEnableJoints, \
		const bool bEnableDrives, \
		const bool bAddSimSpaceControl, \
		const bool bAddParentSpaceControl, \
		const FPhysicsControlData& SimSpaceControlData, \
		const FPhysicsControlData& ParentSpaceControlData, \
		TArray<FRigComponentKey>& PhysicsBodyComponentKeys, \
		TArray<FRigComponentKey>& PhysicsJointComponentKeys, \
		TArray<FRigComponentKey>& SimSpaceControlComponentKeys, \
		TArray<FRigComponentKey>& ParentSpaceControlComponentKeys \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_372_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyInstantiateFromPhysicsAsset_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		const bool bUseAutomaticSolver, \
		const TObjectPtr<UPhysicsAsset>& PhysicsAsset, \
		const FName& ConstraintProfileName, \
		const TArrayView<const FRigElementKey>& BonesToUse, \
		const bool bEnableJoints, \
		const bool bEnableDrives, \
		const bool bAddSimSpaceControl, \
		const bool bAddParentSpaceControl, \
		const FPhysicsControlData& SimSpaceControlData, \
		const FPhysicsControlData& ParentSpaceControlData, \
		TArray<FRigComponentKey>& PhysicsBodyComponentKeys, \
		TArray<FRigComponentKey>& PhysicsJointComponentKeys, \
		TArray<FRigComponentKey>& SimSpaceControlComponentKeys, \
		TArray<FRigComponentKey>& ParentSpaceControlComponentKeys \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsSolverComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bUseAutomaticSolver = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const TObjectPtr<UPhysicsAsset>& PhysicsAsset = *(TObjectPtr<UPhysicsAsset>*)RigVMMemoryHandles[2].GetInputData(); \
		const FName& ConstraintProfileName = *(FName*)RigVMMemoryHandles[3].GetInputData(); \
		TArray<FRigElementKey>& BonesToUse = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bEnableJoints = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bEnableDrives = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bAddSimSpaceControl = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		const bool bAddParentSpaceControl = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		const FPhysicsControlData& SimSpaceControlData = *(FPhysicsControlData*)RigVMMemoryHandles[9].GetInputData(); \
		const FPhysicsControlData& ParentSpaceControlData = *(FPhysicsControlData*)RigVMMemoryHandles[10].GetInputData(); \
		TArray<FRigComponentKey>& PhysicsBodyComponentKeys = *(TArray<FRigComponentKey>*)RigVMMemoryHandles[11].GetOutputData(); \
		TArray<FRigComponentKey>& PhysicsJointComponentKeys = *(TArray<FRigComponentKey>*)RigVMMemoryHandles[12].GetOutputData(); \
		TArray<FRigComponentKey>& SimSpaceControlComponentKeys = *(TArray<FRigComponentKey>*)RigVMMemoryHandles[13].GetOutputData(); \
		TArray<FRigComponentKey>& ParentSpaceControlComponentKeys = *(TArray<FRigComponentKey>*)RigVMMemoryHandles[14].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsSolverComponentKey, \
			bUseAutomaticSolver, \
			PhysicsAsset, \
			ConstraintProfileName, \
			BonesToUse, \
			bEnableJoints, \
			bEnableDrives, \
			bAddSimSpaceControl, \
			bAddParentSpaceControl, \
			SimSpaceControlData, \
			ParentSpaceControlData, \
			PhysicsBodyComponentKeys, \
			PhysicsJointComponentKeys, \
			SimSpaceControlComponentKeys, \
			ParentSpaceControlComponentKeys \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchyInstantiateFromPhysicsAsset;
// ********** End ScriptStruct FRigUnit_HierarchyInstantiateFromPhysicsAsset ***********************

// ********** Begin ScriptStruct FRigUnit_GetPhysicsSolverSpaceData ********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetPhysicsSolverSpaceData_Statics;

#define FRigUnit_GetPhysicsSolverSpaceData_Execute() \
	void FRigUnit_GetPhysicsSolverSpaceData::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		FVector& LinearVelocity, \
		FVector& AngularVelocity, \
		FVector& LinearAcceleration, \
		FVector& AngularAcceleration, \
		FVector& Gravity \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h_450_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetPhysicsSolverSpaceData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsSolverComponentKey, \
		FVector& LinearVelocity, \
		FVector& AngularVelocity, \
		FVector& LinearAcceleration, \
		FVector& AngularAcceleration, \
		FVector& Gravity \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsSolverComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& LinearVelocity = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		FVector& AngularVelocity = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		FVector& LinearAcceleration = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		FVector& AngularAcceleration = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		FVector& Gravity = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsSolverComponentKey, \
			LinearVelocity, \
			AngularVelocity, \
			LinearAcceleration, \
			AngularAcceleration, \
			Gravity \
		); \
	} \
	typedef FRigUnit_PhysicsBase Super;


struct FRigUnit_GetPhysicsSolverSpaceData;
// ********** End ScriptStruct FRigUnit_GetPhysicsSolverSpaceData **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsExecution_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
