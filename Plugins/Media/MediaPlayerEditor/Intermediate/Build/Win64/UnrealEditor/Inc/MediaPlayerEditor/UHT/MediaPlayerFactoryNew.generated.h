// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MediaPlayerFactoryNew.h"

#ifdef MEDIAPLAYEREDITOR_MediaPlayerFactoryNew_generated_h
#error "MediaPlayerFactoryNew.generated.h already included, missing '#pragma once' in MediaPlayerFactoryNew.h"
#endif
#define MEDIAPLAYEREDITOR_MediaPlayerFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaPlayerFactoryNew ***************************************************
struct Z_Construct_UClass_UMediaPlayerFactoryNew_Statics;
MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlayerFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlayerFactoryNew(); \
	friend struct ::Z_Construct_UClass_UMediaPlayerFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLAYEREDITOR_API UClass* ::Z_Construct_UClass_UMediaPlayerFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlayerFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), Z_Construct_UClass_UMediaPlayerFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlayerFactoryNew)


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayerFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayerFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlayerFactoryNew(UMediaPlayerFactoryNew&&) = delete; \
	UMediaPlayerFactoryNew(const UMediaPlayerFactoryNew&) = delete; \
	NO_API virtual ~UMediaPlayerFactoryNew();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_23_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_27_INCLASS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlayerFactoryNew;

// ********** End Class UMediaPlayerFactoryNew *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
