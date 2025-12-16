// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FileMediaSourceFactoryNew.h"

#ifdef MEDIAPLAYEREDITOR_FileMediaSourceFactoryNew_generated_h
#error "FileMediaSourceFactoryNew.generated.h already included, missing '#pragma once' in FileMediaSourceFactoryNew.h"
#endif
#define MEDIAPLAYEREDITOR_FileMediaSourceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFileMediaSourceFactoryNew ***********************************************
struct Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics;
MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UFileMediaSourceFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFileMediaSourceFactoryNew(); \
	friend struct ::Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLAYEREDITOR_API UClass* ::Z_Construct_UClass_UFileMediaSourceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UFileMediaSourceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), Z_Construct_UClass_UFileMediaSourceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UFileMediaSourceFactoryNew)


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileMediaSourceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileMediaSourceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileMediaSourceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileMediaSourceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFileMediaSourceFactoryNew(UFileMediaSourceFactoryNew&&) = delete; \
	UFileMediaSourceFactoryNew(const UFileMediaSourceFactoryNew&) = delete; \
	NO_API virtual ~UFileMediaSourceFactoryNew();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_13_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_17_INCLASS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFileMediaSourceFactoryNew;

// ********** End Class UFileMediaSourceFactoryNew *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
