// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSynesthesiaSettingsFactory.h"

#ifdef AUDIOSYNESTHESIAEDITOR_AudioSynesthesiaSettingsFactory_generated_h
#error "AudioSynesthesiaSettingsFactory.generated.h already included, missing '#pragma once' in AudioSynesthesiaSettingsFactory.h"
#endif
#define AUDIOSYNESTHESIAEDITOR_AudioSynesthesiaSettingsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioSynesthesiaSettingsFactory *****************************************
struct Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics;
AUDIOSYNESTHESIAEDITOR_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSynesthesiaSettingsFactory(); \
	friend struct ::Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIAEDITOR_API UClass* ::Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioSynesthesiaSettingsFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesiaEditor"), Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_NoRegister) \
	DECLARE_SERIALIZER(UAudioSynesthesiaSettingsFactory)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOSYNESTHESIAEDITOR_API UAudioSynesthesiaSettingsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSynesthesiaSettingsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIAEDITOR_API, UAudioSynesthesiaSettingsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSynesthesiaSettingsFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioSynesthesiaSettingsFactory(UAudioSynesthesiaSettingsFactory&&) = delete; \
	UAudioSynesthesiaSettingsFactory(const UAudioSynesthesiaSettingsFactory&) = delete; \
	AUDIOSYNESTHESIAEDITOR_API virtual ~UAudioSynesthesiaSettingsFactory();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioSynesthesiaSettingsFactory;

// ********** End Class UAudioSynesthesiaSettingsFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
