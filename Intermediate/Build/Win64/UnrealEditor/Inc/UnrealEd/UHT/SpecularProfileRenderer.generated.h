// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/SpecularProfileRenderer.h"

#ifdef UNREALED_SpecularProfileRenderer_generated_h
#error "SpecularProfileRenderer.generated.h already included, missing '#pragma once' in SpecularProfileRenderer.h"
#endif
#define UNREALED_SpecularProfileRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpecularProfileRenderer *************************************************
struct Z_Construct_UClass_USpecularProfileRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_USpecularProfileRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SpecularProfileRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSpecularProfileRenderer(); \
	friend struct ::Z_Construct_UClass_USpecularProfileRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USpecularProfileRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(USpecularProfileRenderer, UTextureThumbnailRenderer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USpecularProfileRenderer_NoRegister) \
	DECLARE_SERIALIZER(USpecularProfileRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SpecularProfileRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpecularProfileRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpecularProfileRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpecularProfileRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpecularProfileRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpecularProfileRenderer(USpecularProfileRenderer&&) = delete; \
	USpecularProfileRenderer(const USpecularProfileRenderer&) = delete; \
	NO_API virtual ~USpecularProfileRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SpecularProfileRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SpecularProfileRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SpecularProfileRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SpecularProfileRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpecularProfileRenderer;

// ********** End Class USpecularProfileRenderer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SpecularProfileRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
