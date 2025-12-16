// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/StreamMediaSourceFactoryNew.h"

#ifdef MEDIAPLAYEREDITOR_StreamMediaSourceFactoryNew_generated_h
#error "StreamMediaSourceFactoryNew.generated.h already included, missing '#pragma once' in StreamMediaSourceFactoryNew.h"
#endif
#define MEDIAPLAYEREDITOR_StreamMediaSourceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStreamMediaSourceFactoryNew *********************************************
struct Z_Construct_UClass_UStreamMediaSourceFactoryNew_Statics;
MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UStreamMediaSourceFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_StreamMediaSourceFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUStreamMediaSourceFactoryNew(); \
	friend struct ::Z_Construct_UClass_UStreamMediaSourceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLAYEREDITOR_API UClass* ::Z_Construct_UClass_UStreamMediaSourceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UStreamMediaSourceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), Z_Construct_UClass_UStreamMediaSourceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UStreamMediaSourceFactoryNew)


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_StreamMediaSourceFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamMediaSourceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamMediaSourceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamMediaSourceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamMediaSourceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStreamMediaSourceFactoryNew(UStreamMediaSourceFactoryNew&&) = delete; \
	UStreamMediaSourceFactoryNew(const UStreamMediaSourceFactoryNew&) = delete; \
	NO_API virtual ~UStreamMediaSourceFactoryNew();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_StreamMediaSourceFactoryNew_h_13_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_StreamMediaSourceFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_StreamMediaSourceFactoryNew_h_17_INCLASS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_StreamMediaSourceFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStreamMediaSourceFactoryNew;

// ********** End Class UStreamMediaSourceFactoryNew ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_StreamMediaSourceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
