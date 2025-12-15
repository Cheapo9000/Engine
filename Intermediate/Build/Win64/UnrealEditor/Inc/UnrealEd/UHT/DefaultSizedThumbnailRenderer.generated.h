// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/DefaultSizedThumbnailRenderer.h"

#ifdef UNREALED_DefaultSizedThumbnailRenderer_generated_h
#error "DefaultSizedThumbnailRenderer.generated.h already included, missing '#pragma once' in DefaultSizedThumbnailRenderer.h"
#endif
#define UNREALED_DefaultSizedThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDefaultSizedThumbnailRenderer *******************************************
struct Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDefaultSizedThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDefaultSizedThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDefaultSizedThumbnailRenderer, UThumbnailRenderer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDefaultSizedThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UDefaultSizedThumbnailRenderer) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDefaultSizedThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultSizedThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDefaultSizedThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultSizedThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDefaultSizedThumbnailRenderer(UDefaultSizedThumbnailRenderer&&) = delete; \
	UDefaultSizedThumbnailRenderer(const UDefaultSizedThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~UDefaultSizedThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDefaultSizedThumbnailRenderer;

// ********** End Class UDefaultSizedThumbnailRenderer *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
