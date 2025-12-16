// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextBeginExecution.h"

#ifdef UAF_RigUnit_AnimNextBeginExecution_generated_h
#error "RigUnit_AnimNextBeginExecution.generated.h already included, missing '#pragma once' in RigUnit_AnimNextBeginExecution.h"
#endif
#define UAF_RigUnit_AnimNextBeginExecution_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AnimNextBeginExecution ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics;

#define FRigUnit_AnimNextBeginExecution_Execute() \
	void FRigUnit_AnimNextBeginExecution::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Graph_RigUnit_AnimNextBeginExecution_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
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


struct FRigUnit_AnimNextBeginExecution;
// ********** End ScriptStruct FRigUnit_AnimNextBeginExecution *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Graph_RigUnit_AnimNextBeginExecution_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
