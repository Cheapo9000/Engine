// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/Encoders/SimpleAudioEncoder.h"

#ifdef AVCODECSCORERHI_SimpleAudioEncoder_generated_h
#error "SimpleAudioEncoder.generated.h already included, missing '#pragma once' in SimpleAudioEncoder.h"
#endif
#define AVCODECSCORERHI_SimpleAudioEncoder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESimpleAudioCodec : uint8;
struct FSimpleAudioEncoderConfig;
struct FSimpleAudioPacket;

// ********** Begin ScriptStruct FSimpleAudioEncoderConfig *****************************************
struct Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics;
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics; \
	AVCODECSCORERHI_API static class UScriptStruct* StaticStruct();


struct FSimpleAudioEncoderConfig;
// ********** End ScriptStruct FSimpleAudioEncoderConfig *******************************************

// ********** Begin Class USimpleAudioEncoder ******************************************************
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetConfig); \
	DECLARE_FUNCTION(execGetConfig); \
	DECLARE_FUNCTION(execGetCodec); \
	DECLARE_FUNCTION(execReceivePackets); \
	DECLARE_FUNCTION(execReceivePacket); \
	DECLARE_FUNCTION(execSendFrameFloat); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsAsync);


struct Z_Construct_UClass_USimpleAudioEncoder_Statics;
AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAudioEncoder_NoRegister();

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleAudioEncoder(); \
	friend struct ::Z_Construct_UClass_USimpleAudioEncoder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVCODECSCORERHI_API UClass* ::Z_Construct_UClass_USimpleAudioEncoder_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleAudioEncoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), Z_Construct_UClass_USimpleAudioEncoder_NoRegister) \
	DECLARE_SERIALIZER(USimpleAudioEncoder)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVCODECSCORERHI_API USimpleAudioEncoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleAudioEncoder(USimpleAudioEncoder&&) = delete; \
	USimpleAudioEncoder(const USimpleAudioEncoder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVCODECSCORERHI_API, USimpleAudioEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleAudioEncoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleAudioEncoder) \
	AVCODECSCORERHI_API virtual ~USimpleAudioEncoder();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleAudioEncoder;

// ********** End Class USimpleAudioEncoder ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
