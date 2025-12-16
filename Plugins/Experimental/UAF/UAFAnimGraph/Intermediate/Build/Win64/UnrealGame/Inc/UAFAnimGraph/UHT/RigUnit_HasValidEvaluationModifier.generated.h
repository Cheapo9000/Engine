// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_HasValidEvaluationModifier.h"

#ifdef UAFANIMGRAPH_RigUnit_HasValidEvaluationModifier_generated_h
#error "RigUnit_HasValidEvaluationModifier.generated.h already included, missing '#pragma once' in RigUnit_HasValidEvaluationModifier.h"
#endif
#define UAFANIMGRAPH_RigUnit_HasValidEvaluationModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_HasValidEvaluationModifier *******************************
struct Z_Construct_UScriptStruct_FRigUnit_HasValidEvaluationModifier_Statics;

#define FRigUnit_HasValidEvaluationModifier_Execute() \
	void FRigUnit_HasValidEvaluationModifier::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextGraphInjectionData& InjectionData, \
		bool& bValue \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_RigUnit_HasValidEvaluationModifier_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HasValidEvaluationModifier_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FAnimNextGraphInjectionData& InjectionData, \
		bool& bValue \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FAnimNextGraphInjectionData& InjectionData = *(FAnimNextGraphInjectionData*)RigVMMemoryHandles[0].GetInputData(); \
		bool& bValue = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			InjectionData, \
			bValue \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_HasValidEvaluationModifier;
// ********** End ScriptStruct FRigUnit_HasValidEvaluationModifier *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_RigUnit_HasValidEvaluationModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
