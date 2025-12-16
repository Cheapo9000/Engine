// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_GetSocketTransform.h"

#ifdef UAF_RigUnit_GetSocketTransform_generated_h
#error "RigUnit_GetSocketTransform.generated.h already included, missing '#pragma once' in RigUnit_GetSocketTransform.h"
#endif
#define UAF_RigUnit_GetSocketTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetSocketTransform ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetSocketTransform_Statics;

#define FRigUnit_GetSocketTransform_Execute() \
	void FRigUnit_GetSocketTransform::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USceneComponent>& SceneComponent, \
		const FName& SocketName, \
		const TEnumAsByte<ERelativeTransformSpace>& TransformSpace, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_GetSocketTransform_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetSocketTransform_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USceneComponent>& SceneComponent, \
		const FName& SocketName, \
		const TEnumAsByte<ERelativeTransformSpace>& TransformSpace, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<USceneComponent>& SceneComponent = *(TObjectPtr<USceneComponent>*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& SocketName = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const TEnumAsByte<ERelativeTransformSpace>& TransformSpace = *(TEnumAsByte<ERelativeTransformSpace>*)RigVMMemoryHandles[2].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			SceneComponent, \
			SocketName, \
			TransformSpace, \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_GetSocketTransform;
// ********** End ScriptStruct FRigUnit_GetSocketTransform *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_GetSocketTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
