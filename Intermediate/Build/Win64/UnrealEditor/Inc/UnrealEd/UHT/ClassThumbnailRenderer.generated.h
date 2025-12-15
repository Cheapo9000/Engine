// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/ClassThumbnailRenderer.h"

#ifdef UNREALED_ClassThumbnailRenderer_generated_h
#error "ClassThumbnailRenderer.generated.h already included, missing '#pragma once' in ClassThumbnailRenderer.h"
#endif
#define UNREALED_ClassThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClassThumbnailRenderer **************************************************
struct Z_Construct_UClass_UClassThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UClassThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUClassThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UClassThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UClassThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UClassThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UClassThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UClassThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UClassThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UClassThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClassThumbnailRenderer(UClassThumbnailRenderer&&) = delete; \
	UClassThumbnailRenderer(const UClassThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~UClassThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClassThumbnailRenderer;

// ********** End Class UClassThumbnailRenderer ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
