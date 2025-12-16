// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCapSessionTemplate.h"

#ifdef PERFORMANCECAPTUREWORKFLOW_PCapSessionTemplate_generated_h
#error "PCapSessionTemplate.generated.h already included, missing '#pragma once' in PCapSessionTemplate.h"
#endif
#define PERFORMANCECAPTUREWORKFLOW_PCapSessionTemplate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDirectoryPath;

// ********** Begin ScriptStruct FPCapTokenisedString **********************************************
struct Z_Construct_UScriptStruct_FPCapTokenisedString_Statics;
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCapTokenisedString_Statics; \
	PERFORMANCECAPTUREWORKFLOW_API static class UScriptStruct* StaticStruct();


struct FPCapTokenisedString;
// ********** End ScriptStruct FPCapTokenisedString ************************************************

// ********** Begin ScriptStruct FPCapTokenisedFolderPath ******************************************
struct Z_Construct_UScriptStruct_FPCapTokenisedFolderPath_Statics;
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCapTokenisedFolderPath_Statics; \
	PERFORMANCECAPTUREWORKFLOW_API static class UScriptStruct* StaticStruct();


struct FPCapTokenisedFolderPath;
// ********** End ScriptStruct FPCapTokenisedFolderPath ********************************************

// ********** Begin Class UPCapSessionTemplate *****************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAllFields); \
	DECLARE_FUNCTION(execSetProductionName); \
	DECLARE_FUNCTION(execGetProductionName); \
	DECLARE_FUNCTION(execSetSessionName); \
	DECLARE_FUNCTION(execGetSessionName); \
	DECLARE_FUNCTION(execGetRootFolder); \
	DECLARE_FUNCTION(execSetRootFolder);


struct Z_Construct_UClass_UPCapSessionTemplate_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPCapSessionTemplate_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapSessionTemplate(); \
	friend struct ::Z_Construct_UClass_UPCapSessionTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPCapSessionTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapSessionTemplate, UPCapDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPCapSessionTemplate_NoRegister) \
	DECLARE_SERIALIZER(UPCapSessionTemplate)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapSessionTemplate(UPCapSessionTemplate&&) = delete; \
	UPCapSessionTemplate(const UPCapSessionTemplate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapSessionTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapSessionTemplate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCapSessionTemplate) \
	NO_API virtual ~UPCapSessionTemplate();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_49_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapSessionTemplate;

// ********** End Class UPCapSessionTemplate *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSessionTemplate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
