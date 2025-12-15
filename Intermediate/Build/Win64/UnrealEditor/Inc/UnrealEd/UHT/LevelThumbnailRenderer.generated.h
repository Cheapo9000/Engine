// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/LevelThumbnailRenderer.h"

#ifdef UNREALED_LevelThumbnailRenderer_generated_h
#error "LevelThumbnailRenderer.generated.h already included, missing '#pragma once' in LevelThumbnailRenderer.h"
#endif
#define UNREALED_LevelThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelThumbnailRenderer **************************************************
struct Z_Construct_UClass_ULevelThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_ULevelThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_LevelThumbnailRenderer_h_24_INCLASS \
private: \
	static void StaticRegisterNativesULevelThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_ULevelThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_ULevelThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_ULevelThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(ULevelThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_LevelThumbnailRenderer_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelThumbnailRenderer(ULevelThumbnailRenderer&&) = delete; \
	ULevelThumbnailRenderer(const ULevelThumbnailRenderer&) = delete; \
	NO_API virtual ~ULevelThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_LevelThumbnailRenderer_h_21_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_LevelThumbnailRenderer_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_LevelThumbnailRenderer_h_24_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_LevelThumbnailRenderer_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelThumbnailRenderer;

// ********** End Class ULevelThumbnailRenderer ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_LevelThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
