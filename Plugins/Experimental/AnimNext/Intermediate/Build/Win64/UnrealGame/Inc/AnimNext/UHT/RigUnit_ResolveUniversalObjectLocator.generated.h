// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/RigUnit_ResolveUniversalObjectLocator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_ResolveUniversalObjectLocator_generated_h
#error "RigUnit_ResolveUniversalObjectLocator.generated.h already included, missing '#pragma once' in RigUnit_ResolveUniversalObjectLocator.h"
#endif
#define ANIMNEXT_RigUnit_ResolveUniversalObjectLocator_generated_h


#define FRigUnit_ResolveUniversalObjectLocator_Execute() \
	void FRigUnit_ResolveUniversalObjectLocator::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FUniversalObjectLocator& Locator, \
		TObjectPtr<UObject>& Object \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_RigUnit_ResolveUniversalObjectLocator_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ResolveUniversalObjectLocator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
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
		const FUniversalObjectLocator& Locator = *(FUniversalObjectLocator*)RigVMMemoryHandles[0].GetData(false); \
		TObjectPtr<UObject>& Object = *(TObjectPtr<UObject>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Locator, \
			Object \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_ResolveUniversalObjectLocator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_RigUnit_ResolveUniversalObjectLocator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
