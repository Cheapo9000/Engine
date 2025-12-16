// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundScapePaletteFactory.h"

#ifdef SOUNDSCAPEEDITOR_SoundScapePaletteFactory_generated_h
#error "SoundScapePaletteFactory.generated.h already included, missing '#pragma once' in SoundScapePaletteFactory.h"
#endif
#define SOUNDSCAPEEDITOR_SoundScapePaletteFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundscapePaletteFactory ************************************************
struct Z_Construct_UClass_USoundscapePaletteFactory_Statics;
SOUNDSCAPEEDITOR_API UClass* Z_Construct_UClass_USoundscapePaletteFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSoundscapePaletteFactory(); \
	friend struct ::Z_Construct_UClass_USoundscapePaletteFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPEEDITOR_API UClass* ::Z_Construct_UClass_USoundscapePaletteFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapePaletteFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundscapeEditor"), Z_Construct_UClass_USoundscapePaletteFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundscapePaletteFactory)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDSCAPEEDITOR_API USoundscapePaletteFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapePaletteFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDSCAPEEDITOR_API, USoundscapePaletteFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapePaletteFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapePaletteFactory(USoundscapePaletteFactory&&) = delete; \
	USoundscapePaletteFactory(const USoundscapePaletteFactory&) = delete; \
	SOUNDSCAPEEDITOR_API virtual ~USoundscapePaletteFactory();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_8_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_11_INCLASS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapePaletteFactory;

// ********** End Class USoundscapePaletteFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
