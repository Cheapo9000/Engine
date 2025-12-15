// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkCompression.h"

#ifdef LIVELINKMESSAGEBUSFRAMEWORK_LiveLinkCompression_generated_h
#error "LiveLinkCompression.generated.h already included, missing '#pragma once' in LiveLinkCompression.h"
#endif
#define LIVELINKMESSAGEBUSFRAMEWORK_LiveLinkCompression_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkByteArray ************************************************
struct Z_Construct_UScriptStruct_FLiveLinkByteArray_Statics;
#define FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkCompression_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkByteArray_Statics; \
	LIVELINKMESSAGEBUSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkByteArray;
// ********** End ScriptStruct FLiveLinkByteArray **************************************************

// ********** Begin ScriptStruct FLiveLinkSerializedFrameData **************************************
struct Z_Construct_UScriptStruct_FLiveLinkSerializedFrameData_Statics;
#define FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkCompression_h_198_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkSerializedFrameData_Statics; \
	LIVELINKMESSAGEBUSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkSerializedFrameData;
// ********** End ScriptStruct FLiveLinkSerializedFrameData ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkCompression_h

// ********** Begin Enum ELiveLinkCompressionMethod ************************************************
#define FOREACH_ENUM_ELIVELINKCOMPRESSIONMETHOD(op) \
	op(ELiveLinkCompressionMethod::Uncompressed) \
	op(ELiveLinkCompressionMethod::Oodle) \
	op(ELiveLinkCompressionMethod::Zlib) 

enum class ELiveLinkCompressionMethod : uint8;
template<> struct TIsUEnumClass<ELiveLinkCompressionMethod> { enum { Value = true }; };
template<> LIVELINKMESSAGEBUSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkCompressionMethod>();
// ********** End Enum ELiveLinkCompressionMethod **************************************************

// ********** Begin Enum ELiveLinkCompressionBias **************************************************
#define FOREACH_ENUM_ELIVELINKCOMPRESSIONBIAS(op) \
	op(ELiveLinkCompressionBias::None) \
	op(ELiveLinkCompressionBias::Size) \
	op(ELiveLinkCompressionBias::Speed) 

enum class ELiveLinkCompressionBias : uint8;
template<> struct TIsUEnumClass<ELiveLinkCompressionBias> { enum { Value = true }; };
template<> LIVELINKMESSAGEBUSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkCompressionBias>();
// ********** End Enum ELiveLinkCompressionBias ****************************************************

// ********** Begin Enum ELiveLinkPayloadSerializationMethod ***************************************
#define FOREACH_ENUM_ELIVELINKPAYLOADSERIALIZATIONMETHOD(op) \
	op(ELiveLinkPayloadSerializationMethod::Standard) \
	op(ELiveLinkPayloadSerializationMethod::Cbor) 

enum class ELiveLinkPayloadSerializationMethod : uint8;
template<> struct TIsUEnumClass<ELiveLinkPayloadSerializationMethod> { enum { Value = true }; };
template<> LIVELINKMESSAGEBUSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkPayloadSerializationMethod>();
// ********** End Enum ELiveLinkPayloadSerializationMethod *****************************************

// ********** Begin Enum ELiveLinkPayloadCompressionType *******************************************
#define FOREACH_ENUM_ELIVELINKPAYLOADCOMPRESSIONTYPE(op) \
	op(ELiveLinkPayloadCompressionType::None) \
	op(ELiveLinkPayloadCompressionType::Heuristic) \
	op(ELiveLinkPayloadCompressionType::Always) 

enum class ELiveLinkPayloadCompressionType : uint8;
template<> struct TIsUEnumClass<ELiveLinkPayloadCompressionType> { enum { Value = true }; };
template<> LIVELINKMESSAGEBUSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkPayloadCompressionType>();
// ********** End Enum ELiveLinkPayloadCompressionType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
