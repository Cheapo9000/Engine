// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/SoundWaveThumbnailRenderer.h"

#ifdef UNREALED_SoundWaveThumbnailRenderer_generated_h
#error "SoundWaveThumbnailRenderer.generated.h already included, missing '#pragma once' in SoundWaveThumbnailRenderer.h"
#endif
#define UNREALED_SoundWaveThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundWaveThumbnailRenderer **********************************************
struct Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_USoundWaveThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SoundWaveThumbnailRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundWaveThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USoundWaveThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundWaveThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USoundWaveThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(USoundWaveThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SoundWaveThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundWaveThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundWaveThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundWaveThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundWaveThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundWaveThumbnailRenderer(USoundWaveThumbnailRenderer&&) = delete; \
	USoundWaveThumbnailRenderer(const USoundWaveThumbnailRenderer&) = delete; \
	NO_API virtual ~USoundWaveThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SoundWaveThumbnailRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SoundWaveThumbnailRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SoundWaveThumbnailRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SoundWaveThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundWaveThumbnailRenderer;

// ********** End Class USoundWaveThumbnailRenderer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SoundWaveThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
