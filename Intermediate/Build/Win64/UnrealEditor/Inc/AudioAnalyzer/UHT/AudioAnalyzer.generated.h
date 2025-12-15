// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioAnalyzer.h"

#ifdef AUDIOANALYZER_AudioAnalyzer_generated_h
#error "AudioAnalyzer.generated.h already included, missing '#pragma once' in AudioAnalyzer.h"
#endif
#define AUDIOANALYZER_AudioAnalyzer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class UObject;

// ********** Begin Class UAudioAnalyzerSettings ***************************************************
struct Z_Construct_UClass_UAudioAnalyzerSettings_Statics;
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSettings_NoRegister();

#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerSettings(); \
	friend struct ::Z_Construct_UClass_UAudioAnalyzerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOANALYZER_API UClass* ::Z_Construct_UClass_UAudioAnalyzerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioAnalyzerSettings, UAudioAnalyzerAssetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), Z_Construct_UClass_UAudioAnalyzerSettings_NoRegister) \
	DECLARE_SERIALIZER(UAudioAnalyzerSettings)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOANALYZER_API UAudioAnalyzerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioAnalyzerSettings(UAudioAnalyzerSettings&&) = delete; \
	UAudioAnalyzerSettings(const UAudioAnalyzerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOANALYZER_API, UAudioAnalyzerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerSettings) \
	AUDIOANALYZER_API virtual ~UAudioAnalyzerSettings();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_24_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioAnalyzerSettings;

// ********** End Class UAudioAnalyzerSettings *****************************************************

// ********** Begin Class UAudioAnalyzer ***********************************************************
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopAnalyzing); \
	DECLARE_FUNCTION(execStartAnalyzing);


struct Z_Construct_UClass_UAudioAnalyzer_Statics;
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer_NoRegister();

#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzer(); \
	friend struct ::Z_Construct_UClass_UAudioAnalyzer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOANALYZER_API UClass* ::Z_Construct_UClass_UAudioAnalyzer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioAnalyzer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), Z_Construct_UClass_UAudioAnalyzer_NoRegister) \
	DECLARE_SERIALIZER(UAudioAnalyzer)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOANALYZER_API UAudioAnalyzer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioAnalyzer(UAudioAnalyzer&&) = delete; \
	UAudioAnalyzer(const UAudioAnalyzer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOANALYZER_API, UAudioAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzer) \
	AUDIOANALYZER_API virtual ~UAudioAnalyzer();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_73_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioAnalyzer;

// ********** End Class UAudioAnalyzer *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
