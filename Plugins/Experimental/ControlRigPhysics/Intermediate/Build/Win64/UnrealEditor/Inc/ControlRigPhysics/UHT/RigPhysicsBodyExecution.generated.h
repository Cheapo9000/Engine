// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigPhysicsBodyExecution.h"

#ifdef CONTROLRIGPHYSICS_RigPhysicsBodyExecution_generated_h
#error "RigPhysicsBodyExecution.generated.h already included, missing '#pragma once' in RigPhysicsBodyExecution.h"
#endif
#define CONTROLRIGPHYSICS_RigPhysicsBodyExecution_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AddPhysicsBody *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_AddPhysicsBody_Statics;

#define FRigUnit_AddPhysicsBody_Execute() \
	void FRigUnit_AddPhysicsBody::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigPhysicsBodySolverSettings& Solver, \
		const FRigPhysicsDynamics& Dynamics, \
		const FRigPhysicsCollision& Collision, \
		const FPhysicsControlModifierData& BodyData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AddPhysicsBody_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigPhysicsBodySolverSettings& Solver, \
		const FRigPhysicsDynamics& Dynamics, \
		const FRigPhysicsCollision& Collision, \
		const FPhysicsControlModifierData& BodyData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Owner = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[1].GetOutputData(); \
		const FRigPhysicsBodySolverSettings& Solver = *(FRigPhysicsBodySolverSettings*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigPhysicsDynamics& Dynamics = *(FRigPhysicsDynamics*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigPhysicsCollision& Collision = *(FRigPhysicsCollision*)RigVMMemoryHandles[4].GetInputData(); \
		const FPhysicsControlModifierData& BodyData = *(FPhysicsControlModifierData*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Owner, \
			PhysicsBodyComponentKey, \
			Solver, \
			Dynamics, \
			Collision, \
			BodyData \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_AddPhysicsBody;
// ********** End ScriptStruct FRigUnit_AddPhysicsBody *********************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAutoCalculateCollision **************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAutoCalculateCollision_Statics;

#define FRigUnit_HierarchyAutoCalculateCollision_Execute() \
	void FRigUnit_HierarchyAutoCalculateCollision::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const float MinAspectRatio, \
		const float MinSize \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAutoCalculateCollision_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const float MinAspectRatio, \
		const float MinSize \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const float MinAspectRatio = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float MinSize = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			MinAspectRatio, \
			MinSize \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchyAutoCalculateCollision;
// ********** End ScriptStruct FRigUnit_HierarchyAutoCalculateCollision ****************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetDynamics *************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetDynamics_Statics;

#define FRigUnit_HierarchySetDynamics_Execute() \
	void FRigUnit_HierarchySetDynamics::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigPhysicsDynamics& Dynamics \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetDynamics_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigPhysicsDynamics& Dynamics \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigPhysicsDynamics& Dynamics = *(FRigPhysicsDynamics*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			Dynamics \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetDynamics;
// ********** End ScriptStruct FRigUnit_HierarchySetDynamics ***************************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetCollision ************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetCollision_Statics;

#define FRigUnit_HierarchySetCollision_Execute() \
	void FRigUnit_HierarchySetCollision::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigPhysicsCollision& Collision \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_120_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetCollision_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigPhysicsCollision& Collision \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigPhysicsCollision& Collision = *(FRigPhysicsCollision*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			Collision \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetCollision;
// ********** End ScriptStruct FRigUnit_HierarchySetCollision **************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyDisableCollisionBetween *************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyDisableCollisionBetween_Statics;

#define FRigUnit_HierarchyDisableCollisionBetween_Execute() \
	void FRigUnit_HierarchyDisableCollisionBetween::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey1, \
		const FRigComponentKey& PhysicsBodyComponentKey2 \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyDisableCollisionBetween_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey1, \
		const FRigComponentKey& PhysicsBodyComponentKey2 \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey1 = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigComponentKey& PhysicsBodyComponentKey2 = *(FRigComponentKey*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey1, \
			PhysicsBodyComponentKey2 \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchyDisableCollisionBetween;
// ********** End ScriptStruct FRigUnit_HierarchyDisableCollisionBetween ***************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodySourceBone ************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodySourceBone_Statics;

#define FRigUnit_HierarchySetPhysicsBodySourceBone_Execute() \
	void FRigUnit_HierarchySetPhysicsBodySourceBone::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigElementKey& SourceBone \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_170_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodySourceBone_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigElementKey& SourceBone \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& SourceBone = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			SourceBone \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodySourceBone;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodySourceBone **************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyTargetBone ************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyTargetBone_Statics;

#define FRigUnit_HierarchySetPhysicsBodyTargetBone_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyTargetBone::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigElementKey& TargetBone \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_195_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyTargetBone_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigElementKey& TargetBone \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& TargetBone = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			TargetBone \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyTargetBone;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyTargetBone **************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodySparseData ************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodySparseData_Statics;

#define FRigUnit_HierarchySetPhysicsBodySparseData_Execute() \
	void FRigUnit_HierarchySetPhysicsBodySparseData::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FPhysicsControlModifierSparseData& Data \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_223_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodySparseData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FPhysicsControlModifierSparseData& Data \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FPhysicsControlModifierSparseData& Data = *(FPhysicsControlModifierSparseData*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			Data \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodySparseData;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodySparseData **************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyKinematicTarget *******************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyKinematicTarget_Statics;

#define FRigUnit_HierarchySetPhysicsBodyKinematicTarget_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyKinematicTarget::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FTransform& KinematicTarget \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_247_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyKinematicTarget_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FTransform& KinematicTarget \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& KinematicTarget = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			KinematicTarget \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyKinematicTarget;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyKinematicTarget *********************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace **************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace_Statics;

#define FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const EPhysicsControlKinematicTargetSpace KinematicTargetSpace \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_271_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const EPhysicsControlKinematicTargetSpace KinematicTargetSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const EPhysicsControlKinematicTargetSpace KinematicTargetSpace = *(EPhysicsControlKinematicTargetSpace*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			KinematicTargetSpace \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace ****************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyMovementType **********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyMovementType_Statics;

#define FRigUnit_HierarchySetPhysicsBodyMovementType_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyMovementType::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const EPhysicsMovementType MovementType \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_296_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyMovementType_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const EPhysicsMovementType MovementType \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const EPhysicsMovementType MovementType = *(EPhysicsMovementType*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			MovementType \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyMovementType;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyMovementType ************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyCollisionType *********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyCollisionType_Statics;

#define FRigUnit_HierarchySetPhysicsBodyCollisionType_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyCollisionType::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const TEnumAsByte<ECollisionEnabled::Type>& CollisionType \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_320_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyCollisionType_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const TEnumAsByte<ECollisionEnabled::Type>& CollisionType \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const TEnumAsByte<ECollisionEnabled::Type>& CollisionType = *(TEnumAsByte<ECollisionEnabled::Type>*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			CollisionType \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyCollisionType;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyCollisionType ***********************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset ***********
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset_Statics;

#define FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const bool bInclude \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_343_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const bool bInclude \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bInclude = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			bInclude \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset *************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyMaterial **************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyMaterial_Statics;

#define FRigUnit_HierarchySetPhysicsBodyMaterial_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyMaterial::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigPhysicsMaterial& Material \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_365_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyMaterial_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const FRigPhysicsMaterial& Material \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigPhysicsMaterial& Material = *(FRigPhysicsMaterial*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			Material \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyMaterial;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyMaterial ****************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyGravityMultiplier *****************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyGravityMultiplier_Statics;

#define FRigUnit_HierarchySetPhysicsBodyGravityMultiplier_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyGravityMultiplier::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const float GravityMultiplier \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_389_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyGravityMultiplier_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const float GravityMultiplier \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const float GravityMultiplier = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			GravityMultiplier \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyGravityMultiplier;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyGravityMultiplier *******************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight ****************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight_Statics;

#define FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const float PhysicsBlendWeight \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_414_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const float PhysicsBlendWeight \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const float PhysicsBlendWeight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			PhysicsBlendWeight \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight ******************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation *****
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation_Statics;

#define FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const bool bUpdateKinematicFromSimulation \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_440_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const bool bUpdateKinematicFromSimulation \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bUpdateKinematicFromSimulation = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			bUpdateKinematicFromSimulation \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation *******

// ********** Begin ScriptStruct FRigUnit_HierarchySetPhysicsBodyDamping ***************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyDamping_Statics;

#define FRigUnit_HierarchySetPhysicsBodyDamping_Execute() \
	void FRigUnit_HierarchySetPhysicsBodyDamping::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const float LinearDamping, \
		const float AngularDamping \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h_466_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPhysicsBodyDamping_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsBodyComponentKey, \
		const float LinearDamping, \
		const float AngularDamping \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const float LinearDamping = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float AngularDamping = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsBodyComponentKey, \
			LinearDamping, \
			AngularDamping \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetPhysicsBodyDamping;
// ********** End ScriptStruct FRigUnit_HierarchySetPhysicsBodyDamping *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsBodyExecution_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
