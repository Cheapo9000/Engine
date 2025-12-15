// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeEdgeFixup.h"

#ifdef LANDSCAPE_LandscapeEdgeFixup_generated_h
#error "LandscapeEdgeFixup.generated.h already included, missing '#pragma once' in LandscapeEdgeFixup.h"
#endif
#define LANDSCAPE_LandscapeEdgeFixup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHeightmapTextureEdgeSnapshot *************************************
struct Z_Construct_UScriptStruct_FHeightmapTextureEdgeSnapshot_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHeightmapTextureEdgeSnapshot_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FHeightmapTextureEdgeSnapshot;
// ********** End ScriptStruct FHeightmapTextureEdgeSnapshot ***************************************

// ********** Begin Class ULandscapeHeightmapTextureEdgeFixup **************************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h_206_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeHeightmapTextureEdgeFixup, LANDSCAPE_API)


struct Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h_206_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeHeightmapTextureEdgeFixup(); \
	friend struct ::Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeHeightmapTextureEdgeFixup, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeHeightmapTextureEdgeFixup) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h_206_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UTexture2D)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h_206_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeHeightmapTextureEdgeFixup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeHeightmapTextureEdgeFixup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeHeightmapTextureEdgeFixup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeHeightmapTextureEdgeFixup); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeHeightmapTextureEdgeFixup(ULandscapeHeightmapTextureEdgeFixup&&) = delete; \
	ULandscapeHeightmapTextureEdgeFixup(const ULandscapeHeightmapTextureEdgeFixup&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeHeightmapTextureEdgeFixup();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h_203_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h_206_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h_206_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h_206_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeHeightmapTextureEdgeFixup;

// ********** End Class ULandscapeHeightmapTextureEdgeFixup ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
