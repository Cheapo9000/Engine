// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetTransform.h"

#ifdef CONTROLRIG_RigUnit_GetTransform_generated_h
#error "RigUnit_GetTransform.generated.h already included, missing '#pragma once' in RigUnit_GetTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetTransform *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics;

#define FRigUnit_GetTransform_Execute() \
	void FRigUnit_GetTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		FTransform& Transform, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		FTransform& Transform, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Transform, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetTransform;
// ********** End ScriptStruct FRigUnit_GetTransform ***********************************************

// ********** Begin ScriptStruct FRigUnit_GetTransformArray ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics;

#define FRigUnit_GetTransformArray_Execute() \
	void FRigUnit_GetTransformArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetTransform_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetOutputData(); \
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetTransformArray;
// ********** End ScriptStruct FRigUnit_GetTransformArray ******************************************

// ********** Begin ScriptStruct FRigUnit_GetTransformItemArray ************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics;

#define FRigUnit_GetTransformItemArray_Execute() \
	void FRigUnit_GetTransformItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetTransform_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetOutputData(); \
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetTransformItemArray;
// ********** End ScriptStruct FRigUnit_GetTransformItemArray **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
