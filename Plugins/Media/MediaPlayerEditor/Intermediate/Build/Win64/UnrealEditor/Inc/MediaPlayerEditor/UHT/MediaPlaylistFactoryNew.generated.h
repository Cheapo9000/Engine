// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MediaPlaylistFactoryNew.h"

#ifdef MEDIAPLAYEREDITOR_MediaPlaylistFactoryNew_generated_h
#error "MediaPlaylistFactoryNew.generated.h already included, missing '#pragma once' in MediaPlaylistFactoryNew.h"
#endif
#define MEDIAPLAYEREDITOR_MediaPlaylistFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaPlaylistFactoryNew *************************************************
struct Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics;
MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlaylistFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlaylistFactoryNew(); \
	friend struct ::Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLAYEREDITOR_API UClass* ::Z_Construct_UClass_UMediaPlaylistFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlaylistFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), Z_Construct_UClass_UMediaPlaylistFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlaylistFactoryNew)


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlaylistFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlaylistFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlaylistFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlaylistFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlaylistFactoryNew(UMediaPlaylistFactoryNew&&) = delete; \
	UMediaPlaylistFactoryNew(const UMediaPlaylistFactoryNew&) = delete; \
	NO_API virtual ~UMediaPlaylistFactoryNew();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_13_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_17_INCLASS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlaylistFactoryNew;

// ********** End Class UMediaPlaylistFactoryNew ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
