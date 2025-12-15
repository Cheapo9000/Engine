// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioAnalyzerNRT.h"

#ifdef AUDIOANALYZER_AudioAnalyzerNRT_generated_h
#error "AudioAnalyzerNRT.generated.h already included, missing '#pragma once' in AudioAnalyzerNRT.h"
#endif
#define AUDIOANALYZER_AudioAnalyzerNRT_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;

// ********** Begin Class UAudioAnalyzerNRTSettings ************************************************
struct Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics;
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings_NoRegister();

#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerNRTSettings(); \
	friend struct ::Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOANALYZER_API UClass* ::Z_Construct_UClass_UAudioAnalyzerNRTSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioAnalyzerNRTSettings, UAudioAnalyzerAssetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), Z_Construct_UClass_UAudioAnalyzerNRTSettings_NoRegister) \
	DECLARE_SERIALIZER(UAudioAnalyzerNRTSettings)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOANALYZER_API UAudioAnalyzerNRTSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioAnalyzerNRTSettings(UAudioAnalyzerNRTSettings&&) = delete; \
	UAudioAnalyzerNRTSettings(const UAudioAnalyzerNRTSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOANALYZER_API, UAudioAnalyzerNRTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerNRTSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerNRTSettings) \
	AUDIOANALYZER_API virtual ~UAudioAnalyzerNRTSettings();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_23_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioAnalyzerNRTSettings;

// ********** End Class UAudioAnalyzerNRTSettings **************************************************

// ********** Begin Delegate FOnAudioAnalyzerNRTAnalysisComplete ***********************************
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_52_DELEGATE \
AUDIOANALYZER_API void FOnAudioAnalyzerNRTAnalysisComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAudioAnalyzerNRTAnalysisComplete);


// ********** End Delegate FOnAudioAnalyzerNRTAnalysisComplete *************************************

// ********** Begin Class UAudioAnalyzerNRT ********************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execAnalyzeAudio); \
	DECLARE_FUNCTION(execSetSound);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioAnalyzerNRT, AUDIOANALYZER_API)


struct Z_Construct_UClass_UAudioAnalyzerNRT_Statics;
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRT_NoRegister();

#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerNRT(); \
	friend struct ::Z_Construct_UClass_UAudioAnalyzerNRT_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOANALYZER_API UClass* ::Z_Construct_UClass_UAudioAnalyzerNRT_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioAnalyzerNRT, UAudioAnalyzerAssetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), Z_Construct_UClass_UAudioAnalyzerNRT_NoRegister) \
	DECLARE_SERIALIZER(UAudioAnalyzerNRT) \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOANALYZER_API UAudioAnalyzerNRT(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioAnalyzerNRT(UAudioAnalyzerNRT&&) = delete; \
	UAudioAnalyzerNRT(const UAudioAnalyzerNRT&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOANALYZER_API, UAudioAnalyzerNRT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerNRT); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerNRT) \
	AUDIOANALYZER_API virtual ~UAudioAnalyzerNRT();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioAnalyzerNRT;

// ********** End Class UAudioAnalyzerNRT **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
