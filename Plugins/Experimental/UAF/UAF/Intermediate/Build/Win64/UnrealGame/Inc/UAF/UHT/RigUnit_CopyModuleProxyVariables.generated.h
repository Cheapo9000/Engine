// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/RigUnit_CopyModuleProxyVariables.h"

#ifdef UAF_RigUnit_CopyModuleProxyVariables_generated_h
#error "RigUnit_CopyModuleProxyVariables.generated.h already included, missing '#pragma once' in RigUnit_CopyModuleProxyVariables.h"
#endif
#define UAF_RigUnit_CopyModuleProxyVariables_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_CopyModuleProxyVariables *********************************
struct Z_Construct_UScriptStruct_FRigUnit_CopyModuleProxyVariables_Statics;

#define FRigUnit_CopyModuleProxyVariables_Execute() \
	void FRigUnit_CopyModuleProxyVariables::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Variables_RigUnit_CopyModuleProxyVariables_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CopyModuleProxyVariables_Statics; \
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


struct FRigUnit_CopyModuleProxyVariables;
// ********** End ScriptStruct FRigUnit_CopyModuleProxyVariables ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Variables_RigUnit_CopyModuleProxyVariables_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
