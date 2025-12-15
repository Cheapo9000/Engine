// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/BlendSpaceThumbnailRenderer.h"

#ifdef UNREALED_BlendSpaceThumbnailRenderer_generated_h
#error "BlendSpaceThumbnailRenderer.generated.h already included, missing '#pragma once' in BlendSpaceThumbnailRenderer.h"
#endif
#define UNREALED_BlendSpaceThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlendSpaceThumbnailRenderer *********************************************
struct Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpaceThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBlendSpaceThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendSpaceThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBlendSpaceThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UBlendSpaceThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBlendSpaceThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBlendSpaceThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendSpaceThumbnailRenderer(UBlendSpaceThumbnailRenderer&&) = delete; \
	UBlendSpaceThumbnailRenderer(const UBlendSpaceThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~UBlendSpaceThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendSpaceThumbnailRenderer;

// ********** End Class UBlendSpaceThumbnailRenderer ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
