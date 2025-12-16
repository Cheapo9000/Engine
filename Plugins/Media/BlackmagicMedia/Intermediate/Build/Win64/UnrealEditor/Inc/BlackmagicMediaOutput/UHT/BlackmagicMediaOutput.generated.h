// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackmagicMediaOutput.h"

#ifdef BLACKMAGICMEDIAOUTPUT_BlackmagicMediaOutput_generated_h
#error "BlackmagicMediaOutput.generated.h already included, missing '#pragma once' in BlackmagicMediaOutput.h"
#endif
#define BLACKMAGICMEDIAOUTPUT_BlackmagicMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackmagicMediaOutput ***************************************************
struct Z_Construct_UClass_UBlackmagicMediaOutput_Statics;
BLACKMAGICMEDIAOUTPUT_API UClass* Z_Construct_UClass_UBlackmagicMediaOutput_NoRegister();

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUBlackmagicMediaOutput(); \
	friend struct ::Z_Construct_UClass_UBlackmagicMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLACKMAGICMEDIAOUTPUT_API UClass* ::Z_Construct_UClass_UBlackmagicMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackmagicMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMediaOutput"), Z_Construct_UClass_UBlackmagicMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(UBlackmagicMediaOutput)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackmagicMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackmagicMediaOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicMediaOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackmagicMediaOutput(UBlackmagicMediaOutput&&) = delete; \
	UBlackmagicMediaOutput(const UBlackmagicMediaOutput&) = delete; \
	NO_API virtual ~UBlackmagicMediaOutput();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_48_PROLOG
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_51_INCLASS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackmagicMediaOutput;

// ********** End Class UBlackmagicMediaOutput *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h

// ********** Begin Enum EBlackmagicMediaOutputPixelFormat *****************************************
#define FOREACH_ENUM_EBLACKMAGICMEDIAOUTPUTPIXELFORMAT(op) \
	op(EBlackmagicMediaOutputPixelFormat::PF_8BIT_YUV) \
	op(EBlackmagicMediaOutputPixelFormat::PF_10BIT_YUV) 

enum class EBlackmagicMediaOutputPixelFormat : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaOutputPixelFormat> { enum { Value = true }; };
template<> BLACKMAGICMEDIAOUTPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackmagicMediaOutputPixelFormat>();
// ********** End Enum EBlackmagicMediaOutputPixelFormat *******************************************

// ********** Begin Enum EBlackmagicMediaOutputAudioSampleRate *************************************
#define FOREACH_ENUM_EBLACKMAGICMEDIAOUTPUTAUDIOSAMPLERATE(op) \
	op(EBlackmagicMediaOutputAudioSampleRate::SR_48k) 

enum class EBlackmagicMediaOutputAudioSampleRate : uint32;
template<> struct TIsUEnumClass<EBlackmagicMediaOutputAudioSampleRate> { enum { Value = true }; };
template<> BLACKMAGICMEDIAOUTPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackmagicMediaOutputAudioSampleRate>();
// ********** End Enum EBlackmagicMediaOutputAudioSampleRate ***************************************

// ********** Begin Enum EBlackmagicMediaAudioOutputChannelCount ***********************************
#define FOREACH_ENUM_EBLACKMAGICMEDIAAUDIOOUTPUTCHANNELCOUNT(op) \
	op(EBlackmagicMediaAudioOutputChannelCount::CH_2) \
	op(EBlackmagicMediaAudioOutputChannelCount::CH_8) \
	op(EBlackmagicMediaAudioOutputChannelCount::CH_16) 

enum class EBlackmagicMediaAudioOutputChannelCount : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaAudioOutputChannelCount> { enum { Value = true }; };
template<> BLACKMAGICMEDIAOUTPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackmagicMediaAudioOutputChannelCount>();
// ********** End Enum EBlackmagicMediaAudioOutputChannelCount *************************************

// ********** Begin Enum EBlackmagicMediaOutputAudioBitDepth ***************************************
#define FOREACH_ENUM_EBLACKMAGICMEDIAOUTPUTAUDIOBITDEPTH(op) \
	op(EBlackmagicMediaOutputAudioBitDepth::Signed_16Bits) \
	op(EBlackmagicMediaOutputAudioBitDepth::Signed_32Bits) 

enum class EBlackmagicMediaOutputAudioBitDepth : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaOutputAudioBitDepth> { enum { Value = true }; };
template<> BLACKMAGICMEDIAOUTPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackmagicMediaOutputAudioBitDepth>();
// ********** End Enum EBlackmagicMediaOutputAudioBitDepth *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
