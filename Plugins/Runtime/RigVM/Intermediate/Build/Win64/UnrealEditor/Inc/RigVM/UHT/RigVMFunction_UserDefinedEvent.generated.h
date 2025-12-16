// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Execution/RigVMFunction_UserDefinedEvent.h"

#ifdef RIGVM_RigVMFunction_UserDefinedEvent_generated_h
#error "RigVMFunction_UserDefinedEvent.generated.h already included, missing '#pragma once' in RigVMFunction_UserDefinedEvent.h"
#endif
#define RIGVM_RigVMFunction_UserDefinedEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_UserDefinedEvent ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics;

#define FRigVMFunction_UserDefinedEvent_Execute() \
	void FRigVMFunction_UserDefinedEvent::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FName& EventName \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_UserDefinedEvent_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FName& EventName \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& EventName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			EventName \
		); \
	} \
	typedef FRigVMStruct Super;


struct FRigVMFunction_UserDefinedEvent;
// ********** End ScriptStruct FRigVMFunction_UserDefinedEvent *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_UserDefinedEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
