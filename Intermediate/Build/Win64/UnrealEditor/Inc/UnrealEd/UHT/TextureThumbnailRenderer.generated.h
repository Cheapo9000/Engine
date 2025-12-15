// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/TextureThumbnailRenderer.h"

#ifdef UNREALED_TextureThumbnailRenderer_generated_h
#error "TextureThumbnailRenderer.generated.h already included, missing '#pragma once' in TextureThumbnailRenderer.h"
#endif
#define UNREALED_TextureThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureThumbnailRenderer ************************************************
struct Z_Construct_UClass_UTextureThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_TextureThumbnailRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTextureThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UTextureThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTextureThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureThumbnailRenderer, UThumbnailRenderer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTextureThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UTextureThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_TextureThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTextureThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTextureThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureThumbnailRenderer(UTextureThumbnailRenderer&&) = delete; \
	UTextureThumbnailRenderer(const UTextureThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~UTextureThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_TextureThumbnailRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_TextureThumbnailRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_TextureThumbnailRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_TextureThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureThumbnailRenderer;

// ********** End Class UTextureThumbnailRenderer **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_TextureThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
