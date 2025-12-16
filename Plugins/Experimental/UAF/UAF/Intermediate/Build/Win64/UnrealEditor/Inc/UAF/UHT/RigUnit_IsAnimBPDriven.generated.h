// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_IsAnimBPDriven.h"

#ifdef UAF_RigUnit_IsAnimBPDriven_generated_h
#error "RigUnit_IsAnimBPDriven.generated.h already included, missing '#pragma once' in RigUnit_IsAnimBPDriven.h"
#endif
#define UAF_RigUnit_IsAnimBPDriven_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_IsAnimBPDriven *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_IsAnimBPDriven_Statics;

#define FRigUnit_IsAnimBPDriven_Execute() \
	void FRigUnit_IsAnimBPDriven::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USkeletalMeshComponent>& MeshComponent, \
		bool& Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_IsAnimBPDriven_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_IsAnimBPDriven_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<USkeletalMeshComponent>& MeshComponent, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<USkeletalMeshComponent>& MeshComponent = *(TObjectPtr<USkeletalMeshComponent>*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			MeshComponent, \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_IsAnimBPDriven;
// ********** End ScriptStruct FRigUnit_IsAnimBPDriven *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Graph_RigUnit_IsAnimBPDriven_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
