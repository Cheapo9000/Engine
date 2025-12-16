// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Meter.h"

#ifdef AUDIOSYNESTHESIA_Meter_generated_h
#error "Meter.generated.h already included, missing '#pragma once' in Meter.h"
#endif
#define AUDIOSYNESTHESIA_Meter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMeterResults;

// ********** Begin Class UMeterSettings ***********************************************************
struct Z_Construct_UClass_UMeterSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeterSettings(); \
	friend struct ::Z_Construct_UClass_UMeterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_UMeterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeterSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_UMeterSettings_NoRegister) \
	DECLARE_SERIALIZER(UMeterSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeterSettings(UMeterSettings&&) = delete; \
	UMeterSettings(const UMeterSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UMeterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeterSettings) \
	AUDIOSYNESTHESIA_API virtual ~UMeterSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeterSettings;

// ********** End Class UMeterSettings *************************************************************

// ********** Begin ScriptStruct FMeterResults *****************************************************
struct Z_Construct_UScriptStruct_FMeterResults_Statics;
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeterResults_Statics; \
	AUDIOSYNESTHESIA_API static class UScriptStruct* StaticStruct();


struct FMeterResults;
// ********** End ScriptStruct FMeterResults *******************************************************

// ********** Begin Delegate FOnOverallMeterResults ************************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_95_DELEGATE \
AUDIOSYNESTHESIA_API void FOnOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnOverallMeterResults, TArray<FMeterResults> const& MeterResults);


// ********** End Delegate FOnOverallMeterResults **************************************************

// ********** Begin Delegate FOnLatestOverallMeterResults ******************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_101_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestOverallMeterResults, FMeterResults const& LatestOverallMeterResults);


// ********** End Delegate FOnLatestOverallMeterResults ********************************************

// ********** Begin Delegate FOnPerChannelMeterResults *********************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_107_DELEGATE \
AUDIOSYNESTHESIA_API void FOnPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnPerChannelMeterResults, int32 ChannelIndex, TArray<FMeterResults> const& MeterResults);


// ********** End Delegate FOnPerChannelMeterResults ***********************************************

// ********** Begin Delegate FOnLatestPerChannelMeterResults ***************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_113_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestPerChannelMeterResults, int32 ChannelIndex, FMeterResults const& LatestMeterResults);


// ********** End Delegate FOnLatestPerChannelMeterResults *****************************************

// ********** Begin Class UMeterAnalyzer ***********************************************************
struct Z_Construct_UClass_UMeterAnalyzer_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterAnalyzer_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeterAnalyzer(); \
	friend struct ::Z_Construct_UClass_UMeterAnalyzer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_UMeterAnalyzer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeterAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_UMeterAnalyzer_NoRegister) \
	DECLARE_SERIALIZER(UMeterAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_126_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeterAnalyzer(UMeterAnalyzer&&) = delete; \
	UMeterAnalyzer(const UMeterAnalyzer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UMeterAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeterAnalyzer) \
	AUDIOSYNESTHESIA_API virtual ~UMeterAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_123_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_126_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeterAnalyzer;

// ********** End Class UMeterAnalyzer *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h

// ********** Begin Enum EMeterPeakType ************************************************************
#define FOREACH_ENUM_EMETERPEAKTYPE(op) \
	op(EMeterPeakType::MeanSquared) \
	op(EMeterPeakType::RootMeanSquared) \
	op(EMeterPeakType::Peak) \
	op(EMeterPeakType::Count) 

enum class EMeterPeakType : uint8;
template<> struct TIsUEnumClass<EMeterPeakType> { enum { Value = true }; };
template<> AUDIOSYNESTHESIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeterPeakType>();
// ********** End Enum EMeterPeakType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
