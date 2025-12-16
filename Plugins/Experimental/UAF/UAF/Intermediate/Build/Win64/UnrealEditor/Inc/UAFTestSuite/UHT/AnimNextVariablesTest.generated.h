// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextVariablesTest.h"

#ifdef UAFTESTSUITE_AnimNextVariablesTest_generated_h
#error "AnimNextVariablesTest.generated.h already included, missing '#pragma once' in AnimNextVariablesTest.h"
#endif
#define UAFTESTSUITE_AnimNextVariablesTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimNextComponent;
class UAnimNextTestFuncLib;

// ********** Begin ScriptStruct FAnimNextParamTypeTestStruct **************************************
struct Z_Construct_UScriptStruct_FAnimNextParamTypeTestStruct_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextParamTypeTestStruct_Statics; \
	UAFTESTSUITE_API static class UScriptStruct* StaticStruct();


struct FAnimNextParamTypeTestStruct;
// ********** End ScriptStruct FAnimNextParamTypeTestStruct ****************************************

// ********** Begin ScriptStruct FAnimNextTests_TestOperation **************************************
struct Z_Construct_UScriptStruct_FAnimNextTests_TestOperation_Statics;

#define FAnimNextTests_TestOperation_Execute() \
	void FAnimNextTests_TestOperation::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextTests_TestOperation_Statics; \
	UAFTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
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
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMStructMutable Super;


struct FAnimNextTests_TestOperation;
// ********** End ScriptStruct FAnimNextTests_TestOperation ****************************************

// ********** Begin ScriptStruct FAnimNextTests_PrintResult ****************************************
struct Z_Construct_UScriptStruct_FAnimNextTests_PrintResult_Statics;

#define FAnimNextTests_PrintResult_Execute() \
	void FAnimNextTests_PrintResult::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextTests_PrintResult_Statics; \
	UAFTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
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
		const int32 Result = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigVMStructMutable Super;


struct FAnimNextTests_PrintResult;
// ********** End ScriptStruct FAnimNextTests_PrintResult ******************************************

// ********** Begin Class UAnimNextTestFuncLib *****************************************************
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValueC); \
	DECLARE_FUNCTION(execGetValueB); \
	DECLARE_FUNCTION(execGetObj);


struct Z_Construct_UClass_UAnimNextTestFuncLib_Statics;
UAFTESTSUITE_API UClass* Z_Construct_UClass_UAnimNextTestFuncLib_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextTestFuncLib(); \
	friend struct ::Z_Construct_UClass_UAnimNextTestFuncLib_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFTESTSUITE_API UClass* ::Z_Construct_UClass_UAnimNextTestFuncLib_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextTestFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFTestSuite"), Z_Construct_UClass_UAnimNextTestFuncLib_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextTestFuncLib)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_175_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextTestFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextTestFuncLib(UAnimNextTestFuncLib&&) = delete; \
	UAnimNextTestFuncLib(const UAnimNextTestFuncLib&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextTestFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextTestFuncLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextTestFuncLib) \
	NO_API virtual ~UAnimNextTestFuncLib();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_172_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_175_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h_175_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextTestFuncLib;

// ********** End Class UAnimNextTestFuncLib *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFTestSuite_Private_AnimNextVariablesTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
