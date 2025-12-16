// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextTraitStack.h"

#ifdef UAFANIMGRAPH_RigUnit_AnimNextTraitStack_generated_h
#error "RigUnit_AnimNextTraitStack.generated.h already included, missing '#pragma once' in RigUnit_AnimNextTraitStack.h"
#endif
#define UAFANIMGRAPH_RigUnit_AnimNextTraitStack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AnimNextTraitStack ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextTraitStack_Statics;

#define FRigUnit_AnimNextTraitStack_Execute() \
	void FRigUnit_AnimNextTraitStack::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		FAnimNextTraitHandle& Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextTraitStack_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextTraitStack_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		FAnimNextTraitHandle& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FAnimNextTraitHandle& Result = *(FAnimNextTraitHandle*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextTraitStack;
// ********** End ScriptStruct FRigUnit_AnimNextTraitStack *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextTraitStack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
