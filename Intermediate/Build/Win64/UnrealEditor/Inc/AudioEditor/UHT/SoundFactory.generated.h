// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundFactory.h"

#ifdef AUDIOEDITOR_SoundFactory_generated_h
#error "SoundFactory.generated.h already included, missing '#pragma once' in SoundFactory.h"
#endif
#define AUDIOEDITOR_SoundFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundFactory ************************************************************
struct Z_Construct_UClass_USoundFactory_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundFactory_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSoundFactory(); \
	friend struct ::Z_Construct_UClass_USoundFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundFactory(USoundFactory&&) = delete; \
	USoundFactory(const USoundFactory&) = delete; \
	AUDIOEDITOR_API virtual ~USoundFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_25_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_28_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundFactory;

// ********** End Class USoundFactory **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
