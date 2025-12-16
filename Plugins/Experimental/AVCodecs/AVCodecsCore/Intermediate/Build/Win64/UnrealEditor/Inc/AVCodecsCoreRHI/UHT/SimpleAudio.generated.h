// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/SimpleAudio.h"

#ifdef AVCODECSCORERHI_SimpleAudio_generated_h
#error "SimpleAudio.generated.h already included, missing '#pragma once' in SimpleAudio.h"
#endif
#define AVCODECSCORERHI_SimpleAudio_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSimpleAudioPacket ************************************************
struct Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics;
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics; \
	AVCODECSCORERHI_API static class UScriptStruct* StaticStruct();


struct FSimpleAudioPacket;
// ********** End ScriptStruct FSimpleAudioPacket **************************************************

// ********** Begin Class USimpleAudioHelper *******************************************************
struct Z_Construct_UClass_USimpleAudioHelper_Statics;
AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAudioHelper_NoRegister();

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleAudioHelper(); \
	friend struct ::Z_Construct_UClass_USimpleAudioHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVCODECSCORERHI_API UClass* ::Z_Construct_UClass_USimpleAudioHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleAudioHelper, USimpleAVHelper, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), Z_Construct_UClass_USimpleAudioHelper_NoRegister) \
	DECLARE_SERIALIZER(USimpleAudioHelper)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVCODECSCORERHI_API USimpleAudioHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleAudioHelper(USimpleAudioHelper&&) = delete; \
	USimpleAudioHelper(const USimpleAudioHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVCODECSCORERHI_API, USimpleAudioHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleAudioHelper); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleAudioHelper) \
	AVCODECSCORERHI_API virtual ~USimpleAudioHelper();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleAudioHelper;

// ********** End Class USimpleAudioHelper *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h

// ********** Begin Enum ESimpleAudioCodec *********************************************************
#define FOREACH_ENUM_ESIMPLEAUDIOCODEC(op) \
	op(ESimpleAudioCodec::AAC) 

enum class ESimpleAudioCodec : uint8;
template<> struct TIsUEnumClass<ESimpleAudioCodec> { enum { Value = true }; };
template<> AVCODECSCORERHI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESimpleAudioCodec>();
// ********** End Enum ESimpleAudioCodec ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
