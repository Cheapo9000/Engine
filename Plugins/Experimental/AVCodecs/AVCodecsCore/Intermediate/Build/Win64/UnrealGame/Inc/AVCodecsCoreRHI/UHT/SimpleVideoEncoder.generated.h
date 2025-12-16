// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Video/Encoders/SimpleVideoEncoder.h"

#ifdef AVCODECSCORERHI_SimpleVideoEncoder_generated_h
#error "SimpleVideoEncoder.generated.h already included, missing '#pragma once' in SimpleVideoEncoder.h"
#endif
#define AVCODECSCORERHI_SimpleVideoEncoder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTextureRenderTarget2D;
enum class ESimpleVideoCodec : uint8;
struct FSimpleVideoEncoderConfig;
struct FSimpleVideoPacket;

// ********** Begin ScriptStruct FSimpleVideoEncoderConfig *****************************************
struct Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics;
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics; \
	AVCODECSCORERHI_API static class UScriptStruct* StaticStruct();


struct FSimpleVideoEncoderConfig;
// ********** End ScriptStruct FSimpleVideoEncoderConfig *******************************************

// ********** Begin Class USimpleVideoEncoder ******************************************************
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetConfig); \
	DECLARE_FUNCTION(execGetConfig); \
	DECLARE_FUNCTION(execGetCodec); \
	DECLARE_FUNCTION(execReceivePackets); \
	DECLARE_FUNCTION(execReceivePacket); \
	DECLARE_FUNCTION(execSendFrameTexture); \
	DECLARE_FUNCTION(execSendFrameRenderTarget); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsAsync);


struct Z_Construct_UClass_USimpleVideoEncoder_Statics;
AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleVideoEncoder_NoRegister();

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleVideoEncoder(); \
	friend struct ::Z_Construct_UClass_USimpleVideoEncoder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVCODECSCORERHI_API UClass* ::Z_Construct_UClass_USimpleVideoEncoder_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleVideoEncoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), Z_Construct_UClass_USimpleVideoEncoder_NoRegister) \
	DECLARE_SERIALIZER(USimpleVideoEncoder)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVCODECSCORERHI_API USimpleVideoEncoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleVideoEncoder(USimpleVideoEncoder&&) = delete; \
	USimpleVideoEncoder(const USimpleVideoEncoder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVCODECSCORERHI_API, USimpleVideoEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleVideoEncoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleVideoEncoder) \
	AVCODECSCORERHI_API virtual ~USimpleVideoEncoder();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_66_PROLOG
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleVideoEncoder;

// ********** End Class USimpleVideoEncoder ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
