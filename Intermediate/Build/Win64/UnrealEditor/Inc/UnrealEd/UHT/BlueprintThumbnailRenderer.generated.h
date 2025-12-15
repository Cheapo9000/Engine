// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/BlueprintThumbnailRenderer.h"

#ifdef UNREALED_BlueprintThumbnailRenderer_generated_h
#error "BlueprintThumbnailRenderer.generated.h already included, missing '#pragma once' in BlueprintThumbnailRenderer.h"
#endif
#define UNREALED_BlueprintThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintThumbnailRenderer **********************************************
struct Z_Construct_UClass_UBlueprintThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBlueprintThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlueprintThumbnailRenderer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UBlueprintThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBlueprintThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBlueprintThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlueprintThumbnailRenderer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBlueprintThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBlueprintThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintThumbnailRenderer(UBlueprintThumbnailRenderer&&) = delete; \
	UBlueprintThumbnailRenderer(const UBlueprintThumbnailRenderer&) = delete; \
	UNREALED_API virtual ~UBlueprintThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlueprintThumbnailRenderer_h_20_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlueprintThumbnailRenderer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlueprintThumbnailRenderer_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlueprintThumbnailRenderer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintThumbnailRenderer;

// ********** End Class UBlueprintThumbnailRenderer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlueprintThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
