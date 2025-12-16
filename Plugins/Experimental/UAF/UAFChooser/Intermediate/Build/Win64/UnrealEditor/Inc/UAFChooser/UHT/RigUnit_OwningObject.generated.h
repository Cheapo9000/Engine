// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_OwningObject.h"

#ifdef UAFCHOOSER_RigUnit_OwningObject_generated_h
#error "RigUnit_OwningObject.generated.h already included, missing '#pragma once' in RigUnit_OwningObject.h"
#endif
#define UAFCHOOSER_RigUnit_OwningObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_OwningObject *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_OwningObject_Statics;

#define FRigUnit_OwningObject_Execute() \
	void FRigUnit_OwningObject::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		TObjectPtr<UObject>& Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFChooser_Source_UAFChooser_Private_RigUnit_OwningObject_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_OwningObject_Statics; \
	UAFCHOOSER_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		TObjectPtr<UObject>& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TObjectPtr<UObject>& Result = *(TObjectPtr<UObject>*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigVMStruct Super;


struct FRigUnit_OwningObject;
// ********** End ScriptStruct FRigUnit_OwningObject ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFChooser_Source_UAFChooser_Private_RigUnit_OwningObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
