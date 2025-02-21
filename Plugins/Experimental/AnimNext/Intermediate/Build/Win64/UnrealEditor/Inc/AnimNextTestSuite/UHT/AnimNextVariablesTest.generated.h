// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextVariablesTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTTESTSUITE_AnimNextVariablesTest_generated_h
#error "AnimNextVariablesTest.generated.h already included, missing '#pragma once' in AnimNextVariablesTest.h"
#endif
#define ANIMNEXTTESTSUITE_AnimNextVariablesTest_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextVariablesTest_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextParamTypeTestStruct_Statics; \
	ANIMNEXTTESTSUITE_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<struct FAnimNextParamTypeTestStruct>();


#define FAnimNextTests_TestOperation_Execute() \
	void FAnimNextTests_TestOperation::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextVariablesTest_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextTests_TestOperation_Statics; \
	ANIMNEXTTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMStructMutable Super;


template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<struct FAnimNextTests_TestOperation>();


#define FAnimNextTests_PrintResult_Execute() \
	void FAnimNextTests_PrintResult::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextVariablesTest_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextTests_PrintResult_Statics; \
	ANIMNEXTTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Result = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigVMStructMutable Super;


template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<struct FAnimNextTests_PrintResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextVariablesTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
