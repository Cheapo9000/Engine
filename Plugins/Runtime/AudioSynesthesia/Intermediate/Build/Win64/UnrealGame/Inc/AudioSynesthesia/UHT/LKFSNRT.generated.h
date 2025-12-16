// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LKFSNRT.h"

#ifdef AUDIOSYNESTHESIA_LKFSNRT_generated_h
#error "LKFSNRT.generated.h already included, missing '#pragma once' in LKFSNRT.h"
#endif
#define AUDIOSYNESTHESIA_LKFSNRT_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLKFSNRTResults;

// ********** Begin Class ULKFSNRTSettings *********************************************************
struct Z_Construct_UClass_ULKFSNRTSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULKFSNRTSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULKFSNRTSettings(); \
	friend struct ::Z_Construct_UClass_ULKFSNRTSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_ULKFSNRTSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULKFSNRTSettings, UAudioSynesthesiaNRTSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_ULKFSNRTSettings_NoRegister) \
	DECLARE_SERIALIZER(ULKFSNRTSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULKFSNRTSettings(ULKFSNRTSettings&&) = delete; \
	ULKFSNRTSettings(const ULKFSNRTSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, ULKFSNRTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULKFSNRTSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULKFSNRTSettings) \
	AUDIOSYNESTHESIA_API virtual ~ULKFSNRTSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULKFSNRTSettings;

// ********** End Class ULKFSNRTSettings ***********************************************************

// ********** Begin Class ULKFSNRT *****************************************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGatedLoudness); \
	DECLARE_FUNCTION(execGetGatedLoudnessForChannel); \
	DECLARE_FUNCTION(execGetIntegratedLoudness); \
	DECLARE_FUNCTION(execGetIntegratedLoudnessForChannel); \
	DECLARE_FUNCTION(execGetLoudnessDataAtTime); \
	DECLARE_FUNCTION(execGetLoudnessDataForChannelAtTime); \
	DECLARE_FUNCTION(execGetLoudnessData); \
	DECLARE_FUNCTION(execGetLoudnessDataForChannel); \
	DECLARE_FUNCTION(execGetChannelLoudnessAtTime); \
	DECLARE_FUNCTION(execGetLoudnessAtTime);


struct Z_Construct_UClass_ULKFSNRT_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULKFSNRT_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULKFSNRT(); \
	friend struct ::Z_Construct_UClass_ULKFSNRT_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_ULKFSNRT_NoRegister(); \
public: \
	DECLARE_CLASS2(ULKFSNRT, UAudioSynesthesiaNRT, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_ULKFSNRT_NoRegister) \
	DECLARE_SERIALIZER(ULKFSNRT)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULKFSNRT(ULKFSNRT&&) = delete; \
	ULKFSNRT(const ULKFSNRT&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, ULKFSNRT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULKFSNRT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULKFSNRT) \
	AUDIOSYNESTHESIA_API virtual ~ULKFSNRT();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_53_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULKFSNRT;

// ********** End Class ULKFSNRT *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
