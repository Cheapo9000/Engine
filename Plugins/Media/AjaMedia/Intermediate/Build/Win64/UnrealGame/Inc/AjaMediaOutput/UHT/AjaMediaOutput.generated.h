// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AjaMediaOutput.h"

#ifdef AJAMEDIAOUTPUT_AjaMediaOutput_generated_h
#error "AjaMediaOutput.generated.h already included, missing '#pragma once' in AjaMediaOutput.h"
#endif
#define AJAMEDIAOUTPUT_AjaMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAjaMediaOutput **********************************************************
struct Z_Construct_UClass_UAjaMediaOutput_Statics;
AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaMediaOutput_NoRegister();

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUAjaMediaOutput(); \
	friend struct ::Z_Construct_UClass_UAjaMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AJAMEDIAOUTPUT_API UClass* ::Z_Construct_UClass_UAjaMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UAjaMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMediaOutput"), Z_Construct_UClass_UAjaMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(UAjaMediaOutput)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAjaMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAjaMediaOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaMediaOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAjaMediaOutput(UAjaMediaOutput&&) = delete; \
	UAjaMediaOutput(const UAjaMediaOutput&) = delete; \
	NO_API virtual ~UAjaMediaOutput();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_44_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_47_INCLASS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAjaMediaOutput;

// ********** End Class UAjaMediaOutput ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h

// ********** Begin Enum EAjaMediaOutputPixelFormat ************************************************
#define FOREACH_ENUM_EAJAMEDIAOUTPUTPIXELFORMAT(op) \
	op(EAjaMediaOutputPixelFormat::PF_8BIT_YUV) \
	op(EAjaMediaOutputPixelFormat::PF_10BIT_YUV) 

enum class EAjaMediaOutputPixelFormat : uint8;
template<> struct TIsUEnumClass<EAjaMediaOutputPixelFormat> { enum { Value = true }; };
template<> AJAMEDIAOUTPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAjaMediaOutputPixelFormat>();
// ********** End Enum EAjaMediaOutputPixelFormat **************************************************

// ********** Begin Enum EAjaMediaOutputAudioSampleRate ********************************************
#define FOREACH_ENUM_EAJAMEDIAOUTPUTAUDIOSAMPLERATE(op) \
	op(EAjaMediaOutputAudioSampleRate::SR_48k) 

enum class EAjaMediaOutputAudioSampleRate : uint32;
template<> struct TIsUEnumClass<EAjaMediaOutputAudioSampleRate> { enum { Value = true }; };
template<> AJAMEDIAOUTPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAjaMediaOutputAudioSampleRate>();
// ********** End Enum EAjaMediaOutputAudioSampleRate **********************************************

// ********** Begin Enum EAjaMediaOutputChannelConfiguration ***************************************
#define FOREACH_ENUM_EAJAMEDIAOUTPUTCHANNELCONFIGURATION(op) \
	op(EAjaMediaOutputChannelConfiguration::CH_6) \
	op(EAjaMediaOutputChannelConfiguration::CH_8) \
	op(EAjaMediaOutputChannelConfiguration::CH_16) 

enum class EAjaMediaOutputChannelConfiguration : uint8;
template<> struct TIsUEnumClass<EAjaMediaOutputChannelConfiguration> { enum { Value = true }; };
template<> AJAMEDIAOUTPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAjaMediaOutputChannelConfiguration>();
// ********** End Enum EAjaMediaOutputChannelConfiguration *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
