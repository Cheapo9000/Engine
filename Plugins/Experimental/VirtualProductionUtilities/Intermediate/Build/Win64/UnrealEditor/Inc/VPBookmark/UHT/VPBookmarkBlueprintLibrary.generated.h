// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPBookmarkBlueprintLibrary.h"

#ifdef VPBOOKMARK_VPBookmarkBlueprintLibrary_generated_h
#error "VPBookmarkBlueprintLibrary.generated.h already included, missing '#pragma once' in VPBookmarkBlueprintLibrary.h"
#endif
#define VPBOOKMARK_VPBookmarkBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UVPBookmark;

// ********** Begin Class UVPBookmarkBlueprintLibrary **********************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateVPBookmarkName); \
	DECLARE_FUNCTION(execGetAllVPBookmark); \
	DECLARE_FUNCTION(execGetAllVPBookmarkActors); \
	DECLARE_FUNCTION(execFindVPBookmark);


struct Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics;
VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmarkBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPBookmarkBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPBOOKMARK_API UClass* ::Z_Construct_UClass_UVPBookmarkBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPBookmarkBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPBookmark"), Z_Construct_UClass_UVPBookmarkBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVPBookmarkBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmarkBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPBookmarkBlueprintLibrary(UVPBookmarkBlueprintLibrary&&) = delete; \
	UVPBookmarkBlueprintLibrary(const UVPBookmarkBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmarkBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmarkBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmarkBlueprintLibrary) \
	NO_API virtual ~UVPBookmarkBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPBookmarkBlueprintLibrary;

// ********** End Class UVPBookmarkBlueprintLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
