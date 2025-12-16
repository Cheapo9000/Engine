// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundControlBusMixFactory.h"

#ifdef AUDIOMODULATIONEDITOR_SoundControlBusMixFactory_generated_h
#error "SoundControlBusMixFactory.generated.h already included, missing '#pragma once' in SoundControlBusMixFactory.h"
#endif
#define AUDIOMODULATIONEDITOR_SoundControlBusMixFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundControlBusMixFactory ***********************************************
struct Z_Construct_UClass_USoundControlBusMixFactory_Statics;
AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundControlBusMixFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSoundControlBusMixFactory(); \
	friend struct ::Z_Construct_UClass_USoundControlBusMixFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATIONEDITOR_API UClass* ::Z_Construct_UClass_USoundControlBusMixFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundControlBusMixFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulationEditor"), Z_Construct_UClass_USoundControlBusMixFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundControlBusMixFactory)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATIONEDITOR_API USoundControlBusMixFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundControlBusMixFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATIONEDITOR_API, USoundControlBusMixFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundControlBusMixFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundControlBusMixFactory(USoundControlBusMixFactory&&) = delete; \
	USoundControlBusMixFactory(const USoundControlBusMixFactory&) = delete; \
	AUDIOMODULATIONEDITOR_API virtual ~USoundControlBusMixFactory();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundControlBusMixFactory;

// ********** End Class USoundControlBusMixFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
