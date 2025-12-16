// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/ClientQuery.h"

#ifdef CONCERTSYNCCORE_ClientQuery_generated_h
#error "ClientQuery.generated.h already included, missing '#pragma once' in ClientQuery.h"
#endif
#define CONCERTSYNCCORE_ClientQuery_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertReplication_QueryReplicationInfo_Request ******************
struct Z_Construct_UScriptStruct_FConcertReplication_QueryReplicationInfo_Request_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ClientQuery_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_QueryReplicationInfo_Request_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_QueryReplicationInfo_Request;
// ********** End ScriptStruct FConcertReplication_QueryReplicationInfo_Request ********************

// ********** Begin ScriptStruct FConcertReplication_QueryReplicationInfo_Response *****************
struct Z_Construct_UScriptStruct_FConcertReplication_QueryReplicationInfo_Response_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ClientQuery_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_QueryReplicationInfo_Response_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_QueryReplicationInfo_Response;
// ********** End ScriptStruct FConcertReplication_QueryReplicationInfo_Response *******************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ClientQuery_h

// ********** Begin Enum EConcertQueryClientStreamFlags ********************************************
#define FOREACH_ENUM_ECONCERTQUERYCLIENTSTREAMFLAGS(op) \
	op(EConcertQueryClientStreamFlags::None) \
	op(EConcertQueryClientStreamFlags::SkipStreamInfo) \
	op(EConcertQueryClientStreamFlags::SkipProperties) \
	op(EConcertQueryClientStreamFlags::SkipAuthority) \
	op(EConcertQueryClientStreamFlags::SkipFrequency) 

enum class EConcertQueryClientStreamFlags : uint8;
template<> struct TIsUEnumClass<EConcertQueryClientStreamFlags> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertQueryClientStreamFlags>();
// ********** End Enum EConcertQueryClientStreamFlags **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
