// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextGraphRoot.h"

#ifdef UAFANIMGRAPH_RigUnit_AnimNextGraphRoot_generated_h
#error "RigUnit_AnimNextGraphRoot.generated.h already included, missing '#pragma once' in RigUnit_AnimNextGraphRoot.h"
#endif
#define UAFANIMGRAPH_RigUnit_AnimNextGraphRoot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AnimNextGraphRoot ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextGraphRoot_Statics;

#define FRigUnit_AnimNextGraphRoot_DummyExecute() \
	void FRigUnit_AnimNextGraphRoot::StaticDummyExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextTraitHandle& Result, \
		FName& EntryPoint \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextGraphRoot_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextGraphRoot_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void DummyExecute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticDummyExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextTraitHandle& Result, \
		FName& EntryPoint \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMDummyExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FAnimNextTraitHandle& Result = *(FAnimNextTraitHandle*)RigVMMemoryHandles[0].GetInputData(); \
		FName& EntryPoint = *(FName*)RigVMMemoryHandles[1].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticDummyExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Result, \
			EntryPoint \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextGraphRoot;
// ********** End ScriptStruct FRigUnit_AnimNextGraphRoot ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Graph_RigUnit_AnimNextGraphRoot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
