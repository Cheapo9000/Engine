// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundscapeColorFactory.h"

#ifdef SOUNDSCAPEEDITOR_SoundscapeColorFactory_generated_h
#error "SoundscapeColorFactory.generated.h already included, missing '#pragma once' in SoundscapeColorFactory.h"
#endif
#define SOUNDSCAPEEDITOR_SoundscapeColorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundscapeColorFactory **************************************************
struct Z_Construct_UClass_USoundscapeColorFactory_Statics;
SOUNDSCAPEEDITOR_API UClass* Z_Construct_UClass_USoundscapeColorFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSoundscapeColorFactory(); \
	friend struct ::Z_Construct_UClass_USoundscapeColorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPEEDITOR_API UClass* ::Z_Construct_UClass_USoundscapeColorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapeColorFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundscapeEditor"), Z_Construct_UClass_USoundscapeColorFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundscapeColorFactory)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDSCAPEEDITOR_API USoundscapeColorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapeColorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDSCAPEEDITOR_API, USoundscapeColorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeColorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapeColorFactory(USoundscapeColorFactory&&) = delete; \
	USoundscapeColorFactory(const USoundscapeColorFactory&) = delete; \
	SOUNDSCAPEEDITOR_API virtual ~USoundscapeColorFactory();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_8_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_11_INCLASS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapeColorFactory;

// ********** End Class USoundscapeColorFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
