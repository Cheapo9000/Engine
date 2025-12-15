// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioAnalyzerSubsystem.h"

#ifdef AUDIOANALYZER_AudioAnalyzerSubsystem_generated_h
#error "AudioAnalyzerSubsystem.generated.h already included, missing '#pragma once' in AudioAnalyzerSubsystem.h"
#endif
#define AUDIOANALYZER_AudioAnalyzerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioAnalyzerSubsystem **************************************************
struct Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics;
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerSubsystem(); \
	friend struct ::Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOANALYZER_API UClass* ::Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioAnalyzerSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAudioAnalyzerSubsystem)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioAnalyzerSubsystem(UAudioAnalyzerSubsystem&&) = delete; \
	UAudioAnalyzerSubsystem(const UAudioAnalyzerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOANALYZER_API, UAudioAnalyzerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioAnalyzerSubsystem)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_16_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioAnalyzerSubsystem;

// ********** End Class UAudioAnalyzerSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
