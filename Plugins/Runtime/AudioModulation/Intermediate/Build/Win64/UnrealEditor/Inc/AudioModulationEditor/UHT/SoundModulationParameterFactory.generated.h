// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundModulationParameterFactory.h"

#ifdef AUDIOMODULATIONEDITOR_SoundModulationParameterFactory_generated_h
#error "SoundModulationParameterFactory.generated.h already included, missing '#pragma once' in SoundModulationParameterFactory.h"
#endif
#define AUDIOMODULATIONEDITOR_SoundModulationParameterFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundModulationParameterFactory *****************************************
struct Z_Construct_UClass_USoundModulationParameterFactory_Statics;
AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundModulationParameterFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterFactory(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATIONEDITOR_API UClass* ::Z_Construct_UClass_USoundModulationParameterFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulationEditor"), Z_Construct_UClass_USoundModulationParameterFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterFactory)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATIONEDITOR_API USoundModulationParameterFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATIONEDITOR_API, USoundModulationParameterFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterFactory(USoundModulationParameterFactory&&) = delete; \
	USoundModulationParameterFactory(const USoundModulationParameterFactory&) = delete; \
	AUDIOMODULATIONEDITOR_API virtual ~USoundModulationParameterFactory();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterFactory;

// ********** End Class USoundModulationParameterFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
