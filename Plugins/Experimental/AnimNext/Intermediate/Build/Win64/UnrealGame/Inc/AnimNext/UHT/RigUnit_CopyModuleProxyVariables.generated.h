// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/RigUnit_CopyModuleProxyVariables.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_CopyModuleProxyVariables_generated_h
#error "RigUnit_CopyModuleProxyVariables.generated.h already included, missing '#pragma once' in RigUnit_CopyModuleProxyVariables.h"
#endif
#define ANIMNEXT_RigUnit_CopyModuleProxyVariables_generated_h


#define FRigUnit_CopyModuleProxyVariables_Execute() \
	void FRigUnit_CopyModuleProxyVariables::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_RigUnit_CopyModuleProxyVariables_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CopyModuleProxyVariables_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
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


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_CopyModuleProxyVariables>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_RigUnit_CopyModuleProxyVariables_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
