// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PlatformMediaSourceFactoryNew.h"

#ifdef MEDIAPLAYEREDITOR_PlatformMediaSourceFactoryNew_generated_h
#error "PlatformMediaSourceFactoryNew.generated.h already included, missing '#pragma once' in PlatformMediaSourceFactoryNew.h"
#endif
#define MEDIAPLAYEREDITOR_PlatformMediaSourceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlatformMediaSourceFactoryNew *******************************************
struct Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics;
MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UPlatformMediaSourceFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformMediaSourceFactoryNew(); \
	friend struct ::Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLAYEREDITOR_API UClass* ::Z_Construct_UClass_UPlatformMediaSourceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlatformMediaSourceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), Z_Construct_UClass_UPlatformMediaSourceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UPlatformMediaSourceFactoryNew)


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformMediaSourceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformMediaSourceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformMediaSourceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformMediaSourceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlatformMediaSourceFactoryNew(UPlatformMediaSourceFactoryNew&&) = delete; \
	UPlatformMediaSourceFactoryNew(const UPlatformMediaSourceFactoryNew&) = delete; \
	NO_API virtual ~UPlatformMediaSourceFactoryNew();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_13_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_17_INCLASS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlatformMediaSourceFactoryNew;

// ********** End Class UPlatformMediaSourceFactoryNew *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
