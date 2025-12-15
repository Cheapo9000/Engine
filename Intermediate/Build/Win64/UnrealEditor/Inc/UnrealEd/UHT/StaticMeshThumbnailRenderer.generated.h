// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/StaticMeshThumbnailRenderer.h"

#ifdef UNREALED_StaticMeshThumbnailRenderer_generated_h
#error "StaticMeshThumbnailRenderer.generated.h already included, missing '#pragma once' in StaticMeshThumbnailRenderer.h"
#endif
#define UNREALED_StaticMeshThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStaticMeshThumbnailRenderer *********************************************
struct Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UStaticMeshThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UStaticMeshThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UStaticMeshThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UStaticMeshThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UStaticMeshThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshThumbnailRenderer(UStaticMeshThumbnailRenderer&&) = delete; \
	UStaticMeshThumbnailRenderer(const UStaticMeshThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~UStaticMeshThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshThumbnailRenderer;

// ********** End Class UStaticMeshThumbnailRenderer ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
