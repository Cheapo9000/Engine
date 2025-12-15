// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/SkeletalMeshThumbnailRenderer.h"

#ifdef UNREALED_SkeletalMeshThumbnailRenderer_generated_h
#error "SkeletalMeshThumbnailRenderer.generated.h already included, missing '#pragma once' in SkeletalMeshThumbnailRenderer.h"
#endif
#define UNREALED_SkeletalMeshThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletalMeshThumbnailRenderer *******************************************
struct Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USkeletalMeshThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USkeletalMeshThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshThumbnailRenderer(USkeletalMeshThumbnailRenderer&&) = delete; \
	USkeletalMeshThumbnailRenderer(const USkeletalMeshThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~USkeletalMeshThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_19_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_22_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshThumbnailRenderer;

// ********** End Class USkeletalMeshThumbnailRenderer *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
