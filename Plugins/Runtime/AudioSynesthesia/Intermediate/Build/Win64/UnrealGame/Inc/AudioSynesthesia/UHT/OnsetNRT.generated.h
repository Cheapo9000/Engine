// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnsetNRT.h"

#ifdef AUDIOSYNESTHESIA_OnsetNRT_generated_h
#error "OnsetNRT.generated.h already included, missing '#pragma once' in OnsetNRT.h"
#endif
#define AUDIOSYNESTHESIA_OnsetNRT_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnsetNRTSettings ********************************************************
struct Z_Construct_UClass_UOnsetNRTSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRTSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnsetNRTSettings(); \
	friend struct ::Z_Construct_UClass_UOnsetNRTSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_UOnsetNRTSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnsetNRTSettings, UAudioSynesthesiaNRTSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_UOnsetNRTSettings_NoRegister) \
	DECLARE_SERIALIZER(UOnsetNRTSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnsetNRTSettings(UOnsetNRTSettings&&) = delete; \
	UOnsetNRTSettings(const UOnsetNRTSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UOnsetNRTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetNRTSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnsetNRTSettings) \
	AUDIOSYNESTHESIA_API virtual ~UOnsetNRTSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnsetNRTSettings;

// ********** End Class UOnsetNRTSettings **********************************************************

// ********** Begin Class UOnsetNRT ****************************************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNormalizedChannelOnsetsBetweenTimes); \
	DECLARE_FUNCTION(execGetChannelOnsetsBetweenTimes);


struct Z_Construct_UClass_UOnsetNRT_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRT_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnsetNRT(); \
	friend struct ::Z_Construct_UClass_UOnsetNRT_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_UOnsetNRT_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnsetNRT, UAudioSynesthesiaNRT, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_UOnsetNRT_NoRegister) \
	DECLARE_SERIALIZER(UOnsetNRT)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnsetNRT(UOnsetNRT&&) = delete; \
	UOnsetNRT(const UOnsetNRT&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UOnsetNRT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetNRT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnsetNRT) \
	AUDIOSYNESTHESIA_API virtual ~UOnsetNRT();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_58_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnsetNRT;

// ********** End Class UOnsetNRT ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
