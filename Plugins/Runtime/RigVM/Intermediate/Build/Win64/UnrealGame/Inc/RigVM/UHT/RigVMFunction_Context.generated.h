// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Execution/RigVMFunction_Context.h"

#ifdef RIGVM_RigVMFunction_Context_generated_h
#error "RigVMFunction_Context.generated.h already included, missing '#pragma once' in RigVMFunction_Context.h"
#endif
#define RIGVM_RigVMFunction_Context_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_IsHostBeingDebugged ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics;

#define FRigVMFunction_IsHostBeingDebugged_Execute() \
	void FRigVMFunction_IsHostBeingDebugged::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Context_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		bool& Result = *(bool*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigVMStruct Super;


struct FRigVMFunction_IsHostBeingDebugged;
// ********** End ScriptStruct FRigVMFunction_IsHostBeingDebugged **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Context_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
