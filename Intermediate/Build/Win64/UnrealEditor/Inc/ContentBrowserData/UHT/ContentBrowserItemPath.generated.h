// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserItemPath.h"

#ifdef CONTENTBROWSERDATA_ContentBrowserItemPath_generated_h
#error "ContentBrowserItemPath.generated.h already included, missing '#pragma once' in ContentBrowserItemPath.h"
#endif
#define CONTENTBROWSERDATA_ContentBrowserItemPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EContentBrowserPathType : uint8;
struct FContentBrowserItemPath;

// ********** Begin ScriptStruct FContentBrowserItemPath *******************************************
struct Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserItemPath;
// ********** End ScriptStruct FContentBrowserItemPath *********************************************

// ********** Begin Class UContentBrowserItemPathExtensions ****************************************
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBreakContentBrowserItemPath); \
	DECLARE_FUNCTION(execMakeContentBrowserItemPath); \
	DECLARE_FUNCTION(execGetInternalPath); \
	DECLARE_FUNCTION(execGetVirtualPath); \
	DECLARE_FUNCTION(execSetPath);


struct Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics;
CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserItemPathExtensions_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserItemPathExtensions(); \
	friend struct ::Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSERDATA_API UClass* ::Z_Construct_UClass_UContentBrowserItemPathExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserItemPathExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContentBrowserData"), Z_Construct_UClass_UContentBrowserItemPathExtensions_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserItemPathExtensions)


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBrowserItemPathExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserItemPathExtensions(UContentBrowserItemPathExtensions&&) = delete; \
	UContentBrowserItemPathExtensions(const UContentBrowserItemPathExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowserItemPathExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserItemPathExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserItemPathExtensions) \
	NO_API virtual ~UContentBrowserItemPathExtensions();


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_96_PROLOG
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserItemPathExtensions;

// ********** End Class UContentBrowserItemPathExtensions ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
