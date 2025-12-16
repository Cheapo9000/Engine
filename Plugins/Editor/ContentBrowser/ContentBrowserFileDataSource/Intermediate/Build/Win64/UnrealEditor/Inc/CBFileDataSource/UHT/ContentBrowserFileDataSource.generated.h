// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserFileDataSource.h"

#ifdef CONTENTBROWSERFILEDATASOURCE_ContentBrowserFileDataSource_generated_h
#error "ContentBrowserFileDataSource.generated.h already included, missing '#pragma once' in ContentBrowserFileDataSource.h"
#endif
#define CONTENTBROWSERFILEDATASOURCE_ContentBrowserFileDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FContentBrowserCompiledFileDataFilter *****************************
struct Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics;
#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics; \
	CONTENTBROWSERFILEDATASOURCE_API static class UScriptStruct* StaticStruct();


struct FContentBrowserCompiledFileDataFilter;
// ********** End ScriptStruct FContentBrowserCompiledFileDataFilter *******************************

// ********** Begin Class UContentBrowserFileDataSource ********************************************
struct Z_Construct_UClass_UContentBrowserFileDataSource_Statics;
CONTENTBROWSERFILEDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserFileDataSource_NoRegister();

#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserFileDataSource(); \
	friend struct ::Z_Construct_UClass_UContentBrowserFileDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSERFILEDATASOURCE_API UClass* ::Z_Construct_UClass_UContentBrowserFileDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserFileDataSource, UContentBrowserDataSource, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ContentBrowserFileDataSource"), Z_Construct_UClass_UContentBrowserFileDataSource_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserFileDataSource)


#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTENTBROWSERFILEDATASOURCE_API UContentBrowserFileDataSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserFileDataSource(UContentBrowserFileDataSource&&) = delete; \
	UContentBrowserFileDataSource(const UContentBrowserFileDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSERFILEDATASOURCE_API, UContentBrowserFileDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserFileDataSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserFileDataSource) \
	CONTENTBROWSERFILEDATASOURCE_API virtual ~UContentBrowserFileDataSource();


#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_32_PROLOG
#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserFileDataSource;

// ********** End Class UContentBrowserFileDataSource **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
