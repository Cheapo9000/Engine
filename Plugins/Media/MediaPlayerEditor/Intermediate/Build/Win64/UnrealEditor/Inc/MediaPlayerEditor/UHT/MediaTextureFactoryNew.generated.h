// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MediaTextureFactoryNew.h"

#ifdef MEDIAPLAYEREDITOR_MediaTextureFactoryNew_generated_h
#error "MediaTextureFactoryNew.generated.h already included, missing '#pragma once' in MediaTextureFactoryNew.h"
#endif
#define MEDIAPLAYEREDITOR_MediaTextureFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaTextureFactoryNew **************************************************
struct Z_Construct_UClass_UMediaTextureFactoryNew_Statics;
MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaTextureFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMediaTextureFactoryNew(); \
	friend struct ::Z_Construct_UClass_UMediaTextureFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLAYEREDITOR_API UClass* ::Z_Construct_UClass_UMediaTextureFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaTextureFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), Z_Construct_UClass_UMediaTextureFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UMediaTextureFactoryNew)


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAPLAYEREDITOR_API UMediaTextureFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaTextureFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAPLAYEREDITOR_API, UMediaTextureFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaTextureFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaTextureFactoryNew(UMediaTextureFactoryNew&&) = delete; \
	UMediaTextureFactoryNew(const UMediaTextureFactoryNew&) = delete; \
	MEDIAPLAYEREDITOR_API virtual ~UMediaTextureFactoryNew();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_13_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_17_INCLASS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaTextureFactoryNew;

// ********** End Class UMediaTextureFactoryNew ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
