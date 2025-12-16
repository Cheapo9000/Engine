// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_Physics.h"

#ifdef CONTROLRIG_RigUnit_Physics_generated_h
#error "RigUnit_Physics.generated.h already included, missing '#pragma once' in RigUnit_Physics.h"
#endif
#define CONTROLRIG_RigUnit_Physics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_HierarchyAddPhysicsSolver ********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics;

#define FRigUnit_HierarchyAddPhysicsSolver_Execute() \
	void FRigUnit_HierarchyAddPhysicsSolver::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		FRigPhysicsSolverID& Solver \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		FRigPhysicsSolverID& Solver \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		FRigPhysicsSolverID& Solver = *(FRigPhysicsSolverID*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Name, \
			Solver \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_HierarchyAddPhysicsSolver;
// ********** End ScriptStruct FRigUnit_HierarchyAddPhysicsSolver **********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddPhysicsJoint *********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics;

#define FRigUnit_HierarchyAddPhysicsJoint_Execute() \
	void FRigUnit_HierarchyAddPhysicsJoint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FRigPhysicsSolverID& Solver, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FRigPhysicsSolverID& Solver, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigPhysicsSolverID& Solver = *(FRigPhysicsSolverID*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Solver, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddPhysicsJoint;
// ********** End ScriptStruct FRigUnit_HierarchyAddPhysicsJoint ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
