// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextGraphRoot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_AnimNextGraphRoot_generated_h
#error "RigUnit_AnimNextGraphRoot.generated.h already included, missing '#pragma once' in RigUnit_AnimNextGraphRoot.h"
#endif
#define ANIMNEXT_RigUnit_AnimNextGraphRoot_generated_h


#define FRigUnit_AnimNextGraphRoot_DummyExecute() \
	void FRigUnit_AnimNextGraphRoot::StaticDummyExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextTraitHandle& Result, \
		FName& EntryPoint \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextGraphRoot_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextGraphRoot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void DummyExecute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticDummyExecute( \
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
		const FAnimNextTraitHandle& Result = *(FAnimNextTraitHandle*)RigVMMemoryHandles[0].GetData(false); \
		FName& EntryPoint = *(FName*)RigVMMemoryHandles[1].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticDummyExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Result, \
			EntryPoint \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextGraphRoot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextGraphRoot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
