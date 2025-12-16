// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_IsRecentlyRendered.h"

#ifdef UAF_RigUnit_IsRecentlyRendered_generated_h
#error "RigUnit_IsRecentlyRendered.generated.h already included, missing '#pragma once' in RigUnit_IsRecentlyRendered.h"
#endif
#define UAF_RigUnit_IsRecentlyRendered_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_IsRecentlyRendered ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_IsRecentlyRendered_Statics;

#define FRigUnit_IsRecentlyRendered_Execute() \
	void FRigUnit_IsRecentlyRendered::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USkinnedMeshComponent>& MeshComponent, \
		bool& Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_IsRecentlyRendered_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_IsRecentlyRendered_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USkinnedMeshComponent>& MeshComponent, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<USkinnedMeshComponent>& MeshComponent = *(TObjectPtr<USkinnedMeshComponent>*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			MeshComponent, \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_IsRecentlyRendered;
// ********** End ScriptStruct FRigUnit_IsRecentlyRendered *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_IsRecentlyRendered_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
