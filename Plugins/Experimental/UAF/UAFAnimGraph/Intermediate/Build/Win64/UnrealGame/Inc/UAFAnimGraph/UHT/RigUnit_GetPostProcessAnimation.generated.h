// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_GetPostProcessAnimation.h"

#ifdef UAFANIMGRAPH_RigUnit_GetPostProcessAnimation_generated_h
#error "RigUnit_GetPostProcessAnimation.generated.h already included, missing '#pragma once' in RigUnit_GetPostProcessAnimation.h"
#endif
#define UAFANIMGRAPH_RigUnit_GetPostProcessAnimation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetPostProcessAnimation **********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetPostProcessAnimation_Statics;

#define FRigUnit_GetPostProcessAnimation_Execute() \
	void FRigUnit_GetPostProcessAnimation::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent, \
		const int32 LODLevel, \
		FAnimNextAnimGraph& Graph, \
		bool& bShouldEvaluate, \
		int32& LODThreshold \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_RigUnit_GetPostProcessAnimation_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetPostProcessAnimation_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent, \
		const int32 LODLevel, \
		FAnimNextAnimGraph& Graph, \
		bool& bShouldEvaluate, \
		int32& LODThreshold \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent = *(TObjectPtr<USkeletalMeshComponent>*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 LODLevel = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		FAnimNextAnimGraph& Graph = *(FAnimNextAnimGraph*)RigVMMemoryHandles[2].GetOutputData(); \
		bool& bShouldEvaluate = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		int32& LODThreshold = *(int32*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			SkeletalMeshComponent, \
			LODLevel, \
			Graph, \
			bShouldEvaluate, \
			LODThreshold \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_GetPostProcessAnimation;
// ********** End ScriptStruct FRigUnit_GetPostProcessAnimation ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_RigUnit_GetPostProcessAnimation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
