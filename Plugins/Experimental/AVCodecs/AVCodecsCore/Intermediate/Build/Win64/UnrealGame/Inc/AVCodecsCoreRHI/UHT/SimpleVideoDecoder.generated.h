// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Video/Decoders/SimpleVideoDecoder.h"

#ifdef AVCODECSCORERHI_SimpleVideoDecoder_generated_h
#error "SimpleVideoDecoder.generated.h already included, missing '#pragma once' in SimpleVideoDecoder.h"
#endif
#define AVCODECSCORERHI_SimpleVideoDecoder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
enum class ESimpleVideoCodec : uint8;
struct FSimpleVideoPacket;

// ********** Begin Class USimpleVideoDecoder ******************************************************
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCodec); \
	DECLARE_FUNCTION(execReceiveFrame); \
	DECLARE_FUNCTION(execSendPacket); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsAsync);


struct Z_Construct_UClass_USimpleVideoDecoder_Statics;
AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleVideoDecoder_NoRegister();

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleVideoDecoder(); \
	friend struct ::Z_Construct_UClass_USimpleVideoDecoder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVCODECSCORERHI_API UClass* ::Z_Construct_UClass_USimpleVideoDecoder_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleVideoDecoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), Z_Construct_UClass_USimpleVideoDecoder_NoRegister) \
	DECLARE_SERIALIZER(USimpleVideoDecoder)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVCODECSCORERHI_API USimpleVideoDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleVideoDecoder(USimpleVideoDecoder&&) = delete; \
	USimpleVideoDecoder(const USimpleVideoDecoder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVCODECSCORERHI_API, USimpleVideoDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleVideoDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleVideoDecoder) \
	AVCODECSCORERHI_API virtual ~USimpleVideoDecoder();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleVideoDecoder;

// ********** End Class USimpleVideoDecoder ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
