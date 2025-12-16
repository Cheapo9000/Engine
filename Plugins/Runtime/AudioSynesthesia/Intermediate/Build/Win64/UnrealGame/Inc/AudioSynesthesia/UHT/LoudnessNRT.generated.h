// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LoudnessNRT.h"

#ifdef AUDIOSYNESTHESIA_LoudnessNRT_generated_h
#error "LoudnessNRT.generated.h already included, missing '#pragma once' in LoudnessNRT.h"
#endif
#define AUDIOSYNESTHESIA_LoudnessNRT_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULoudnessNRTSettings *****************************************************
struct Z_Construct_UClass_ULoudnessNRTSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRTSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoudnessNRTSettings(); \
	friend struct ::Z_Construct_UClass_ULoudnessNRTSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_ULoudnessNRTSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULoudnessNRTSettings, UAudioSynesthesiaNRTSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_ULoudnessNRTSettings_NoRegister) \
	DECLARE_SERIALIZER(ULoudnessNRTSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULoudnessNRTSettings(ULoudnessNRTSettings&&) = delete; \
	ULoudnessNRTSettings(const ULoudnessNRTSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, ULoudnessNRTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessNRTSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoudnessNRTSettings) \
	AUDIOSYNESTHESIA_API virtual ~ULoudnessNRTSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_35_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULoudnessNRTSettings;

// ********** End Class ULoudnessNRTSettings *******************************************************

// ********** Begin Class ULoudnessNRT *************************************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNormalizedChannelLoudnessAtTime); \
	DECLARE_FUNCTION(execGetNormalizedLoudnessAtTime); \
	DECLARE_FUNCTION(execGetChannelLoudnessAtTime); \
	DECLARE_FUNCTION(execGetLoudnessAtTime);


struct Z_Construct_UClass_ULoudnessNRT_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRT_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoudnessNRT(); \
	friend struct ::Z_Construct_UClass_ULoudnessNRT_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_ULoudnessNRT_NoRegister(); \
public: \
	DECLARE_CLASS2(ULoudnessNRT, UAudioSynesthesiaNRT, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_ULoudnessNRT_NoRegister) \
	DECLARE_SERIALIZER(ULoudnessNRT)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_84_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULoudnessNRT(ULoudnessNRT&&) = delete; \
	ULoudnessNRT(const ULoudnessNRT&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, ULoudnessNRT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessNRT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoudnessNRT) \
	AUDIOSYNESTHESIA_API virtual ~ULoudnessNRT();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_81_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULoudnessNRT;

// ********** End Class ULoudnessNRT ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h

// ********** Begin Enum ELoudnessNRTCurveTypeEnum *************************************************
#define FOREACH_ENUM_ELOUDNESSNRTCURVETYPEENUM(op) \
	op(ELoudnessNRTCurveTypeEnum::A) \
	op(ELoudnessNRTCurveTypeEnum::B) \
	op(ELoudnessNRTCurveTypeEnum::C) \
	op(ELoudnessNRTCurveTypeEnum::D) \
	op(ELoudnessNRTCurveTypeEnum::K) \
	op(ELoudnessNRTCurveTypeEnum::None) 

enum class ELoudnessNRTCurveTypeEnum : uint8;
template<> struct TIsUEnumClass<ELoudnessNRTCurveTypeEnum> { enum { Value = true }; };
template<> AUDIOSYNESTHESIA_NON_ATTRIBUTED_API UEnum* StaticEnum<ELoudnessNRTCurveTypeEnum>();
// ********** End Enum ELoudnessNRTCurveTypeEnum ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
