// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/FontThumbnailRenderer.h"

#ifdef UNREALED_FontThumbnailRenderer_generated_h
#error "FontThumbnailRenderer.generated.h already included, missing '#pragma once' in FontThumbnailRenderer.h"
#endif
#define UNREALED_FontThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFontThumbnailRenderer ***************************************************
struct Z_Construct_UClass_UFontThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFontThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFontThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UFontThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFontThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UFontThumbnailRenderer, UThumbnailRenderer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFontThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UFontThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFontThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFontThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFontThumbnailRenderer(UFontThumbnailRenderer&&) = delete; \
	UFontThumbnailRenderer(const UFontThumbnailRenderer&) = delete; \
	NO_API virtual ~UFontThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFontThumbnailRenderer;

// ********** End Class UFontThumbnailRenderer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
