// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_MultiAnimGetAnimationAsset.h"

#ifdef UAFPOSESEARCH_RigUnit_MultiAnimGetAnimationAsset_generated_h
#error "RigUnit_MultiAnimGetAnimationAsset.generated.h already included, missing '#pragma once' in RigUnit_MultiAnimGetAnimationAsset.h"
#endif
#define UAFPOSESEARCH_RigUnit_MultiAnimGetAnimationAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_MultiAnimGetAnimationAsset *******************************
struct Z_Construct_UScriptStruct_FRigUnit_MultiAnimGetAnimationAsset_Statics;

#define FRigUnit_MultiAnimGetAnimationAsset_Execute() \
	void FRigUnit_MultiAnimGetAnimationAsset::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UMultiAnimAsset>& MultiAnimAsset, \
		const FName& Role, \
		TObjectPtr<UAnimationAsset>& Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_MultiAnimGetAnimationAsset_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MultiAnimGetAnimationAsset_Statics; \
	UAFPOSESEARCH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UMultiAnimAsset>& MultiAnimAsset, \
		const FName& Role, \
		TObjectPtr<UAnimationAsset>& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<UMultiAnimAsset>& MultiAnimAsset = *(TObjectPtr<UMultiAnimAsset>*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Role = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		TObjectPtr<UAnimationAsset>& Result = *(TObjectPtr<UAnimationAsset>*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			MultiAnimAsset, \
			Role, \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_MultiAnimGetAnimationAsset;
// ********** End ScriptStruct FRigUnit_MultiAnimGetAnimationAsset *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_MultiAnimGetAnimationAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
