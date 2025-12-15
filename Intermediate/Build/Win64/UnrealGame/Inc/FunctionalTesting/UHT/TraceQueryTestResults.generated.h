// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraceQueryTestResults.h"

#ifdef FUNCTIONALTESTING_TraceQueryTestResults_generated_h
#error "TraceQueryTestResults.generated.h already included, missing '#pragma once' in TraceQueryTestResults.h"
#endif
#define FUNCTIONALTESTING_TraceQueryTestResults_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTraceChannelTestBatchOptions *************************************
struct Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FTraceChannelTestBatchOptions;
// ********** End ScriptStruct FTraceChannelTestBatchOptions ***************************************

// ********** Begin ScriptStruct FTraceQueryTestNames **********************************************
struct Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FTraceQueryTestNames;
// ********** End ScriptStruct FTraceQueryTestNames ************************************************

// ********** Begin ScriptStruct FTraceQueryTestResultsInnerMost ***********************************
struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FTraceQueryTestResultsInnerMost;
// ********** End ScriptStruct FTraceQueryTestResultsInnerMost *************************************

// ********** Begin ScriptStruct FTraceQueryTestResultsInner ***************************************
struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FTraceQueryTestResultsInner;
// ********** End ScriptStruct FTraceQueryTestResultsInner *****************************************

// ********** Begin Class UTraceQueryTestResults ***************************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToString);


struct Z_Construct_UClass_UTraceQueryTestResults_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTraceQueryTestResults(); \
	friend struct ::Z_Construct_UClass_UTraceQueryTestResults_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_UTraceQueryTestResults_NoRegister(); \
public: \
	DECLARE_CLASS2(UTraceQueryTestResults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_UTraceQueryTestResults_NoRegister) \
	DECLARE_SERIALIZER(UTraceQueryTestResults)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API UTraceQueryTestResults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTraceQueryTestResults(UTraceQueryTestResults&&) = delete; \
	UTraceQueryTestResults(const UTraceQueryTestResults&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, UTraceQueryTestResults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceQueryTestResults); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTraceQueryTestResults) \
	FUNCTIONALTESTING_API virtual ~UTraceQueryTestResults();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_155_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_158_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_158_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTraceQueryTestResults;

// ********** End Class UTraceQueryTestResults *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
