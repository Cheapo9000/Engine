// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Param/RigUnit_AnimNextParameterBeginExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_AnimNextParameterBeginExecution_generated_h
#error "RigUnit_AnimNextParameterBeginExecution.generated.h already included, missing '#pragma once' in RigUnit_AnimNextParameterBeginExecution.h"
#endif
#define ANIMNEXT_RigUnit_AnimNextParameterBeginExecution_generated_h


#define FRigUnit_AnimNextParameterBeginExecution_Execute() \
	void FRigUnit_AnimNextParameterBeginExecution::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		FName& EntryPoint \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigUnit_AnimNextParameterBeginExecution_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextParameterBeginExecution_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		FName& EntryPoint \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FName& EntryPoint = *(FName*)RigVMMemoryHandles[0].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			EntryPoint \
		); \
	} \
	typedef FRigUnit_AnimNextParameterBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextParameterBeginExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigUnit_AnimNextParameterBeginExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
