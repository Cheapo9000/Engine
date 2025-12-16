// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundModImporterFactory.h"

#ifdef SOUNDMODIMPORTER_SoundModImporterFactory_generated_h
#error "SoundModImporterFactory.generated.h already included, missing '#pragma once' in SoundModImporterFactory.h"
#endif
#define SOUNDMODIMPORTER_SoundModImporterFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundModImporterFactory *************************************************
struct Z_Construct_UClass_USoundModImporterFactory_Statics;
SOUNDMODIMPORTER_API UClass* Z_Construct_UClass_USoundModImporterFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModImporterFactory(); \
	friend struct ::Z_Construct_UClass_USoundModImporterFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDMODIMPORTER_API UClass* ::Z_Construct_UClass_USoundModImporterFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModImporterFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundModImporter"), Z_Construct_UClass_USoundModImporterFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundModImporterFactory)


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundModImporterFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModImporterFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundModImporterFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModImporterFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModImporterFactory(USoundModImporterFactory&&) = delete; \
	USoundModImporterFactory(const USoundModImporterFactory&) = delete; \
	NO_API virtual ~USoundModImporterFactory();


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModImporterFactory;

// ********** End Class USoundModImporterFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
