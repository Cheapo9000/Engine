// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/ReplicationActivity.h"

#ifdef CONCERTSYNCCORE_ReplicationActivity_generated_h
#error "ReplicationActivity.generated.h already included, missing '#pragma once' in ReplicationActivity.h"
#endif
#define CONCERTSYNCCORE_ReplicationActivity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertSyncReplicationPayload_LeaveReplication *******************
struct Z_Construct_UScriptStruct_FConcertSyncReplicationPayload_LeaveReplication_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSyncReplicationPayload_LeaveReplication_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertSyncReplicationPayload_LeaveReplication;
// ********** End ScriptStruct FConcertSyncReplicationPayload_LeaveReplication *********************

// ********** Begin ScriptStruct FConcertSyncReplicationSummary_LeaveReplication *******************
struct Z_Construct_UScriptStruct_FConcertSyncReplicationSummary_LeaveReplication_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSyncReplicationSummary_LeaveReplication_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertSyncReplicationSummary_LeaveReplication;
// ********** End ScriptStruct FConcertSyncReplicationSummary_LeaveReplication *********************

// ********** Begin ScriptStruct FConcertSyncReplicationPayload_Mute *******************************
struct Z_Construct_UScriptStruct_FConcertSyncReplicationPayload_Mute_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSyncReplicationPayload_Mute_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertSyncReplicationPayload_Mute;
// ********** End ScriptStruct FConcertSyncReplicationPayload_Mute *********************************

// ********** Begin ScriptStruct FConcertSyncReplicationSummary_Mute *******************************
struct Z_Construct_UScriptStruct_FConcertSyncReplicationSummary_Mute_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSyncReplicationSummary_Mute_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertSyncReplicationSummary_Mute;
// ********** End ScriptStruct FConcertSyncReplicationSummary_Mute *********************************

// ********** Begin ScriptStruct FConcertSyncReplicationEvent **************************************
struct Z_Construct_UScriptStruct_FConcertSyncReplicationEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSyncReplicationEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertSyncReplicationEvent;
// ********** End ScriptStruct FConcertSyncReplicationEvent ****************************************

// ********** Begin ScriptStruct FConcertSyncReplicationActivity ***********************************
struct Z_Construct_UScriptStruct_FConcertSyncReplicationActivity_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_171_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSyncReplicationActivity_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertSyncActivity Super;


struct FConcertSyncReplicationActivity;
// ********** End ScriptStruct FConcertSyncReplicationActivity *************************************

// ********** Begin ScriptStruct FConcertSyncReplicationActivitySummary ****************************
struct Z_Construct_UScriptStruct_FConcertSyncReplicationActivitySummary_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h_194_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSyncReplicationActivitySummary_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertSyncActivitySummary Super;


struct FConcertSyncReplicationActivitySummary;
// ********** End ScriptStruct FConcertSyncReplicationActivitySummary ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ReplicationActivity_h

// ********** Begin Enum EConcertSyncReplicationActivityType ***************************************
#define FOREACH_ENUM_ECONCERTSYNCREPLICATIONACTIVITYTYPE(op) \
	op(EConcertSyncReplicationActivityType::None) \
	op(EConcertSyncReplicationActivityType::LeaveReplication) \
	op(EConcertSyncReplicationActivityType::Mute) \
	op(EConcertSyncReplicationActivityType::Count) 

enum class EConcertSyncReplicationActivityType : uint8;
template<> struct TIsUEnumClass<EConcertSyncReplicationActivityType> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertSyncReplicationActivityType>();
// ********** End Enum EConcertSyncReplicationActivityType *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
