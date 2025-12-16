// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackmagicMediaSource.h"

#ifdef BLACKMAGICMEDIA_BlackmagicMediaSource_generated_h
#error "BlackmagicMediaSource.generated.h already included, missing '#pragma once' in BlackmagicMediaSource.h"
#endif
#define BLACKMAGICMEDIA_BlackmagicMediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackmagicMediaSource ***************************************************
struct Z_Construct_UClass_UBlackmagicMediaSource_Statics;
BLACKMAGICMEDIA_API UClass* Z_Construct_UClass_UBlackmagicMediaSource_NoRegister();

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackmagicMediaSource(); \
	friend struct ::Z_Construct_UClass_UBlackmagicMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLACKMAGICMEDIA_API UClass* ::Z_Construct_UClass_UBlackmagicMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackmagicMediaSource, UCaptureCardMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMedia"), Z_Construct_UClass_UBlackmagicMediaSource_NoRegister) \
	DECLARE_SERIALIZER(UBlackmagicMediaSource)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackmagicMediaSource(UBlackmagicMediaSource&&) = delete; \
	UBlackmagicMediaSource(const UBlackmagicMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicMediaSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlackmagicMediaSource) \
	NO_API virtual ~UBlackmagicMediaSource();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_36_PROLOG
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackmagicMediaSource;

// ********** End Class UBlackmagicMediaSource *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h

// ********** Begin Enum EBlackmagicMediaSourceColorFormat *****************************************
#define FOREACH_ENUM_EBLACKMAGICMEDIASOURCECOLORFORMAT(op) \
	op(EBlackmagicMediaSourceColorFormat::YUV8) \
	op(EBlackmagicMediaSourceColorFormat::YUV10) 

enum class EBlackmagicMediaSourceColorFormat : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaSourceColorFormat> { enum { Value = true }; };
template<> BLACKMAGICMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackmagicMediaSourceColorFormat>();
// ********** End Enum EBlackmagicMediaSourceColorFormat *******************************************

// ********** Begin Enum EBlackmagicMediaAudioChannel **********************************************
#define FOREACH_ENUM_EBLACKMAGICMEDIAAUDIOCHANNEL(op) \
	op(EBlackmagicMediaAudioChannel::Stereo2) \
	op(EBlackmagicMediaAudioChannel::Surround8) 

enum class EBlackmagicMediaAudioChannel : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaAudioChannel> { enum { Value = true }; };
template<> BLACKMAGICMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackmagicMediaAudioChannel>();
// ********** End Enum EBlackmagicMediaAudioChannel ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
