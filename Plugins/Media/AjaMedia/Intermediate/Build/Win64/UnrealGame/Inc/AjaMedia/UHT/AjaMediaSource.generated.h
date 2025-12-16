// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AjaMediaSource.h"

#ifdef AJAMEDIA_AjaMediaSource_generated_h
#error "AjaMediaSource.generated.h already included, missing '#pragma once' in AjaMediaSource.h"
#endif
#define AJAMEDIA_AjaMediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAjaMediaSource **********************************************************
struct Z_Construct_UClass_UAjaMediaSource_Statics;
AJAMEDIA_API UClass* Z_Construct_UClass_UAjaMediaSource_NoRegister();

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAjaMediaSource(); \
	friend struct ::Z_Construct_UClass_UAjaMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AJAMEDIA_API UClass* ::Z_Construct_UClass_UAjaMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UAjaMediaSource, UCaptureCardMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMedia"), Z_Construct_UClass_UAjaMediaSource_NoRegister) \
	DECLARE_SERIALIZER(UAjaMediaSource)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAjaMediaSource(UAjaMediaSource&&) = delete; \
	UAjaMediaSource(const UAjaMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaMediaSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAjaMediaSource) \
	NO_API virtual ~UAjaMediaSource();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_35_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAjaMediaSource;

// ********** End Class UAjaMediaSource ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h

// ********** Begin Enum EAjaMediaSourceColorFormat ************************************************
#define FOREACH_ENUM_EAJAMEDIASOURCECOLORFORMAT(op) \
	op(EAjaMediaSourceColorFormat::YUV2_8bit) \
	op(EAjaMediaSourceColorFormat::YUV_10bit) 

enum class EAjaMediaSourceColorFormat : uint8;
template<> struct TIsUEnumClass<EAjaMediaSourceColorFormat> { enum { Value = true }; };
template<> AJAMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAjaMediaSourceColorFormat>();
// ********** End Enum EAjaMediaSourceColorFormat **************************************************

// ********** Begin Enum EAjaMediaAudioChannel *****************************************************
#define FOREACH_ENUM_EAJAMEDIAAUDIOCHANNEL(op) \
	op(EAjaMediaAudioChannel::Channel6) \
	op(EAjaMediaAudioChannel::Channel8) 

enum class EAjaMediaAudioChannel : uint8;
template<> struct TIsUEnumClass<EAjaMediaAudioChannel> { enum { Value = true }; };
template<> AJAMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAjaMediaAudioChannel>();
// ********** End Enum EAjaMediaAudioChannel *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
