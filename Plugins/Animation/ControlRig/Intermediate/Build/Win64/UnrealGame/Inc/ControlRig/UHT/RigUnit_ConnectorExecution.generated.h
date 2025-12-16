// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Modules/RigUnit_ConnectorExecution.h"

#ifdef CONTROLRIG_RigUnit_ConnectorExecution_generated_h
#error "RigUnit_ConnectorExecution.generated.h already included, missing '#pragma once' in RigUnit_ConnectorExecution.h"
#endif
#define CONTROLRIG_RigUnit_ConnectorExecution_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ConnectorExecution ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics;

#define FRigUnit_ConnectorExecution_Execute() \
	void FRigUnit_ConnectorExecution::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectorExecution_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics; \
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


struct FRigUnit_ConnectorExecution;
// ********** End ScriptStruct FRigUnit_ConnectorExecution *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectorExecution_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
