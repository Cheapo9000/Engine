// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Module/RigUnit_AnimNextAnimationGraphSelf.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_AnimNextAnimationGraphSelf_generated_h
#error "RigUnit_AnimNextAnimationGraphSelf.generated.h already included, missing '#pragma once' in RigUnit_AnimNextAnimationGraphSelf.h"
#endif
#define ANIMNEXT_RigUnit_AnimNextAnimationGraphSelf_generated_h


#define FRigUnit_AnimNextAnimationGraphSelf_Execute() \
	void FRigUnit_AnimNextAnimationGraphSelf::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		TObjectPtr<UAnimNextAnimationGraph>& Self \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_RigUnit_AnimNextAnimationGraphSelf_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextAnimationGraphSelf_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		TObjectPtr<UAnimNextAnimationGraph>& Self \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TObjectPtr<UAnimNextAnimationGraph>& Self = *(TObjectPtr<UAnimNextAnimationGraph>*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Self \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextAnimationGraphSelf>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_RigUnit_AnimNextAnimationGraphSelf_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
