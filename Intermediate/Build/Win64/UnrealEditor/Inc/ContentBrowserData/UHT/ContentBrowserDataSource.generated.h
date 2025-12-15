// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserDataSource.h"

#ifdef CONTENTBROWSERDATA_ContentBrowserDataSource_generated_h
#error "ContentBrowserDataSource.generated.h already included, missing '#pragma once' in ContentBrowserDataSource.h"
#endif
#define CONTENTBROWSERDATA_ContentBrowserDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UContentBrowserDataSource ************************************************
struct Z_Construct_UClass_UContentBrowserDataSource_Statics;
CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSource_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserDataSource(); \
	friend struct ::Z_Construct_UClass_UContentBrowserDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSERDATA_API UClass* ::Z_Construct_UClass_UContentBrowserDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserDataSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ContentBrowserData"), Z_Construct_UClass_UContentBrowserDataSource_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserDataSource)


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTENTBROWSERDATA_API UContentBrowserDataSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserDataSource(UContentBrowserDataSource&&) = delete; \
	UContentBrowserDataSource(const UContentBrowserDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSERDATA_API, UContentBrowserDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserDataSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserDataSource) \
	CONTENTBROWSERDATA_API virtual ~UContentBrowserDataSource();


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_141_PROLOG
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_144_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserDataSource;

// ********** End Class UContentBrowserDataSource **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
