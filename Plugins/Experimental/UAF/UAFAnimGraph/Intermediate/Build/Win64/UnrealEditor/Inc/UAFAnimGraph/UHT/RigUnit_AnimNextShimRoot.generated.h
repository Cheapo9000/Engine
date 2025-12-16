// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextShimRoot.h"

#ifdef UAFANIMGRAPH_RigUnit_AnimNextShimRoot_generated_h
#error "RigUnit_AnimNextShimRoot.generated.h already included, missing '#pragma once' in RigUnit_AnimNextShimRoot.h"
#endif
#define UAFANIMGRAPH_RigUnit_AnimNextShimRoot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AnimNextShimRoot *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextShimRoot_Statics;

#define FRigUnit_AnimNextShimRoot_Execute() \
	void FRigUnit_AnimNextShimRoot::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextShimRoot_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextShimRoot_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextShimRoot;
// ********** End ScriptStruct FRigUnit_AnimNextShimRoot *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextShimRoot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
