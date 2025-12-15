// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/WorldThumbnailRenderer.h"

#ifdef UNREALED_WorldThumbnailRenderer_generated_h
#error "WorldThumbnailRenderer.generated.h already included, missing '#pragma once' in WorldThumbnailRenderer.h"
#endif
#define UNREALED_WorldThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldThumbnailRenderer **************************************************
struct Z_Construct_UClass_UWorldThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUWorldThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UWorldThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UWorldThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldThumbnailRenderer(UWorldThumbnailRenderer&&) = delete; \
	UWorldThumbnailRenderer(const UWorldThumbnailRenderer&) = delete; \
	NO_API virtual ~UWorldThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_19_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldThumbnailRenderer;

// ********** End Class UWorldThumbnailRenderer ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
