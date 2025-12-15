// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/SkeletonThumbnailRenderer.h"

#ifdef UNREALED_SkeletonThumbnailRenderer_generated_h
#error "SkeletonThumbnailRenderer.generated.h already included, missing '#pragma once' in SkeletonThumbnailRenderer.h"
#endif
#define UNREALED_SkeletonThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletonThumbnailRenderer ***********************************************
struct Z_Construct_UClass_USkeletonThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_USkeletonThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletonThumbnailRenderer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletonThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_USkeletonThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USkeletonThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USkeletonThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(USkeletonThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletonThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USkeletonThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USkeletonThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonThumbnailRenderer(USkeletonThumbnailRenderer&&) = delete; \
	USkeletonThumbnailRenderer(const USkeletonThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~USkeletonThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletonThumbnailRenderer_h_19_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletonThumbnailRenderer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletonThumbnailRenderer_h_22_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletonThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonThumbnailRenderer;

// ********** End Class USkeletonThumbnailRenderer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletonThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
