// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSynesthesia.h"

#ifdef AUDIOSYNESTHESIA_AudioSynesthesia_generated_h
#error "AudioSynesthesia.generated.h already included, missing '#pragma once' in AudioSynesthesia.h"
#endif
#define AUDIOSYNESTHESIA_AudioSynesthesia_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioSynesthesiaSettings ************************************************
struct Z_Construct_UClass_UAudioSynesthesiaSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioSynesthesiaSettings(); \
	friend struct ::Z_Construct_UClass_UAudioSynesthesiaSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_UAudioSynesthesiaSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioSynesthesiaSettings, UAudioAnalyzerSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_UAudioSynesthesiaSettings_NoRegister) \
	DECLARE_SERIALIZER(UAudioSynesthesiaSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOSYNESTHESIA_API UAudioSynesthesiaSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioSynesthesiaSettings(UAudioSynesthesiaSettings&&) = delete; \
	UAudioSynesthesiaSettings(const UAudioSynesthesiaSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UAudioSynesthesiaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSynesthesiaSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSynesthesiaSettings) \
	AUDIOSYNESTHESIA_API virtual ~UAudioSynesthesiaSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioSynesthesiaSettings;

// ********** End Class UAudioSynesthesiaSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
