// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_MakeReferencePoseFromSkeletalMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_MakeReferencePoseFromSkeletalMeshComponent_generated_h
#error "RigUnit_MakeReferencePoseFromSkeletalMeshComponent.generated.h already included, missing '#pragma once' in RigUnit_MakeReferencePoseFromSkeletalMeshComponent.h"
#endif
#define ANIMNEXT_RigUnit_MakeReferencePoseFromSkeletalMeshComponent_generated_h


#define FRigUnit_MakeReferencePoseFromSkeletalMeshComponent_Execute() \
	void FRigUnit_MakeReferencePoseFromSkeletalMeshComponent::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		FAnimNextGraphReferencePose& ReferencePose, \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_MakeReferencePoseFromSkeletalMeshComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MakeReferencePoseFromSkeletalMeshComponent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		FAnimNextGraphReferencePose& ReferencePose, \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FAnimNextGraphReferencePose& ReferencePose = *(FAnimNextGraphReferencePose*)RigVMMemoryHandles[0].GetData(false); \
		const TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponent = *(TObjectPtr<USkeletalMeshComponent>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			ReferencePose, \
			SkeletalMeshComponent \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_MakeReferencePoseFromSkeletalMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_MakeReferencePoseFromSkeletalMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
