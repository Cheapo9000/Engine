// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPBookmarkEditorBlueprintLibrary.h"

#ifdef VPBOOKMARKEDITOR_VPBookmarkEditorBlueprintLibrary_generated_h
#error "VPBookmarkEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in VPBookmarkEditorBlueprintLibrary.h"
#endif
#define VPBOOKMARKEDITOR_VPBookmarkEditorBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UVPBookmark;
struct FVPBookmarkCreationContext;

// ********** Begin Class UVPBookmarkEditorBlueprintLibrary ****************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllActorsClassThamImplementsVPBookmarkInterface); \
	DECLARE_FUNCTION(execAddBookmarkAtCurrentLevelEditorPosition); \
	DECLARE_FUNCTION(execJumpToBookmarkInLevelEditorByIndex); \
	DECLARE_FUNCTION(execJumpToBookmarkInLevelEditor);


struct Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics;
VPBOOKMARKEDITOR_API UClass* Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPBookmarkEditorBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPBOOKMARKEDITOR_API UClass* ::Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPBookmarkEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPBookmarkEditor"), Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVPBookmarkEditorBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmarkEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPBookmarkEditorBlueprintLibrary(UVPBookmarkEditorBlueprintLibrary&&) = delete; \
	UVPBookmarkEditorBlueprintLibrary(const UVPBookmarkEditorBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmarkEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmarkEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmarkEditorBlueprintLibrary) \
	NO_API virtual ~UVPBookmarkEditorBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPBookmarkEditorBlueprintLibrary;

// ********** End Class UVPBookmarkEditorBlueprintLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
