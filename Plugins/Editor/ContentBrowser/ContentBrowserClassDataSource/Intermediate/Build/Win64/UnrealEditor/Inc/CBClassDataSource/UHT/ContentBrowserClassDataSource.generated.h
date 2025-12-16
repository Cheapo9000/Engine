// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserClassDataSource.h"

#ifdef CONTENTBROWSERCLASSDATASOURCE_ContentBrowserClassDataSource_generated_h
#error "ContentBrowserClassDataSource.generated.h already included, missing '#pragma once' in ContentBrowserClassDataSource.h"
#endif
#define CONTENTBROWSERCLASSDATASOURCE_ContentBrowserClassDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FContentBrowserCompiledClassDataFilter ****************************
struct Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics;
#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics; \
	CONTENTBROWSERCLASSDATASOURCE_API static class UScriptStruct* StaticStruct();


struct FContentBrowserCompiledClassDataFilter;
// ********** End ScriptStruct FContentBrowserCompiledClassDataFilter ******************************

// ********** Begin Class UContentBrowserClassDataSource *******************************************
struct Z_Construct_UClass_UContentBrowserClassDataSource_Statics;
CONTENTBROWSERCLASSDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserClassDataSource_NoRegister();

#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserClassDataSource(); \
	friend struct ::Z_Construct_UClass_UContentBrowserClassDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSERCLASSDATASOURCE_API UClass* ::Z_Construct_UClass_UContentBrowserClassDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserClassDataSource, UContentBrowserDataSource, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ContentBrowserClassDataSource"), Z_Construct_UClass_UContentBrowserClassDataSource_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserClassDataSource)


#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTENTBROWSERCLASSDATASOURCE_API UContentBrowserClassDataSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserClassDataSource(UContentBrowserClassDataSource&&) = delete; \
	UContentBrowserClassDataSource(const UContentBrowserClassDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSERCLASSDATASOURCE_API, UContentBrowserClassDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserClassDataSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserClassDataSource) \
	CONTENTBROWSERCLASSDATASOURCE_API virtual ~UContentBrowserClassDataSource();


#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_33_PROLOG
#define FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserClassDataSource;

// ********** End Class UContentBrowserClassDataSource *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
