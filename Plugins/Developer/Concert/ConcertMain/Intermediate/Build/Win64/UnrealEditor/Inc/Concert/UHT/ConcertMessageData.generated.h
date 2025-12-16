// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertMessageData.h"

#ifdef CONCERT_ConcertMessageData_generated_h
#error "ConcertMessageData.generated.h already included, missing '#pragma once' in ConcertMessageData.h"
#endif
#define CONCERT_ConcertMessageData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertInstanceInfo **********************************************
struct Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_236_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


struct FConcertInstanceInfo;
// ********** End ScriptStruct FConcertInstanceInfo ************************************************

// ********** Begin ScriptStruct FConcertServerInfo ************************************************
struct Z_Construct_UScriptStruct_FConcertServerInfo_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_264_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertServerInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


struct FConcertServerInfo;
// ********** End ScriptStruct FConcertServerInfo **************************************************

// ********** Begin ScriptStruct FConcertClientInfo ************************************************
struct Z_Construct_UScriptStruct_FConcertClientInfo_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_292_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertClientInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


struct FConcertClientInfo;
// ********** End ScriptStruct FConcertClientInfo **************************************************

// ********** Begin ScriptStruct FConcertSessionClientInfo *****************************************
struct Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_351_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


struct FConcertSessionClientInfo;
// ********** End ScriptStruct FConcertSessionClientInfo *******************************************

// ********** Begin ScriptStruct FConcertSessionInfo ***********************************************
struct Z_Construct_UScriptStruct_FConcertSessionInfo_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_367_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSessionInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


struct FConcertSessionInfo;
// ********** End ScriptStruct FConcertSessionInfo *************************************************

// ********** Begin ScriptStruct FConcertSessionFilter *********************************************
struct Z_Construct_UScriptStruct_FConcertSessionFilter_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_426_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSessionFilter_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


struct FConcertSessionFilter;
// ********** End ScriptStruct FConcertSessionFilter ***********************************************

// ********** Begin ScriptStruct FConcertByteArray *************************************************
struct Z_Construct_UScriptStruct_FConcertByteArray_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_466_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertByteArray_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


struct FConcertByteArray;
// ********** End ScriptStruct FConcertByteArray ***************************************************

// ********** Begin ScriptStruct FConcertSessionSerializedPayload **********************************
struct Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_497_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


struct FConcertSessionSerializedPayload;
// ********** End ScriptStruct FConcertSessionSerializedPayload ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h

// ********** Begin Enum EConcertServerFlags *******************************************************
#define FOREACH_ENUM_ECONCERTSERVERFLAGS(op) \
	op(EConcertServerFlags::None) \
	op(EConcertServerFlags::IgnoreSessionRequirement) 

enum class EConcertServerFlags : uint8;
template<> struct TIsUEnumClass<EConcertServerFlags> { enum { Value = true }; };
template<> CONCERT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertServerFlags>();
// ********** End Enum EConcertServerFlags *********************************************************

// ********** Begin Enum EConcertSessionState ******************************************************
#define FOREACH_ENUM_ECONCERTSESSIONSTATE(op) \
	op(EConcertSessionState::Normal) \
	op(EConcertSessionState::Transient) 

enum class EConcertSessionState : uint8;
template<> struct TIsUEnumClass<EConcertSessionState> { enum { Value = true }; };
template<> CONCERT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertSessionState>();
// ********** End Enum EConcertSessionState ********************************************************

// ********** Begin Enum EConcertPayloadCompressionType ********************************************
#define FOREACH_ENUM_ECONCERTPAYLOADCOMPRESSIONTYPE(op) \
	op(EConcertPayloadCompressionType::None) \
	op(EConcertPayloadCompressionType::Heuristic) \
	op(EConcertPayloadCompressionType::Always) 

enum class EConcertPayloadCompressionType : uint8;
template<> struct TIsUEnumClass<EConcertPayloadCompressionType> { enum { Value = true }; };
template<> CONCERT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertPayloadCompressionType>();
// ********** End Enum EConcertPayloadCompressionType **********************************************

// ********** Begin Enum EConcertCompressionDetails ************************************************
#define FOREACH_ENUM_ECONCERTCOMPRESSIONDETAILS(op) \
	op(EConcertCompressionDetails::Uncompressed) \
	op(EConcertCompressionDetails::Compressed) \
	op(EConcertCompressionDetails::CompressWithOodle) \
	op(EConcertCompressionDetails::CompressForSpeed) \
	op(EConcertCompressionDetails::CompressForSize) 

enum class EConcertCompressionDetails : uint8;
template<> struct TIsUEnumClass<EConcertCompressionDetails> { enum { Value = true }; };
template<> CONCERT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertCompressionDetails>();
// ********** End Enum EConcertCompressionDetails **************************************************

// ********** Begin Enum EConcertPayloadSerializationMethod ****************************************
#define FOREACH_ENUM_ECONCERTPAYLOADSERIALIZATIONMETHOD(op) \
	op(EConcertPayloadSerializationMethod::Standard) \
	op(EConcertPayloadSerializationMethod::Cbor) 

enum class EConcertPayloadSerializationMethod : uint8;
template<> struct TIsUEnumClass<EConcertPayloadSerializationMethod> { enum { Value = true }; };
template<> CONCERT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertPayloadSerializationMethod>();
// ********** End Enum EConcertPayloadSerializationMethod ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
