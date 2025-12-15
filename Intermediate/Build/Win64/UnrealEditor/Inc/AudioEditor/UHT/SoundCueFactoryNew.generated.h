// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundCueFactoryNew.h"

#ifdef AUDIOEDITOR_SoundCueFactoryNew_generated_h
#error "SoundCueFactoryNew.generated.h already included, missing '#pragma once' in SoundCueFactoryNew.h"
#endif
#define AUDIOEDITOR_SoundCueFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundCueFactoryNew ******************************************************
struct Z_Construct_UClass_USoundCueFactoryNew_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueFactoryNew(); \
	friend struct ::Z_Construct_UClass_USoundCueFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundCueFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundCueFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(USoundCueFactoryNew)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueFactoryNew(USoundCueFactoryNew&&) = delete; \
	USoundCueFactoryNew(const USoundCueFactoryNew&) = delete; \
	AUDIOEDITOR_API virtual ~USoundCueFactoryNew();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_30_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_33_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueFactoryNew;

// ********** End Class USoundCueFactoryNew ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
