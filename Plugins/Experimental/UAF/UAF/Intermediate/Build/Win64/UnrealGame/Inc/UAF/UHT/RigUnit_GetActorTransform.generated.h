// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_GetActorTransform.h"

#ifdef UAF_RigUnit_GetActorTransform_generated_h
#error "RigUnit_GetActorTransform.generated.h already included, missing '#pragma once' in RigUnit_GetActorTransform.h"
#endif
#define UAF_RigUnit_GetActorTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNextActorTransformComponent **********************************
struct Z_Construct_UScriptStruct_FAnimNextActorTransformComponent_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_GetActorTransform_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextActorTransformComponent_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	typedef FUAFModuleInstanceComponent Super;


struct FAnimNextActorTransformComponent;
// ********** End ScriptStruct FAnimNextActorTransformComponent ************************************

// ********** Begin ScriptStruct FRigUnit_GetActorTransform ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetActorTransform_Statics;

#define FRigUnit_GetActorTransform_Execute() \
	void FRigUnit_GetActorTransform::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_GetActorTransform_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetActorTransform_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Transform \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_GetActorTransform;
// ********** End ScriptStruct FRigUnit_GetActorTransform ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_GetActorTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
