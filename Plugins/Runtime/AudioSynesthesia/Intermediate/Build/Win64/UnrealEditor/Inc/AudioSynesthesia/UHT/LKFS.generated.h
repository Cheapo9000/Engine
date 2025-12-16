// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LKFS.h"

#ifdef AUDIOSYNESTHESIA_LKFS_generated_h
#error "LKFS.generated.h already included, missing '#pragma once' in LKFS.h"
#endif
#define AUDIOSYNESTHESIA_LKFS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLKFSResults;

// ********** Begin Class ULKFSSettings ************************************************************
struct Z_Construct_UClass_ULKFSSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULKFSSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULKFSSettings(); \
	friend struct ::Z_Construct_UClass_ULKFSSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_ULKFSSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULKFSSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_ULKFSSettings_NoRegister) \
	DECLARE_SERIALIZER(ULKFSSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULKFSSettings(ULKFSSettings&&) = delete; \
	ULKFSSettings(const ULKFSSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, ULKFSSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULKFSSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULKFSSettings) \
	AUDIOSYNESTHESIA_API virtual ~ULKFSSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULKFSSettings;

// ********** End Class ULKFSSettings **************************************************************

// ********** Begin Delegate FOnOverallLKFSResults *************************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_57_DELEGATE \
AUDIOSYNESTHESIA_API void FOnOverallLKFSResults_DelegateWrapper(const FMulticastScriptDelegate& OnOverallLKFSResults, TArray<FLKFSResults> const& LKFSResults);


// ********** End Delegate FOnOverallLKFSResults ***************************************************

// ********** Begin Delegate FOnLatestOverallLKFSResults *******************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_63_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestOverallLKFSResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestOverallLKFSResults, FLKFSResults const& LatestOverallLKFSResults);


// ********** End Delegate FOnLatestOverallLKFSResults *********************************************

// ********** Begin Delegate FOnPerChannelLKFSResults **********************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_69_DELEGATE \
AUDIOSYNESTHESIA_API void FOnPerChannelLKFSResults_DelegateWrapper(const FMulticastScriptDelegate& OnPerChannelLKFSResults, int32 ChannelIndex, TArray<FLKFSResults> const& LKFSResults);


// ********** End Delegate FOnPerChannelLKFSResults ************************************************

// ********** Begin Delegate FOnLatestPerChannelLKFSResults ****************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_75_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestPerChannelLKFSResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestPerChannelLKFSResults, int32 ChannelIndex, FLKFSResults const& LatestLKFSResults);


// ********** End Delegate FOnLatestPerChannelLKFSResults ******************************************

// ********** Begin Class ULKFSAnalyzer ************************************************************
struct Z_Construct_UClass_ULKFSAnalyzer_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULKFSAnalyzer_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULKFSAnalyzer(); \
	friend struct ::Z_Construct_UClass_ULKFSAnalyzer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_ULKFSAnalyzer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULKFSAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_ULKFSAnalyzer_NoRegister) \
	DECLARE_SERIALIZER(ULKFSAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_88_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULKFSAnalyzer(ULKFSAnalyzer&&) = delete; \
	ULKFSAnalyzer(const ULKFSAnalyzer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, ULKFSAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULKFSAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULKFSAnalyzer) \
	AUDIOSYNESTHESIA_API virtual ~ULKFSAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_85_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULKFSAnalyzer;

// ********** End Class ULKFSAnalyzer **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
