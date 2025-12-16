// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_PoseSearchResultGetSelectedDatabase.h"

#ifdef UAFPOSESEARCH_RigUnit_PoseSearchResultGetSelectedDatabase_generated_h
#error "RigUnit_PoseSearchResultGetSelectedDatabase.generated.h already included, missing '#pragma once' in RigUnit_PoseSearchResultGetSelectedDatabase.h"
#endif
#define UAFPOSESEARCH_RigUnit_PoseSearchResultGetSelectedDatabase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_PoseSearchResultGetSelectedDatabase **********************
struct Z_Construct_UScriptStruct_FRigUnit_PoseSearchResultGetSelectedDatabase_Statics;

#define FRigUnit_PoseSearchResultGetSelectedDatabase_Execute() \
	void FRigUnit_PoseSearchResultGetSelectedDatabase::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FPoseSearchBlueprintResult& PoseSearchResult, \
		TObjectPtr<UPoseSearchDatabase>& OutDatabase \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_PoseSearchResultGetSelectedDatabase_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseSearchResultGetSelectedDatabase_Statics; \
	UAFPOSESEARCH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FPoseSearchBlueprintResult& PoseSearchResult, \
		TObjectPtr<UPoseSearchDatabase>& OutDatabase \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FPoseSearchBlueprintResult& PoseSearchResult = *(FPoseSearchBlueprintResult*)RigVMMemoryHandles[0].GetInputData(); \
		TObjectPtr<UPoseSearchDatabase>& OutDatabase = *(TObjectPtr<UPoseSearchDatabase>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			PoseSearchResult, \
			OutDatabase \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_PoseSearchResultGetSelectedDatabase;
// ********** End ScriptStruct FRigUnit_PoseSearchResultGetSelectedDatabase ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_PoseSearchResultGetSelectedDatabase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
