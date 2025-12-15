// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserItem.h"

#ifdef CONTENTBROWSERDATA_ContentBrowserItem_generated_h
#error "ContentBrowserItem.generated.h already included, missing '#pragma once' in ContentBrowserItem.h"
#endif
#define CONTENTBROWSERDATA_ContentBrowserItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FContentBrowserItem;

// ********** Begin ScriptStruct FContentBrowserItem ***********************************************
struct Z_Construct_UScriptStruct_FContentBrowserItem_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserItem_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserItem;
// ********** End ScriptStruct FContentBrowserItem *************************************************

// ********** Begin Class UContentBrowserItemLibrary ***********************************************
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_518_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetVirtualPath); \
	DECLARE_FUNCTION(execIsFile); \
	DECLARE_FUNCTION(execIsFolder);


struct Z_Construct_UClass_UContentBrowserItemLibrary_Statics;
CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserItemLibrary_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_518_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserItemLibrary(); \
	friend struct ::Z_Construct_UClass_UContentBrowserItemLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSERDATA_API UClass* ::Z_Construct_UClass_UContentBrowserItemLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserItemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContentBrowserData"), Z_Construct_UClass_UContentBrowserItemLibrary_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserItemLibrary)


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_518_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTENTBROWSERDATA_API UContentBrowserItemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserItemLibrary(UContentBrowserItemLibrary&&) = delete; \
	UContentBrowserItemLibrary(const UContentBrowserItemLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSERDATA_API, UContentBrowserItemLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserItemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserItemLibrary) \
	CONTENTBROWSERDATA_API virtual ~UContentBrowserItemLibrary();


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_515_PROLOG
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_518_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_518_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_518_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_518_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserItemLibrary;

// ********** End Class UContentBrowserItemLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
