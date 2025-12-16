// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextSetNotifyContext.h"

#ifdef UAFANIMGRAPH_RigUnit_AnimNextSetNotifyContext_generated_h
#error "RigUnit_AnimNextSetNotifyContext.generated.h already included, missing '#pragma once' in RigUnit_AnimNextSetNotifyContext.h"
#endif
#define UAFANIMGRAPH_RigUnit_AnimNextSetNotifyContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AnimNextSetNotifyContext *********************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextSetNotifyContext_Statics;

#define FRigUnit_AnimNextSetNotifyContext_Execute() \
	void FRigUnit_AnimNextSetNotifyContext::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_RigUnit_AnimNextSetNotifyContext_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextSetNotifyContext_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent = *(TObjectPtr<USkeletalMeshComponent>*)RigVMMemoryHandles[0].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			SkeletalMeshComponent \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextSetNotifyContext;
// ********** End ScriptStruct FRigUnit_AnimNextSetNotifyContext ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_RigUnit_AnimNextSetNotifyContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
