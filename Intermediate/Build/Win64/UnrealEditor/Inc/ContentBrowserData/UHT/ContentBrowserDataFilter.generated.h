// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserDataFilter.h"

#ifdef CONTENTBROWSERDATA_ContentBrowserDataFilter_generated_h
#error "ContentBrowserDataFilter.generated.h already included, missing '#pragma once' in ContentBrowserDataFilter.h"
#endif
#define CONTENTBROWSERDATA_ContentBrowserDataFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FContentBrowserDataFilter *****************************************
struct Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_205_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserDataFilter;
// ********** End ScriptStruct FContentBrowserDataFilter *******************************************

// ********** Begin ScriptStruct FContentBrowserDataObjectFilter ***********************************
struct Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_257_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserDataObjectFilter;
// ********** End ScriptStruct FContentBrowserDataObjectFilter *************************************

// ********** Begin ScriptStruct FContentBrowserDataPackageFilter **********************************
struct Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_286_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserDataPackageFilter;
// ********** End ScriptStruct FContentBrowserDataPackageFilter ************************************

// ********** Begin ScriptStruct FContentBrowserDataClassFilter ************************************
struct Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_324_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserDataClassFilter;
// ********** End ScriptStruct FContentBrowserDataClassFilter **************************************

// ********** Begin ScriptStruct FContentBrowserDataCollectionFilter *******************************
struct Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_354_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserDataCollectionFilter;
// ********** End ScriptStruct FContentBrowserDataCollectionFilter *********************************

// ********** Begin ScriptStruct FContentBrowserDataUnsupportedClassFilter *************************
struct Z_Construct_UScriptStruct_FContentBrowserDataUnsupportedClassFilter_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_406_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserDataUnsupportedClassFilter_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserDataUnsupportedClassFilter;
// ********** End ScriptStruct FContentBrowserDataUnsupportedClassFilter ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h

// ********** Begin Enum EContentBrowserItemTypeFilter *********************************************
#define FOREACH_ENUM_ECONTENTBROWSERITEMTYPEFILTER(op) \
	op(EContentBrowserItemTypeFilter::IncludeNone) \
	op(EContentBrowserItemTypeFilter::IncludeFolders) \
	op(EContentBrowserItemTypeFilter::IncludeFiles) \
	op(EContentBrowserItemTypeFilter::IncludeAll) 

enum class EContentBrowserItemTypeFilter : uint8;
template<> struct TIsUEnumClass<EContentBrowserItemTypeFilter> { enum { Value = true }; };
template<> CONTENTBROWSERDATA_NON_ATTRIBUTED_API UEnum* StaticEnum<EContentBrowserItemTypeFilter>();
// ********** End Enum EContentBrowserItemTypeFilter ***********************************************

// ********** Begin Enum EContentBrowserItemCategoryFilter *****************************************
#define FOREACH_ENUM_ECONTENTBROWSERITEMCATEGORYFILTER(op) \
	op(EContentBrowserItemCategoryFilter::IncludeNone) \
	op(EContentBrowserItemCategoryFilter::IncludeAssets) \
	op(EContentBrowserItemCategoryFilter::IncludeClasses) \
	op(EContentBrowserItemCategoryFilter::IncludeCollections) \
	op(EContentBrowserItemCategoryFilter::IncludeRedirectors) \
	op(EContentBrowserItemCategoryFilter::IncludeMisc) \
	op(EContentBrowserItemCategoryFilter::IncludeAll) 

enum class EContentBrowserItemCategoryFilter : uint8;
template<> struct TIsUEnumClass<EContentBrowserItemCategoryFilter> { enum { Value = true }; };
template<> CONTENTBROWSERDATA_NON_ATTRIBUTED_API UEnum* StaticEnum<EContentBrowserItemCategoryFilter>();
// ********** End Enum EContentBrowserItemCategoryFilter *******************************************

// ********** Begin Enum EContentBrowserItemAttributeFilter ****************************************
#define FOREACH_ENUM_ECONTENTBROWSERITEMATTRIBUTEFILTER(op) \
	op(EContentBrowserItemAttributeFilter::IncludeNone) \
	op(EContentBrowserItemAttributeFilter::IncludeProject) \
	op(EContentBrowserItemAttributeFilter::IncludeEngine) \
	op(EContentBrowserItemAttributeFilter::IncludePlugins) \
	op(EContentBrowserItemAttributeFilter::IncludeDeveloper) \
	op(EContentBrowserItemAttributeFilter::IncludeLocalized) \
	op(EContentBrowserItemAttributeFilter::IncludeAll) 

enum class EContentBrowserItemAttributeFilter : uint8;
template<> struct TIsUEnumClass<EContentBrowserItemAttributeFilter> { enum { Value = true }; };
template<> CONTENTBROWSERDATA_NON_ATTRIBUTED_API UEnum* StaticEnum<EContentBrowserItemAttributeFilter>();
// ********** End Enum EContentBrowserItemAttributeFilter ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
