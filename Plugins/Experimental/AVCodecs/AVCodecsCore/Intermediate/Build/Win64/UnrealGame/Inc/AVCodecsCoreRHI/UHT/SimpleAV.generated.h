// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleAV.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVCODECSCORERHI_SimpleAV_generated_h
#error "SimpleAV.generated.h already included, missing '#pragma once' in SimpleAV.h"
#endif
#define AVCODECSCORERHI_SimpleAV_generated_h

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleAVHelper(); \
	friend struct Z_Construct_UClass_USimpleAVHelper_Statics; \
public: \
	DECLARE_CLASS(USimpleAVHelper, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), NO_API) \
	DECLARE_SERIALIZER(USimpleAVHelper)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleAVHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleAVHelper(USimpleAVHelper&&); \
	USimpleAVHelper(const USimpleAVHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleAVHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleAVHelper); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleAVHelper) \
	NO_API virtual ~USimpleAVHelper();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVCODECSCORERHI_API UClass* StaticClass<class USimpleAVHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h


#define FOREACH_ENUM_ESIMPLEAVPRESET(op) \
	op(ESimpleAVPreset::Default) \
	op(ESimpleAVPreset::UltraLowQuality) \
	op(ESimpleAVPreset::LowQuality) \
	op(ESimpleAVPreset::HighQuality) \
	op(ESimpleAVPreset::Lossless) 

enum class ESimpleAVPreset : uint8;
template<> struct TIsUEnumClass<ESimpleAVPreset> { enum { Value = true }; };
template<> AVCODECSCORERHI_API UEnum* StaticEnum<ESimpleAVPreset>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
