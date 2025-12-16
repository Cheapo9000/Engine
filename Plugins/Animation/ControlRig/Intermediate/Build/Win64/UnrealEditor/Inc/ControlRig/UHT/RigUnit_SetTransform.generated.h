// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetTransform.h"

#ifdef CONTROLRIG_RigUnit_SetTransform_generated_h
#error "RigUnit_SetTransform.generated.h already included, missing '#pragma once' in RigUnit_SetTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SetTransform *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics;

#define FRigUnit_SetTransform_Execute() \
	void FRigUnit_SetTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FTransform& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FTransform& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
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
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetTransform;
// ********** End ScriptStruct FRigUnit_SetTransform ***********************************************

// ********** Begin ScriptStruct FRigUnit_SetTranslation *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics;

#define FRigUnit_SetTranslation_Execute() \
	void FRigUnit_SetTranslation::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FVector& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FVector& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
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
		const FVector& Value = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetTranslation;
// ********** End ScriptStruct FRigUnit_SetTranslation *********************************************

// ********** Begin ScriptStruct FRigUnit_SetRotation **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics;

#define FRigUnit_SetRotation_Execute() \
	void FRigUnit_SetRotation::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FQuat& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FQuat& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
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
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetRotation;
// ********** End ScriptStruct FRigUnit_SetRotation ************************************************

// ********** Begin ScriptStruct FRigUnit_SetScale *************************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics;

#define FRigUnit_SetScale_Execute() \
	void FRigUnit_SetScale::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FVector& Scale, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_215_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FVector& Scale, \
		const float Weight, \
		const bool bPropagateToChildren, \
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
		const FVector& Scale = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Scale, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetScale;
// ********** End ScriptStruct FRigUnit_SetScale ***************************************************

// ********** Begin ScriptStruct FRigUnit_SetTransformArray ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics;

#define FRigUnit_SetTransformArray_Execute() \
	void FRigUnit_SetTransformArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const TArrayView<const FTransform>& Transforms, \
		const float Weight, \
		const bool bPropagateToChildren, \
		TArray<FCachedRigElement>& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_284_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const TArrayView<const FTransform>& Transforms, \
		const float Weight, \
		const bool bPropagateToChildren, \
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
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetTransformArray;
// ********** End ScriptStruct FRigUnit_SetTransformArray ******************************************

// ********** Begin ScriptStruct FRigUnit_SetTransformItemArray ************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics;

#define FRigUnit_SetTransformItemArray_Execute() \
	void FRigUnit_SetTransformItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const TArrayView<const FTransform>& Transforms, \
		const float Weight, \
		const bool bPropagateToChildren, \
		TArray<FCachedRigElement>& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_349_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const TArrayView<const FTransform>& Transforms, \
		const float Weight, \
		const bool bPropagateToChildren, \
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
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetTransformItemArray;
// ********** End ScriptStruct FRigUnit_SetTransformItemArray **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
