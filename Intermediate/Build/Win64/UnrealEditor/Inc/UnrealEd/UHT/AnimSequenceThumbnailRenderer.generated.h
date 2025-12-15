// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/AnimSequenceThumbnailRenderer.h"

#ifdef UNREALED_AnimSequenceThumbnailRenderer_generated_h
#error "AnimSequenceThumbnailRenderer.generated.h already included, missing '#pragma once' in AnimSequenceThumbnailRenderer.h"
#endif
#define UNREALED_AnimSequenceThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimSequenceThumbnailRenderer *******************************************
struct Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnimSequenceThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequenceThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnimSequenceThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSequenceThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnimSequenceThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UAnimSequenceThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimSequenceThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimSequenceThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSequenceThumbnailRenderer(UAnimSequenceThumbnailRenderer&&) = delete; \
	UAnimSequenceThumbnailRenderer(const UAnimSequenceThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~UAnimSequenceThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSequenceThumbnailRenderer;

// ********** End Class UAnimSequenceThumbnailRenderer *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
