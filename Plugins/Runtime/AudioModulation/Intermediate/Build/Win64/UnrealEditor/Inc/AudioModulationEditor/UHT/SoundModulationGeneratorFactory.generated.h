// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundModulationGeneratorFactory.h"

#ifdef AUDIOMODULATIONEDITOR_SoundModulationGeneratorFactory_generated_h
#error "SoundModulationGeneratorFactory.generated.h already included, missing '#pragma once' in SoundModulationGeneratorFactory.h"
#endif
#define AUDIOMODULATIONEDITOR_SoundModulationGeneratorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundModulationGeneratorFactory *****************************************
struct Z_Construct_UClass_USoundModulationGeneratorFactory_Statics;
AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundModulationGeneratorFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModulationGeneratorFactory(); \
	friend struct ::Z_Construct_UClass_USoundModulationGeneratorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATIONEDITOR_API UClass* ::Z_Construct_UClass_USoundModulationGeneratorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationGeneratorFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulationEditor"), Z_Construct_UClass_USoundModulationGeneratorFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationGeneratorFactory)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATIONEDITOR_API USoundModulationGeneratorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationGeneratorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATIONEDITOR_API, USoundModulationGeneratorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationGeneratorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationGeneratorFactory(USoundModulationGeneratorFactory&&) = delete; \
	USoundModulationGeneratorFactory(const USoundModulationGeneratorFactory&) = delete; \
	AUDIOMODULATIONEDITOR_API virtual ~USoundModulationGeneratorFactory();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationGeneratorFactory;

// ********** End Class USoundModulationGeneratorFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
