// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertTransportMessages.h"

#ifdef CONCERTTRANSPORT_ConcertTransportMessages_generated_h
#error "ConcertTransportMessages.generated.h already included, missing '#pragma once' in ConcertTransportMessages.h"
#endif
#define CONCERTTRANSPORT_ConcertTransportMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertMessageData ***********************************************
struct Z_Construct_UScriptStruct_FConcertMessageData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertMessageData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct();


struct FConcertMessageData;
// ********** End ScriptStruct FConcertMessageData *************************************************

// ********** Begin ScriptStruct FConcertEventData *************************************************
struct Z_Construct_UScriptStruct_FConcertEventData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertEventData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


struct FConcertEventData;
// ********** End ScriptStruct FConcertEventData ***************************************************

// ********** Begin ScriptStruct FConcertRequestData ***********************************************
struct Z_Construct_UScriptStruct_FConcertRequestData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertRequestData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


struct FConcertRequestData;
// ********** End ScriptStruct FConcertRequestData *************************************************

// ********** Begin ScriptStruct FConcertResponseData **********************************************
struct Z_Construct_UScriptStruct_FConcertResponseData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_132_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertResponseData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


struct FConcertResponseData;
// ********** End ScriptStruct FConcertResponseData ************************************************

// ********** Begin ScriptStruct FConcertEndpointDiscoveryEvent ************************************
struct Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_168_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertEventData Super;


struct FConcertEndpointDiscoveryEvent;
// ********** End ScriptStruct FConcertEndpointDiscoveryEvent **************************************

// ********** Begin ScriptStruct FConcertEndpointClosedData ****************************************
struct Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


struct FConcertEndpointClosedData;
// ********** End ScriptStruct FConcertEndpointClosedData ******************************************

// ********** Begin ScriptStruct FConcertReliableHandshakeData *************************************
struct Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_186_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertEndpointDiscoveryEvent Super;


struct FConcertReliableHandshakeData;
// ********** End ScriptStruct FConcertReliableHandshakeData ***************************************

// ********** Begin ScriptStruct FConcertAckData ***************************************************
struct Z_Construct_UScriptStruct_FConcertAckData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_209_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertAckData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


struct FConcertAckData;
// ********** End ScriptStruct FConcertAckData *****************************************************

// ********** Begin ScriptStruct FConcertKeepAlive *************************************************
struct Z_Construct_UScriptStruct_FConcertKeepAlive_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_224_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertKeepAlive_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


struct FConcertKeepAlive;
// ********** End ScriptStruct FConcertKeepAlive ***************************************************

// ********** Begin ScriptStruct FConcertSendResendPending *****************************************
struct Z_Construct_UScriptStruct_FConcertSendResendPending_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_231_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSendResendPending_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct();


struct FConcertSendResendPending;
// ********** End ScriptStruct FConcertSendResendPending *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h

// ********** Begin Enum EConcertMessageFlags ******************************************************
#define FOREACH_ENUM_ECONCERTMESSAGEFLAGS(op) \
	op(EConcertMessageFlags::None) \
	op(EConcertMessageFlags::ReliableOrdered) \
	op(EConcertMessageFlags::UniqueId) 

enum class EConcertMessageFlags : uint8;
template<> struct TIsUEnumClass<EConcertMessageFlags> { enum { Value = true }; };
template<> CONCERTTRANSPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertMessageFlags>();
// ********** End Enum EConcertMessageFlags ********************************************************

// ********** Begin Enum EConcertResponseCode ******************************************************
#define FOREACH_ENUM_ECONCERTRESPONSECODE(op) \
	op(EConcertResponseCode::Pending) \
	op(EConcertResponseCode::Success) \
	op(EConcertResponseCode::Failed) \
	op(EConcertResponseCode::InvalidRequest) \
	op(EConcertResponseCode::UnknownRequest) \
	op(EConcertResponseCode::TimedOut) 

enum class EConcertResponseCode : uint8;
template<> struct TIsUEnumClass<EConcertResponseCode> { enum { Value = true }; };
template<> CONCERTTRANSPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertResponseCode>();
// ********** End Enum EConcertResponseCode ********************************************************

// ********** Begin Enum EConcertReliableHandshakeState ********************************************
#define FOREACH_ENUM_ECONCERTRELIABLEHANDSHAKESTATE(op) \
	op(EConcertReliableHandshakeState::None) \
	op(EConcertReliableHandshakeState::Negotiate) \
	op(EConcertReliableHandshakeState::Success) 

enum class EConcertReliableHandshakeState : uint8;
template<> struct TIsUEnumClass<EConcertReliableHandshakeState> { enum { Value = true }; };
template<> CONCERTTRANSPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertReliableHandshakeState>();
// ********** End Enum EConcertReliableHandshakeState **********************************************

// ********** Begin Enum EConcertMessageVersion ****************************************************
#define FOREACH_ENUM_ECONCERTMESSAGEVERSION(op) \
	op(EConcertMessageVersion::BeforeVersioning) \
	op(EConcertMessageVersion::Initial) \
	op(EConcertMessageVersion::VersionPlusOne) \
	op(EConcertMessageVersion::LatestVersion) 

enum class EConcertMessageVersion : uint32;
template<> struct TIsUEnumClass<EConcertMessageVersion> { enum { Value = true }; };
template<> CONCERTTRANSPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertMessageVersion>();
// ********** End Enum EConcertMessageVersion ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
