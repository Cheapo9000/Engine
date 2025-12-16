// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/RigUnit_ResolveUniversalObjectLocator.h"

#ifdef UAF_RigUnit_ResolveUniversalObjectLocator_generated_h
#error "RigUnit_ResolveUniversalObjectLocator.generated.h already included, missing '#pragma once' in RigUnit_ResolveUniversalObjectLocator.h"
#endif
#define UAF_RigUnit_ResolveUniversalObjectLocator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ResolveUniversalObjectLocator ****************************
struct Z_Construct_UScriptStruct_FRigUnit_ResolveUniversalObjectLocator_Statics;

#define FRigUnit_ResolveUniversalObjectLocator_Execute() \
	void FRigUnit_ResolveUniversalObjectLocator::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FUniversalObjectLocator& Locator, \
		TObjectPtr<UObject>& Object \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Variables_RigUnit_ResolveUniversalObjectLocator_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ResolveUniversalObjectLocator_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FUniversalObjectLocator& Locator, \
		TObjectPtr<UObject>& Object \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FUniversalObjectLocator& Locator = *(FUniversalObjectLocator*)RigVMMemoryHandles[0].GetInputData(); \
		TObjectPtr<UObject>& Object = *(TObjectPtr<UObject>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Locator, \
			Object \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_ResolveUniversalObjectLocator;
// ********** End ScriptStruct FRigUnit_ResolveUniversalObjectLocator ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Variables_RigUnit_ResolveUniversalObjectLocator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
