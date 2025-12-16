// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPBookmark.h"

#ifdef VPBOOKMARK_VPBookmark_generated_h
#error "VPBookmark.generated.h already included, missing '#pragma once' in VPBookmark.h"
#endif
#define VPBOOKMARK_VPBookmark_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin ScriptStruct FVPBookmarkViewportData *******************************************
struct Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics;
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVPBookmarkViewportData;
// ********** End ScriptStruct FVPBookmarkViewportData *********************************************

// ********** Begin ScriptStruct FVPBookmarkJumpToSettings *****************************************
struct Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics;
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FBookmarkBaseJumpToSettings Super;


struct FVPBookmarkJumpToSettings;
// ********** End ScriptStruct FVPBookmarkJumpToSettings *******************************************

// ********** Begin Class UVPBookmark **************************************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetAssociatedBookmarkActor); \
	DECLARE_FUNCTION(execGetBookmarkIndex); \
	DECLARE_FUNCTION(execIsActive);


struct Z_Construct_UClass_UVPBookmark_Statics;
VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmark_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPBookmark(); \
	friend struct ::Z_Construct_UClass_UVPBookmark_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPBOOKMARK_API UClass* ::Z_Construct_UClass_UVPBookmark_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPBookmark, UBookmarkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPBookmark"), Z_Construct_UClass_UVPBookmark_NoRegister) \
	DECLARE_SERIALIZER(UVPBookmark)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmark(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPBookmark(UVPBookmark&&) = delete; \
	UVPBookmark(const UVPBookmark&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmark); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmark); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmark) \
	NO_API virtual ~UVPBookmark();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPBookmark;

// ********** End Class UVPBookmark ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
