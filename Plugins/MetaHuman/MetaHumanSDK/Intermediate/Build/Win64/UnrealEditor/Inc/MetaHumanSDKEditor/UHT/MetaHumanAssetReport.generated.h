// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanAssetReport.h"

#ifdef METAHUMANSDKEDITOR_MetaHumanAssetReport_generated_h
#error "MetaHumanAssetReport.generated.h already included, missing '#pragma once' in MetaHumanAssetReport.h"
#endif
#define METAHUMANSDKEDITOR_MetaHumanAssetReport_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMetaHumanOperationResult : uint8;
struct FMetaHumanAssetReportItem;

// ********** Begin ScriptStruct FMetaHumanAssetReportItem *****************************************
struct Z_Construct_UScriptStruct_FMetaHumanAssetReportItem_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanAssetReportItem_Statics; \
	METAHUMANSDKEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanAssetReportItem;
// ********** End ScriptStruct FMetaHumanAssetReportItem *******************************************

// ********** Begin Class UMetaHumanAssetReport ****************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSilent); \
	DECLARE_FUNCTION(execSetVerbose); \
	DECLARE_FUNCTION(execSetWarningsAsErrors); \
	DECLARE_FUNCTION(execHasWarnings); \
	DECLARE_FUNCTION(execGetReportResult); \
	DECLARE_FUNCTION(execGenerateRichTextReport); \
	DECLARE_FUNCTION(execGenerateRawReport); \
	DECLARE_FUNCTION(execGenerateJsonReport); \
	DECLARE_FUNCTION(execGenerateHtmlReport); \
	DECLARE_FUNCTION(execAddError); \
	DECLARE_FUNCTION(execAddWarning); \
	DECLARE_FUNCTION(execAddInfo); \
	DECLARE_FUNCTION(execAddVerbose); \
	DECLARE_FUNCTION(execSetSubject);


struct Z_Construct_UClass_UMetaHumanAssetReport_Statics;
METAHUMANSDKEDITOR_API UClass* Z_Construct_UClass_UMetaHumanAssetReport_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanAssetReport(); \
	friend struct ::Z_Construct_UClass_UMetaHumanAssetReport_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANSDKEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanAssetReport_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanAssetReport, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanSDKEditor"), Z_Construct_UClass_UMetaHumanAssetReport_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanAssetReport)


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANSDKEDITOR_API UMetaHumanAssetReport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanAssetReport(UMetaHumanAssetReport&&) = delete; \
	UMetaHumanAssetReport(const UMetaHumanAssetReport&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANSDKEDITOR_API, UMetaHumanAssetReport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanAssetReport); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanAssetReport) \
	METAHUMANSDKEDITOR_API virtual ~UMetaHumanAssetReport();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h_39_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanAssetReport;

// ********** End Class UMetaHumanAssetReport ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanAssetReport_h

// ********** Begin Enum EMetaHumanOperationResult *************************************************
#define FOREACH_ENUM_EMETAHUMANOPERATIONRESULT(op) \
	op(EMetaHumanOperationResult::Success) \
	op(EMetaHumanOperationResult::Failure) 

enum class EMetaHumanOperationResult : uint8;
template<> struct TIsUEnumClass<EMetaHumanOperationResult> { enum { Value = true }; };
template<> METAHUMANSDKEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanOperationResult>();
// ********** End Enum EMetaHumanOperationResult ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
