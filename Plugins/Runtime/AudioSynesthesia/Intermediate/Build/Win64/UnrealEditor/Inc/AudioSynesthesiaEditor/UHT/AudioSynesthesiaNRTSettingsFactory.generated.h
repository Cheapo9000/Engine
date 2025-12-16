// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSynesthesiaNRTSettingsFactory.h"

#ifdef AUDIOSYNESTHESIAEDITOR_AudioSynesthesiaNRTSettingsFactory_generated_h
#error "AudioSynesthesiaNRTSettingsFactory.generated.h already included, missing '#pragma once' in AudioSynesthesiaNRTSettingsFactory.h"
#endif
#define AUDIOSYNESTHESIAEDITOR_AudioSynesthesiaNRTSettingsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioSynesthesiaNRTSettingsFactory **************************************
struct Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics;
AUDIOSYNESTHESIAEDITOR_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSynesthesiaNRTSettingsFactory(); \
	friend struct ::Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIAEDITOR_API UClass* ::Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioSynesthesiaNRTSettingsFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesiaEditor"), Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_NoRegister) \
	DECLARE_SERIALIZER(UAudioSynesthesiaNRTSettingsFactory)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOSYNESTHESIAEDITOR_API UAudioSynesthesiaNRTSettingsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSynesthesiaNRTSettingsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIAEDITOR_API, UAudioSynesthesiaNRTSettingsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSynesthesiaNRTSettingsFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioSynesthesiaNRTSettingsFactory(UAudioSynesthesiaNRTSettingsFactory&&) = delete; \
	UAudioSynesthesiaNRTSettingsFactory(const UAudioSynesthesiaNRTSettingsFactory&) = delete; \
	AUDIOSYNESTHESIAEDITOR_API virtual ~UAudioSynesthesiaNRTSettingsFactory();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioSynesthesiaNRTSettingsFactory;

// ********** End Class UAudioSynesthesiaNRTSettingsFactory ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
