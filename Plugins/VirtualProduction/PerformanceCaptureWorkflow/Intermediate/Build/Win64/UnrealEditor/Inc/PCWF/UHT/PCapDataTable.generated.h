// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCapDataTable.h"

#ifdef PERFORMANCECAPTUREWORKFLOW_PCapDataTable_generated_h
#error "PCapDataTable.generated.h already included, missing '#pragma once' in PCapDataTable.h"
#endif
#define PERFORMANCECAPTUREWORKFLOW_PCapDataTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnDatatableModified **************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h_21_DELEGATE \
static void FOnDatatableModified_DelegateWrapper(const FMulticastScriptDelegate& OnDatatableModified);


// ********** End Delegate FOnDatatableModified ****************************************************

// ********** Begin Class UPCapDataTable ***********************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInsertTableRow); \
	DECLARE_FUNCTION(execAddTableRow); \
	DECLARE_FUNCTION(execDuplicateTableRow); \
	DECLARE_FUNCTION(execRemoveTableRow);


struct Z_Construct_UClass_UPCapDataTable_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPCapDataTable_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapDataTable(); \
	friend struct ::Z_Construct_UClass_UPCapDataTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPCapDataTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapDataTable, UDataTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPCapDataTable_NoRegister) \
	DECLARE_SERIALIZER(UPCapDataTable)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapDataTable(UPCapDataTable&&) = delete; \
	UPCapDataTable(const UPCapDataTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapDataTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCapDataTable)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapDataTable;

// ********** End Class UPCapDataTable *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDataTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
