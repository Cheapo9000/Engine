// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shared/MediaSourceThumbnailRenderer.h"

#ifdef MEDIAPLAYEREDITOR_MediaSourceThumbnailRenderer_generated_h
#error "MediaSourceThumbnailRenderer.generated.h already included, missing '#pragma once' in MediaSourceThumbnailRenderer.h"
#endif
#define MEDIAPLAYEREDITOR_MediaSourceThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaSourceThumbnailRenderer ********************************************
struct Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics;
MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaSourceThumbnailRenderer_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSourceThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLAYEREDITOR_API UClass* ::Z_Construct_UClass_UMediaSourceThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaSourceThumbnailRenderer, UTextureThumbnailRenderer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), Z_Construct_UClass_UMediaSourceThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UMediaSourceThumbnailRenderer)


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSourceThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaSourceThumbnailRenderer(UMediaSourceThumbnailRenderer&&) = delete; \
	UMediaSourceThumbnailRenderer(const UMediaSourceThumbnailRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSourceThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSourceThumbnailRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSourceThumbnailRenderer) \
	NO_API virtual ~UMediaSourceThumbnailRenderer();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_14_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaSourceThumbnailRenderer;

// ********** End Class UMediaSourceThumbnailRenderer **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
