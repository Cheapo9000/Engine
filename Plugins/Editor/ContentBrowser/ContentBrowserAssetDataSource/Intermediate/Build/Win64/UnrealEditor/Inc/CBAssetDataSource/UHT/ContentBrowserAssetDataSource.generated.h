// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserAssetDataSource.h"

#ifdef CONTENTBROWSERASSETDATASOURCE_ContentBrowserAssetDataSource_generated_h
#error "ContentBrowserAssetDataSource.generated.h already included, missing '#pragma once' in ContentBrowserAssetDataSource.h"
#endif
#define CONTENTBROWSERASSETDATASOURCE_ContentBrowserAssetDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FContentBrowserCompiledAssetDataFilter ****************************
struct Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics;
#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics; \
	CONTENTBROWSERASSETDATASOURCE_API static class UScriptStruct* StaticStruct();


struct FContentBrowserCompiledAssetDataFilter;
// ********** End ScriptStruct FContentBrowserCompiledAssetDataFilter ******************************

// ********** Begin ScriptStruct FContentBrowserCompiledUnsupportedAssetDataFilter *****************
struct Z_Construct_UScriptStruct_FContentBrowserCompiledUnsupportedAssetDataFilter_Statics;
#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserCompiledUnsupportedAssetDataFilter_Statics; \
	CONTENTBROWSERASSETDATASOURCE_API static class UScriptStruct* StaticStruct();


struct FContentBrowserCompiledUnsupportedAssetDataFilter;
// ********** End ScriptStruct FContentBrowserCompiledUnsupportedAssetDataFilter *******************

// ********** Begin Class UContentBrowserAssetDataSource *******************************************
struct Z_Construct_UClass_UContentBrowserAssetDataSource_Statics;
CONTENTBROWSERASSETDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserAssetDataSource_NoRegister();

#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserAssetDataSource(); \
	friend struct ::Z_Construct_UClass_UContentBrowserAssetDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSERASSETDATASOURCE_API UClass* ::Z_Construct_UClass_UContentBrowserAssetDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserAssetDataSource, UContentBrowserDataSource, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ContentBrowserAssetDataSource"), Z_Construct_UClass_UContentBrowserAssetDataSource_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserAssetDataSource)


#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTENTBROWSERASSETDATASOURCE_API UContentBrowserAssetDataSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserAssetDataSource(UContentBrowserAssetDataSource&&) = delete; \
	UContentBrowserAssetDataSource(const UContentBrowserAssetDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSERASSETDATASOURCE_API, UContentBrowserAssetDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserAssetDataSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserAssetDataSource) \
	CONTENTBROWSERASSETDATASOURCE_API virtual ~UContentBrowserAssetDataSource();


#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_85_PROLOG
#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserAssetDataSource;

// ********** End Class UContentBrowserAssetDataSource *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
