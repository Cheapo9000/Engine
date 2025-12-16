// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstantQ.h"

#ifdef AUDIOSYNESTHESIA_ConstantQ_generated_h
#error "ConstantQ.generated.h already included, missing '#pragma once' in ConstantQ.h"
#endif
#define AUDIOSYNESTHESIA_ConstantQ_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConstantQResults;

// ********** Begin Class UConstantQSettings *******************************************************
struct Z_Construct_UClass_UConstantQSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstantQSettings(); \
	friend struct ::Z_Construct_UClass_UConstantQSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_UConstantQSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstantQSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_UConstantQSettings_NoRegister) \
	DECLARE_SERIALIZER(UConstantQSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstantQSettings(UConstantQSettings&&) = delete; \
	UConstantQSettings(const UConstantQSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UConstantQSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstantQSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstantQSettings) \
	AUDIOSYNESTHESIA_API virtual ~UConstantQSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstantQSettings;

// ********** End Class UConstantQSettings *********************************************************

// ********** Begin ScriptStruct FConstantQResults *************************************************
struct Z_Construct_UScriptStruct_FConstantQResults_Statics;
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstantQResults_Statics; \
	AUDIOSYNESTHESIA_API static class UScriptStruct* StaticStruct();


struct FConstantQResults;
// ********** End ScriptStruct FConstantQResults ***************************************************

// ********** Begin Delegate FOnConstantQResults ***************************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_94_DELEGATE \
AUDIOSYNESTHESIA_API void FOnConstantQResults_DelegateWrapper(const FMulticastScriptDelegate& OnConstantQResults, int32 ChannelIndex, TArray<FConstantQResults> const& ConstantQResults);


// ********** End Delegate FOnConstantQResults *****************************************************

// ********** Begin Delegate FOnLatestConstantQResults *********************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_100_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestConstantQResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestConstantQResults, int32 ChannelIndex, FConstantQResults const& LatestConstantQResults);


// ********** End Delegate FOnLatestConstantQResults ***********************************************

// ********** Begin Class UConstantQAnalyzer *******************************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumCenterFrequencies); \
	DECLARE_FUNCTION(execGetCenterFrequencies);


struct Z_Construct_UClass_UConstantQAnalyzer_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQAnalyzer_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstantQAnalyzer(); \
	friend struct ::Z_Construct_UClass_UConstantQAnalyzer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_UConstantQAnalyzer_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstantQAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_UConstantQAnalyzer_NoRegister) \
	DECLARE_SERIALIZER(UConstantQAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_113_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstantQAnalyzer(UConstantQAnalyzer&&) = delete; \
	UConstantQAnalyzer(const UConstantQAnalyzer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UConstantQAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstantQAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstantQAnalyzer) \
	AUDIOSYNESTHESIA_API virtual ~UConstantQAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_110_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstantQAnalyzer;

// ********** End Class UConstantQAnalyzer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
