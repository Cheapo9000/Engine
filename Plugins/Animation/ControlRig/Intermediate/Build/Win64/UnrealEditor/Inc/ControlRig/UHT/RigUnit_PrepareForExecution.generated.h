// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_PrepareForExecution.h"

#ifdef CONTROLRIG_RigUnit_PrepareForExecution_generated_h
#error "RigUnit_PrepareForExecution.generated.h already included, missing '#pragma once' in RigUnit_PrepareForExecution.h"
#endif
#define CONTROLRIG_RigUnit_PrepareForExecution_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_PrepareForExecution **************************************
struct Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics;

#define FRigUnit_PrepareForExecution_Execute() \
	void FRigUnit_PrepareForExecution::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_PrepareForExecution_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>() \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_PrepareForExecution;
// ********** End ScriptStruct FRigUnit_PrepareForExecution ****************************************

// ********** Begin ScriptStruct FRigUnit_PostPrepareForExecution **********************************
struct Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics;

#define FRigUnit_PostPrepareForExecution_Execute() \
	void FRigUnit_PostPrepareForExecution::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_PrepareForExecution_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>() \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_PostPrepareForExecution;
// ********** End ScriptStruct FRigUnit_PostPrepareForExecution ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_PrepareForExecution_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
