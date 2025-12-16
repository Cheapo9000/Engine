// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_PoseSearchDatabaseGetTags.h"

#ifdef UAFPOSESEARCH_RigUnit_PoseSearchDatabaseGetTags_generated_h
#error "RigUnit_PoseSearchDatabaseGetTags.generated.h already included, missing '#pragma once' in RigUnit_PoseSearchDatabaseGetTags.h"
#endif
#define UAFPOSESEARCH_RigUnit_PoseSearchDatabaseGetTags_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_PoseSearchDatabaseGetTags ********************************
struct Z_Construct_UScriptStruct_FRigUnit_PoseSearchDatabaseGetTags_Statics;

#define FRigUnit_PoseSearchDatabaseGetTags_Execute() \
	void FRigUnit_PoseSearchDatabaseGetTags::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UPoseSearchDatabase>& Database, \
		TArray<FName>& OutTags \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_PoseSearchDatabaseGetTags_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseSearchDatabaseGetTags_Statics; \
	UAFPOSESEARCH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UPoseSearchDatabase>& Database, \
		TArray<FName>& OutTags \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<UPoseSearchDatabase>& Database = *(TObjectPtr<UPoseSearchDatabase>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FName>& OutTags = *(TArray<FName>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Database, \
			OutTags \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_PoseSearchDatabaseGetTags;
// ********** End ScriptStruct FRigUnit_PoseSearchDatabaseGetTags **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_PoseSearchDatabaseGetTags_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
