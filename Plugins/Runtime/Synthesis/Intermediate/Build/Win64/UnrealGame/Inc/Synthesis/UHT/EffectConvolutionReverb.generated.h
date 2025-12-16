// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EffectConvolutionReverb.h"

#ifdef SYNTHESIS_EffectConvolutionReverb_generated_h
#error "EffectConvolutionReverb.generated.h already included, missing '#pragma once' in EffectConvolutionReverb.h"
#endif
#define SYNTHESIS_EffectConvolutionReverb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioImpulseResponse ****************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_36_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioImpulseResponse, SYNTHESIS_API)


struct Z_Construct_UClass_UAudioImpulseResponse_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_UAudioImpulseResponse_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioImpulseResponse(); \
	friend struct ::Z_Construct_UClass_UAudioImpulseResponse_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_UAudioImpulseResponse_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioImpulseResponse, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_UAudioImpulseResponse_NoRegister) \
	DECLARE_SERIALIZER(UAudioImpulseResponse) \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_36_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioImpulseResponse(UAudioImpulseResponse&&) = delete; \
	UAudioImpulseResponse(const UAudioImpulseResponse&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, UAudioImpulseResponse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioImpulseResponse); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioImpulseResponse) \
	SYNTHESIS_API virtual ~UAudioImpulseResponse();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_33_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioImpulseResponse;

// ********** End Class UAudioImpulseResponse ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h

// ********** Begin Enum ESubmixEffectConvolutionReverbBlockSize ***********************************
#define FOREACH_ENUM_ESUBMIXEFFECTCONVOLUTIONREVERBBLOCKSIZE(op) \
	op(ESubmixEffectConvolutionReverbBlockSize::BlockSize256) \
	op(ESubmixEffectConvolutionReverbBlockSize::BlockSize512) \
	op(ESubmixEffectConvolutionReverbBlockSize::BlockSize1024) 

enum class ESubmixEffectConvolutionReverbBlockSize : uint8;
template<> struct TIsUEnumClass<ESubmixEffectConvolutionReverbBlockSize> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubmixEffectConvolutionReverbBlockSize>();
// ********** End Enum ESubmixEffectConvolutionReverbBlockSize *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
