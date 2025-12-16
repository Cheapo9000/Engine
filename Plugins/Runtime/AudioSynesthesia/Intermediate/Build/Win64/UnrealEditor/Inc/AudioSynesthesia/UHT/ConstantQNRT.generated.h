// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstantQNRT.h"

#ifdef AUDIOSYNESTHESIA_ConstantQNRT_generated_h
#error "ConstantQNRT.generated.h already included, missing '#pragma once' in ConstantQNRT.h"
#endif
#define AUDIOSYNESTHESIA_ConstantQNRT_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConstantQNRTSettings ****************************************************
struct Z_Construct_UClass_UConstantQNRTSettings_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQNRTSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstantQNRTSettings(); \
	friend struct ::Z_Construct_UClass_UConstantQNRTSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_UConstantQNRTSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstantQNRTSettings, UAudioSynesthesiaNRTSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_UConstantQNRTSettings_NoRegister) \
	DECLARE_SERIALIZER(UConstantQNRTSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_72_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstantQNRTSettings(UConstantQNRTSettings&&) = delete; \
	UConstantQNRTSettings(const UConstantQNRTSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UConstantQNRTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstantQNRTSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstantQNRTSettings) \
	AUDIOSYNESTHESIA_API virtual ~UConstantQNRTSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_69_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstantQNRTSettings;

// ********** End Class UConstantQNRTSettings ******************************************************

// ********** Begin Class UConstantQNRT ************************************************************
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNormalizedChannelConstantQAtTime); \
	DECLARE_FUNCTION(execGetChannelConstantQAtTime);


struct Z_Construct_UClass_UConstantQNRT_Statics;
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQNRT_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstantQNRT(); \
	friend struct ::Z_Construct_UClass_UConstantQNRT_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOSYNESTHESIA_API UClass* ::Z_Construct_UClass_UConstantQNRT_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstantQNRT, UAudioSynesthesiaNRT, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), Z_Construct_UClass_UConstantQNRT_NoRegister) \
	DECLARE_SERIALIZER(UConstantQNRT)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_139_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstantQNRT(UConstantQNRT&&) = delete; \
	UConstantQNRT(const UConstantQNRT&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UConstantQNRT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstantQNRT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstantQNRT) \
	AUDIOSYNESTHESIA_API virtual ~UConstantQNRT();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_136_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_139_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_139_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstantQNRT;

// ********** End Class UConstantQNRT **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h

// ********** Begin Enum EConstantQNormalizationEnum ***********************************************
#define FOREACH_ENUM_ECONSTANTQNORMALIZATIONENUM(op) \
	op(EConstantQNormalizationEnum::EqualEuclideanNorm) \
	op(EConstantQNormalizationEnum::EqualEnergy) \
	op(EConstantQNormalizationEnum::EqualAmplitude) 

enum class EConstantQNormalizationEnum : uint8;
template<> struct TIsUEnumClass<EConstantQNormalizationEnum> { enum { Value = true }; };
template<> AUDIOSYNESTHESIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EConstantQNormalizationEnum>();
// ********** End Enum EConstantQNormalizationEnum *************************************************

// ********** Begin Enum EConstantQFFTSizeEnum *****************************************************
#define FOREACH_ENUM_ECONSTANTQFFTSIZEENUM(op) \
	op(EConstantQFFTSizeEnum::Min) \
	op(EConstantQFFTSizeEnum::XXSmall) \
	op(EConstantQFFTSizeEnum::XSmall) \
	op(EConstantQFFTSizeEnum::Small) \
	op(EConstantQFFTSizeEnum::Medium) \
	op(EConstantQFFTSizeEnum::Large) \
	op(EConstantQFFTSizeEnum::XLarge) \
	op(EConstantQFFTSizeEnum::XXLarge) \
	op(EConstantQFFTSizeEnum::Max) 

enum class EConstantQFFTSizeEnum : uint8;
template<> struct TIsUEnumClass<EConstantQFFTSizeEnum> { enum { Value = true }; };
template<> AUDIOSYNESTHESIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EConstantQFFTSizeEnum>();
// ********** End Enum EConstantQFFTSizeEnum *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
