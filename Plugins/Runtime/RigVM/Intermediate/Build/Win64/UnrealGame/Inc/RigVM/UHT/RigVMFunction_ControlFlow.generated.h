// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/RigVMFunction_ControlFlow.h"

#ifdef RIGVM_RigVMFunction_ControlFlow_generated_h
#error "RigVMFunction_ControlFlow.generated.h already included, missing '#pragma once' in RigVMFunction_ControlFlow.h"
#endif
#define RIGVM_RigVMFunction_ControlFlow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_ControlFlowBase ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMStruct Super;


struct FRigVMFunction_ControlFlowBase;
// ********** End ScriptStruct FRigVMFunction_ControlFlowBase **************************************

// ********** Begin ScriptStruct FRigVMFunction_ControlFlowBranch **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics;

#define FRigVMFunction_ControlFlowBranch_Execute() \
	void FRigVMFunction_ControlFlowBranch::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		FName& BlockToRun \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		FName& BlockToRun \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		FName& BlockToRun = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			BlockToRun \
		); \
	} \
	typedef FRigVMFunction_ControlFlowBase Super;


struct FRigVMFunction_ControlFlowBranch;
// ********** End ScriptStruct FRigVMFunction_ControlFlowBranch ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
