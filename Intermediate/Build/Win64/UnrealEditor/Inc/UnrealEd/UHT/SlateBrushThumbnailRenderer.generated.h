// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/SlateBrushThumbnailRenderer.h"

#ifdef UNREALED_SlateBrushThumbnailRenderer_generated_h
#error "SlateBrushThumbnailRenderer.generated.h already included, missing '#pragma once' in SlateBrushThumbnailRenderer.h"
#endif
#define UNREALED_SlateBrushThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USlateBrushThumbnailRenderer *********************************************
struct Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_USlateBrushThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSlateBrushThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USlateBrushThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateBrushThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USlateBrushThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(USlateBrushThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USlateBrushThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateBrushThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USlateBrushThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateBrushThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateBrushThumbnailRenderer(USlateBrushThumbnailRenderer&&) = delete; \
	USlateBrushThumbnailRenderer(const USlateBrushThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~USlateBrushThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_20_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateBrushThumbnailRenderer;

// ********** End Class USlateBrushThumbnailRenderer ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
