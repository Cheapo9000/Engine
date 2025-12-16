// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/Handshake.h"

#ifdef CONCERTSYNCCORE_Handshake_generated_h
#error "Handshake.generated.h already included, missing '#pragma once' in Handshake.h"
#endif
#define CONCERTSYNCCORE_Handshake_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertReplication_Join_Request **********************************
struct Z_Construct_UScriptStruct_FConcertReplication_Join_Request_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Handshake_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_Join_Request_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_Join_Request;
// ********** End ScriptStruct FConcertReplication_Join_Request ************************************

// ********** Begin ScriptStruct FConcertReplication_Join_Response *********************************
struct Z_Construct_UScriptStruct_FConcertReplication_Join_Response_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Handshake_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_Join_Response_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_Join_Response;
// ********** End ScriptStruct FConcertReplication_Join_Response ***********************************

// ********** Begin ScriptStruct FConcertReplication_LeaveEvent ************************************
struct Z_Construct_UScriptStruct_FConcertReplication_LeaveEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Handshake_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_LeaveEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_LeaveEvent;
// ********** End ScriptStruct FConcertReplication_LeaveEvent **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Handshake_h

// ********** Begin Enum EJoinReplicationErrorCode *************************************************
#define FOREACH_ENUM_EJOINREPLICATIONERRORCODE(op) \
	op(EJoinReplicationErrorCode::Success) \
	op(EJoinReplicationErrorCode::NetworkError) \
	op(EJoinReplicationErrorCode::Cancelled) \
	op(EJoinReplicationErrorCode::AlreadyInProgress) \
	op(EJoinReplicationErrorCode::NotInAnyConcertSession) \
	op(EJoinReplicationErrorCode::AlreadyInSession) \
	op(EJoinReplicationErrorCode::InvalidClass) \
	op(EJoinReplicationErrorCode::DuplicateStreamId) \
	op(EJoinReplicationErrorCode::FailedToUnpackStream) \
	op(EJoinReplicationErrorCode::MaxPlusOne) \
	op(EJoinReplicationErrorCode::Max) 

enum class EJoinReplicationErrorCode : uint8;
template<> struct TIsUEnumClass<EJoinReplicationErrorCode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EJoinReplicationErrorCode>();
// ********** End Enum EJoinReplicationErrorCode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
