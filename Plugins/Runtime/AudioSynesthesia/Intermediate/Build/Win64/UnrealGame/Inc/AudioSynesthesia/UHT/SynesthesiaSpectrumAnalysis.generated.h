// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynesthesiaSpectrumAnalysis.h"

#ifdef AUDIOSYNESTHESIA_SynesthesiaSpectrumAnalysis_generated_h
#error "SynesthesiaSpectrumAnalysis.generated.h already included, missing '#pragma once' in SynesthesiaSpectrumAnalysis.h"
#endif
#define AUDIOSYNESTHESIA_SynesthesiaSpectrumAnalysis_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSynesthesiaSpectrumResults;

// ********** Begin Class USynesthesiaSpectrumAnalysisSettings *************************************
struct Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynesthesiaSpectrumAnalysisSettings(); \
	friend struct ::Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USynesthesiaSpectrumAnalysisSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_NoRegister) \
	DECLARE_SERIALIZER(USynesthesiaSpectrumAnalysisSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynesthesiaSpectrumAnalysisSettings(USynesthesiaSpectrumAnalysisSettings&&) = delete; \
	USynesthesiaSpectrumAnalysisSettings(const USynesthesiaSpectrumAnalysisSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, USynesthesiaSpectrumAnalysisSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynesthesiaSpectrumAnalysisSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USynesthesiaSpectrumAnalysisSettings) \
	AUDIOSYNESTHESIA_API virtual ~USynesthesiaSpectrumAnalysisSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynesthesiaSpectrumAnalysisSettings;

// ********** End Class USynesthesiaSpectrumAnalysisSettings ***************************************

// ********** Begin ScriptStruct FSynesthesiaSpectrumResults ***************************************
struct Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics;
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics; \
	AUDIOSYNESTHESIA_API static class UScriptStruct* StaticStruct();


struct FSynesthesiaSpectrumResults;
// ********** End ScriptStruct FSynesthesiaSpectrumResults *****************************************

// ********** Begin Delegate FOnSpectrumResults ****************************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_71_DELEGATE \
AUDIOSYNESTHESIA_API void FOnSpectrumResults_DelegateWrapper(const FMulticastScriptDelegate& OnSpectrumResults, int32 ChannelIndex, TArray<FSynesthesiaSpectrumResults> const& SpectrumResults);


// ********** End Delegate FOnSpectrumResults ******************************************************

// ********** Begin Delegate FOnLatestSpectrumResults **********************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_77_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestSpectrumResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestSpectrumResults, int32 ChannelIndex, FSynesthesiaSpectrumResults const& LatestSpectrumResults);


// ********** End Delegate FOnLatestSpectrumResults ************************************************

// ********** Begin Class USynesthesiaSpectrumAnalyzer *********************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumCenterFrequencies); \
	DECLARE_FUNCTION(execGetCenterFrequencies);


struct Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynesthesiaSpectrumAnalyzer(); \
	friend struct ::Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_NoRegister(); \
public: \
	DECLARE_CLASS2(USynesthesiaSpectrumAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_NoRegister) \
	DECLARE_SERIALIZER(USynesthesiaSpectrumAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_90_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynesthesiaSpectrumAnalyzer(USynesthesiaSpectrumAnalyzer&&) = delete; \
	USynesthesiaSpectrumAnalyzer(const USynesthesiaSpectrumAnalyzer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, USynesthesiaSpectrumAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynesthesiaSpectrumAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USynesthesiaSpectrumAnalyzer) \
	AUDIOSYNESTHESIA_API virtual ~USynesthesiaSpectrumAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_87_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynesthesiaSpectrumAnalyzer;

// ********** End Class USynesthesiaSpectrumAnalyzer ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
