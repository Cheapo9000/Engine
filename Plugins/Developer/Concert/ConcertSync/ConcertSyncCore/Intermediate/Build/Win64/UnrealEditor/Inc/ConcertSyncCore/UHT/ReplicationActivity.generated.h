// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/ReplicationActivity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ReplicationActivity_generated_h
#error "ReplicationActivity.generated.h already included, missing '#pragma once' in ReplicationActivity.h"
#endif
#define CONCERTSYNCCORE_ReplicationActivity_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSyncReplicationPayload_LeaveReplication_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSyncReplicationPayload_LeaveReplication>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSyncReplicationSummary_LeaveReplication_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSyncReplicationSummary_LeaveReplication>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSyncReplicationPayload_Mute_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSyncReplicationPayload_Mute>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSyncReplicationSummary_Mute_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSyncReplicationSummary_Mute>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSyncReplicationEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSyncReplicationEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSyncReplicationActivity_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertSyncActivity Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSyncReplicationActivity>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSyncReplicationActivitySummary_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConcertSyncActivitySummary Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSyncReplicationActivitySummary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h


#define FOREACH_ENUM_ECONCERTSYNCREPLICATIONACTIVITYTYPE(op) \
	op(EConcertSyncReplicationActivityType::None) \
	op(EConcertSyncReplicationActivityType::LeaveReplication) \
	op(EConcertSyncReplicationActivityType::Mute) \
	op(EConcertSyncReplicationActivityType::Count) 

enum class EConcertSyncReplicationActivityType : uint8;
template<> struct TIsUEnumClass<EConcertSyncReplicationActivityType> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertSyncReplicationActivityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
