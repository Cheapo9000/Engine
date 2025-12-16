// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundControlBusFactory.h"

#ifdef AUDIOMODULATIONEDITOR_SoundControlBusFactory_generated_h
#error "SoundControlBusFactory.generated.h already included, missing '#pragma once' in SoundControlBusFactory.h"
#endif
#define AUDIOMODULATIONEDITOR_SoundControlBusFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundControlBusFactory **************************************************
struct Z_Construct_UClass_USoundControlBusFactory_Statics;
AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundControlBusFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSoundControlBusFactory(); \
	friend struct ::Z_Construct_UClass_USoundControlBusFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATIONEDITOR_API UClass* ::Z_Construct_UClass_USoundControlBusFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundControlBusFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulationEditor"), Z_Construct_UClass_USoundControlBusFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundControlBusFactory)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATIONEDITOR_API USoundControlBusFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundControlBusFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATIONEDITOR_API, USoundControlBusFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundControlBusFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundControlBusFactory(USoundControlBusFactory&&) = delete; \
	USoundControlBusFactory(const USoundControlBusFactory&) = delete; \
	AUDIOMODULATIONEDITOR_API virtual ~USoundControlBusFactory();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundControlBusFactory;

// ********** End Class USoundControlBusFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
