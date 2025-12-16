// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Video/SimpleVideo.h"

#ifdef AVCODECSCORERHI_SimpleVideo_generated_h
#error "SimpleVideo.generated.h already included, missing '#pragma once' in SimpleVideo.h"
#endif
#define AVCODECSCORERHI_SimpleVideo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;

// ********** Begin ScriptStruct FSimpleVideoPacket ************************************************
struct Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics;
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics; \
	AVCODECSCORERHI_API static class UScriptStruct* StaticStruct();


struct FSimpleVideoPacket;
// ********** End ScriptStruct FSimpleVideoPacket **************************************************

// ********** Begin Class USimpleVideoHelper *******************************************************
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShareRenderTarget2D);


struct Z_Construct_UClass_USimpleVideoHelper_Statics;
AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleVideoHelper_NoRegister();

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleVideoHelper(); \
	friend struct ::Z_Construct_UClass_USimpleVideoHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVCODECSCORERHI_API UClass* ::Z_Construct_UClass_USimpleVideoHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleVideoHelper, USimpleAVHelper, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), Z_Construct_UClass_USimpleVideoHelper_NoRegister) \
	DECLARE_SERIALIZER(USimpleVideoHelper)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVCODECSCORERHI_API USimpleVideoHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleVideoHelper(USimpleVideoHelper&&) = delete; \
	USimpleVideoHelper(const USimpleVideoHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVCODECSCORERHI_API, USimpleVideoHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleVideoHelper); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleVideoHelper) \
	AVCODECSCORERHI_API virtual ~USimpleVideoHelper();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleVideoHelper;

// ********** End Class USimpleVideoHelper *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h

// ********** Begin Enum ESimpleVideoCodec *********************************************************
#define FOREACH_ENUM_ESIMPLEVIDEOCODEC(op) \
	op(ESimpleVideoCodec::H264) \
	op(ESimpleVideoCodec::H265) 

enum class ESimpleVideoCodec : uint8;
template<> struct TIsUEnumClass<ESimpleVideoCodec> { enum { Value = true }; };
template<> AVCODECSCORERHI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESimpleVideoCodec>();
// ********** End Enum ESimpleVideoCodec ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
