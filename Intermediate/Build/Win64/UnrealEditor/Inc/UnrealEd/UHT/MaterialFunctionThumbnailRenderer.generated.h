// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/MaterialFunctionThumbnailRenderer.h"

#ifdef UNREALED_MaterialFunctionThumbnailRenderer_generated_h
#error "MaterialFunctionThumbnailRenderer.generated.h already included, missing '#pragma once' in MaterialFunctionThumbnailRenderer.h"
#endif
#define UNREALED_MaterialFunctionThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialFunctionThumbnailRenderer ***************************************
struct Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialFunctionThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialFunctionThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UMaterialFunctionThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialFunctionThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialFunctionThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialFunctionThumbnailRenderer(UMaterialFunctionThumbnailRenderer&&) = delete; \
	UMaterialFunctionThumbnailRenderer(const UMaterialFunctionThumbnailRenderer&) = delete; \
	NO_API virtual ~UMaterialFunctionThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialFunctionThumbnailRenderer;

// ********** End Class UMaterialFunctionThumbnailRenderer *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
