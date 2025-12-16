// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnalyticsBlueprintLibrary.h"

#ifdef ANALYTICSBLUEPRINTLIBRARY_AnalyticsBlueprintLibrary_generated_h
#error "AnalyticsBlueprintLibrary.generated.h already included, missing '#pragma once' in AnalyticsBlueprintLibrary.h"
#endif
#define ANALYTICSBLUEPRINTLIBRARY_AnalyticsBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnalyticsEventAttr;

// ********** Begin ScriptStruct FAnalyticsEventAttr ***********************************************
struct Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics;
#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics; \
	ANALYTICSBLUEPRINTLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAnalyticsEventAttr;
// ********** End ScriptStruct FAnalyticsEventAttr *************************************************

// ********** Begin Class UAnalyticsBlueprintLibrary ***********************************************
#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRecordProgress); \
	DECLARE_FUNCTION(execRecordProgressWithAttributes); \
	DECLARE_FUNCTION(execRecordProgressWithFullHierarchyAndAttributes); \
	DECLARE_FUNCTION(execRecordError); \
	DECLARE_FUNCTION(execRecordErrorWithAttributes); \
	DECLARE_FUNCTION(execSetBuildInfo); \
	DECLARE_FUNCTION(execSetGender); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execSetAge); \
	DECLARE_FUNCTION(execSetUserId); \
	DECLARE_FUNCTION(execGetUserId); \
	DECLARE_FUNCTION(execSetSessionId); \
	DECLARE_FUNCTION(execGetSessionId); \
	DECLARE_FUNCTION(execMakeEventAttribute); \
	DECLARE_FUNCTION(execRecordCurrencyGivenWithAttributes); \
	DECLARE_FUNCTION(execRecordCurrencyGiven); \
	DECLARE_FUNCTION(execRecordCurrencyPurchase); \
	DECLARE_FUNCTION(execRecordSimpleCurrencyPurchaseWithAttributes); \
	DECLARE_FUNCTION(execRecordSimpleCurrencyPurchase); \
	DECLARE_FUNCTION(execRecordSimpleItemPurchaseWithAttributes); \
	DECLARE_FUNCTION(execRecordSimpleItemPurchase); \
	DECLARE_FUNCTION(execRecordItemPurchase); \
	DECLARE_FUNCTION(execRecordEventWithAttributes); \
	DECLARE_FUNCTION(execRecordEventWithAttribute); \
	DECLARE_FUNCTION(execRecordEvent); \
	DECLARE_FUNCTION(execFlushEvents); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execStartSessionWithAttributes); \
	DECLARE_FUNCTION(execStartSession);


struct Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics;
ANALYTICSBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnalyticsBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAnalyticsBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANALYTICSBLUEPRINTLIBRARY_API UClass* ::Z_Construct_UClass_UAnalyticsBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnalyticsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnalyticsBlueprintLibrary"), Z_Construct_UClass_UAnalyticsBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnalyticsBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnalyticsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnalyticsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnalyticsBlueprintLibrary(UAnalyticsBlueprintLibrary&&) = delete; \
	UAnalyticsBlueprintLibrary(const UAnalyticsBlueprintLibrary&) = delete; \
	NO_API virtual ~UAnalyticsBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnalyticsBlueprintLibrary;

// ********** End Class UAnalyticsBlueprintLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
