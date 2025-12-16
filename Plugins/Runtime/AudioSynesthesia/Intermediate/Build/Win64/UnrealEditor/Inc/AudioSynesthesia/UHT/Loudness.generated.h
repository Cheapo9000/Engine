// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Loudness.h"

#ifdef AUDIOSYNESTHESIA_Loudness_generated_h
#error "Loudness.generated.h already included, missing '#pragma once' in Loudness.h"
#endif
#define AUDIOSYNESTHESIA_Loudness_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLoudnessResults;

// ********** Begin Class ULoudnessSettings ********************************************************
struct Z_Construct_UClass_ULoudnessSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoudnessSettings(); \
	friend struct ::Z_Construct_UClass_ULoudnessSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_ULoudnessSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULoudnessSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_ULoudnessSettings_NoRegister) \
	DECLARE_SERIALIZER(ULoudnessSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULoudnessSettings(ULoudnessSettings&&) = delete; \
	ULoudnessSettings(const ULoudnessSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, ULoudnessSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoudnessSettings) \
	AUDIOSYNESTHESIA_API virtual ~ULoudnessSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULoudnessSettings;

// ********** End Class ULoudnessSettings **********************************************************

// ********** Begin ScriptStruct FLoudnessResults **************************************************
struct Z_Construct_UScriptStruct_FLoudnessResults_Statics;
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLoudnessResults_Statics; \
	AUDIOSYNESTHESIA_API static class UScriptStruct* StaticStruct();


struct FLoudnessResults;
// ********** End ScriptStruct FLoudnessResults ****************************************************

// ********** Begin Delegate FOnOverallLoudnessResults *********************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_102_DELEGATE \
AUDIOSYNESTHESIA_API void FOnOverallLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnOverallLoudnessResults, TArray<FLoudnessResults> const& OverallLoudnessResults);


// ********** End Delegate FOnOverallLoudnessResults ***********************************************

// ********** Begin Delegate FOnLatestOverallLoudnessResults ***************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_105_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestOverallLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestOverallLoudnessResults, FLoudnessResults const& LatestOverallLoudnessResults);


// ********** End Delegate FOnLatestOverallLoudnessResults *****************************************

// ********** Begin Delegate FOnPerChannelLoudnessResults ******************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_108_DELEGATE \
AUDIOSYNESTHESIA_API void FOnPerChannelLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnPerChannelLoudnessResults, int32 ChannelIndex, TArray<FLoudnessResults> const& LoudnessResults);


// ********** End Delegate FOnPerChannelLoudnessResults ********************************************

// ********** Begin Delegate FOnLatestPerChannelLoudnessResults ************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_111_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestPerChannelLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestPerChannelLoudnessResults, int32 ChannelIndex, FLoudnessResults const& LatestLoudnessResults);


// ********** End Delegate FOnLatestPerChannelLoudnessResults **************************************

// ********** Begin Class ULoudnessAnalyzer ********************************************************
struct Z_Construct_UClass_ULoudnessAnalyzer_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessAnalyzer_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoudnessAnalyzer(); \
	friend struct ::Z_Construct_UClass_ULoudnessAnalyzer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_ULoudnessAnalyzer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULoudnessAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_ULoudnessAnalyzer_NoRegister) \
	DECLARE_SERIALIZER(ULoudnessAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_123_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULoudnessAnalyzer(ULoudnessAnalyzer&&) = delete; \
	ULoudnessAnalyzer(const ULoudnessAnalyzer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, ULoudnessAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoudnessAnalyzer) \
	AUDIOSYNESTHESIA_API virtual ~ULoudnessAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_120_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULoudnessAnalyzer;

// ********** End Class ULoudnessAnalyzer **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h

// ********** Begin Enum ELoudnessCurveTypeEnum ****************************************************
#define FOREACH_ENUM_ELOUDNESSCURVETYPEENUM(op) \
	op(ELoudnessCurveTypeEnum::A) \
	op(ELoudnessCurveTypeEnum::B) \
	op(ELoudnessCurveTypeEnum::C) \
	op(ELoudnessCurveTypeEnum::D) \
	op(ELoudnessCurveTypeEnum::K) \
	op(ELoudnessCurveTypeEnum::None) 

enum class ELoudnessCurveTypeEnum : uint8;
template<> struct TIsUEnumClass<ELoudnessCurveTypeEnum> { enum { Value = true }; };
template<> AUDIOSYNESTHESIA_NON_ATTRIBUTED_API UEnum* StaticEnum<ELoudnessCurveTypeEnum>();
// ********** End Enum ELoudnessCurveTypeEnum ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
