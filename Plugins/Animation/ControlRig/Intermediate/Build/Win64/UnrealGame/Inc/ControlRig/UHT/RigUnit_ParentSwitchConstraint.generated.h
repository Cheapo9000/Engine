// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_ParentSwitchConstraint.h"

#ifdef CONTROLRIG_RigUnit_ParentSwitchConstraint_generated_h
#error "RigUnit_ParentSwitchConstraint.generated.h already included, missing '#pragma once' in RigUnit_ParentSwitchConstraint.h"
#endif
#define CONTROLRIG_RigUnit_ParentSwitchConstraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ParentSwitchConstraint ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics;

#define FRigUnit_ParentSwitchConstraint_Execute() \
	void FRigUnit_ParentSwitchConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Subject, \
		const int32 ParentIndex, \
		const FRigElementKeyCollection& Parents, \
		const FTransform& InitialGlobalTransform, \
		const float Weight, \
		FTransform& Transform, \
		bool& Switched, \
		FCachedRigElement& CachedSubject, \
		FCachedRigElement& CachedParent, \
		FTransform& RelativeOffset \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Subject, \
		const int32 ParentIndex, \
		const FRigElementKeyCollection& Parents, \
		const FTransform& InitialGlobalTransform, \
		const float Weight, \
		FTransform& Transform, \
		bool& Switched, \
		FCachedRigElement& CachedSubject, \
		FCachedRigElement& CachedParent, \
		FTransform& RelativeOffset \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Subject = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 ParentIndex = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigElementKeyCollection& Parents = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& InitialGlobalTransform = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[5].GetOutputData(); \
		bool& Switched = *(bool*)RigVMMemoryHandles[6].GetOutputData(); \
		FCachedRigElement& CachedSubject = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& RelativeOffset = *(FTransform*)RigVMMemoryHandles[9].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Subject, \
			ParentIndex, \
			Parents, \
			InitialGlobalTransform, \
			Weight, \
			Transform, \
			Switched, \
			CachedSubject, \
			CachedParent, \
			RelativeOffset \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_ParentSwitchConstraint;
// ********** End ScriptStruct FRigUnit_ParentSwitchConstraint *************************************

// ********** Begin ScriptStruct FRigUnit_ParentSwitchConstraintArray ******************************
struct Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics;

#define FRigUnit_ParentSwitchConstraintArray_Execute() \
	void FRigUnit_ParentSwitchConstraintArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Subject, \
		const int32 ParentIndex, \
		const TArrayView<const FRigElementKey>& Parents, \
		const FTransform& InitialGlobalTransform, \
		const float Weight, \
		FTransform& Transform, \
		bool& Switched, \
		FCachedRigElement& CachedSubject, \
		FCachedRigElement& CachedParent, \
		FTransform& RelativeOffset \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Subject, \
		const int32 ParentIndex, \
		const TArrayView<const FRigElementKey>& Parents, \
		const FTransform& InitialGlobalTransform, \
		const float Weight, \
		FTransform& Transform, \
		bool& Switched, \
		FCachedRigElement& CachedSubject, \
		FCachedRigElement& CachedParent, \
		FTransform& RelativeOffset \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Subject = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 ParentIndex = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FRigElementKey>& Parents = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& InitialGlobalTransform = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[5].GetOutputData(); \
		bool& Switched = *(bool*)RigVMMemoryHandles[6].GetOutputData(); \
		FCachedRigElement& CachedSubject = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& RelativeOffset = *(FTransform*)RigVMMemoryHandles[9].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Subject, \
			ParentIndex, \
			Parents, \
			InitialGlobalTransform, \
			Weight, \
			Transform, \
			Switched, \
			CachedSubject, \
			CachedParent, \
			RelativeOffset \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_ParentSwitchConstraintArray;
// ********** End ScriptStruct FRigUnit_ParentSwitchConstraintArray ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
