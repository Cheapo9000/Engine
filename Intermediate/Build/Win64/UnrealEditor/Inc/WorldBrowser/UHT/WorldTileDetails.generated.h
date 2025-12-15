// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tiles/WorldTileDetails.h"

#ifdef WORLDBROWSER_WorldTileDetails_generated_h
#error "WorldTileDetails.generated.h already included, missing '#pragma once' in WorldTileDetails.h"
#endif
#define WORLDBROWSER_WorldTileDetails_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTileLODEntryDetails **********************************************
struct Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics;
#define FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics; \
	WORLDBROWSER_API static class UScriptStruct* StaticStruct();


struct FTileLODEntryDetails;
// ********** End ScriptStruct FTileLODEntryDetails ************************************************

// ********** Begin Class UWorldTileDetails ********************************************************
struct Z_Construct_UClass_UWorldTileDetails_Statics;
WORLDBROWSER_API UClass* Z_Construct_UClass_UWorldTileDetails_NoRegister();

#define FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUWorldTileDetails(); \
	friend struct ::Z_Construct_UClass_UWorldTileDetails_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDBROWSER_API UClass* ::Z_Construct_UClass_UWorldTileDetails_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldTileDetails, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldBrowser"), Z_Construct_UClass_UWorldTileDetails_NoRegister) \
	DECLARE_SERIALIZER(UWorldTileDetails)


#define FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldTileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldTileDetails) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldTileDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldTileDetails); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldTileDetails(UWorldTileDetails&&) = delete; \
	UWorldTileDetails(const UWorldTileDetails&) = delete; \
	NO_API virtual ~UWorldTileDetails();


#define FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_46_PROLOG
#define FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_49_INCLASS \
	FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldTileDetails;

// ********** End Class UWorldTileDetails **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
