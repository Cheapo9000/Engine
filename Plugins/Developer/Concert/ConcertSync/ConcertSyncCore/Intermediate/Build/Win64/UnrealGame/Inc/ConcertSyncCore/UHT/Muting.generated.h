// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/Muting.h"

#ifdef CONCERTSYNCCORE_Muting_generated_h
#error "Muting.generated.h already included, missing '#pragma once' in Muting.h"
#endif
#define CONCERTSYNCCORE_Muting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertReplication_ObjectMuteSetting *****************************
struct Z_Construct_UScriptStruct_FConcertReplication_ObjectMuteSetting_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Muting_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_ObjectMuteSetting_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_ObjectMuteSetting;
// ********** End ScriptStruct FConcertReplication_ObjectMuteSetting *******************************

// ********** Begin ScriptStruct FConcertReplication_ChangeMuteState_Request ***********************
struct Z_Construct_UScriptStruct_FConcertReplication_ChangeMuteState_Request_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Muting_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_ChangeMuteState_Request_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_ChangeMuteState_Request;
// ********** End ScriptStruct FConcertReplication_ChangeMuteState_Request *************************

// ********** Begin ScriptStruct FConcertReplication_ChangeMuteState_Response **********************
struct Z_Construct_UScriptStruct_FConcertReplication_ChangeMuteState_Response_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Muting_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_ChangeMuteState_Response_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_ChangeMuteState_Response;
// ********** End ScriptStruct FConcertReplication_ChangeMuteState_Response ************************

// ********** Begin ScriptStruct FConcertReplication_QueryMuteState_Request ************************
struct Z_Construct_UScriptStruct_FConcertReplication_QueryMuteState_Request_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Muting_h_159_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_QueryMuteState_Request_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_QueryMuteState_Request;
// ********** End ScriptStruct FConcertReplication_QueryMuteState_Request **************************

// ********** Begin ScriptStruct FConcertReplication_QueryMuteState_Response ***********************
struct Z_Construct_UScriptStruct_FConcertReplication_QueryMuteState_Response_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Muting_h_171_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_QueryMuteState_Response_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_QueryMuteState_Response;
// ********** End ScriptStruct FConcertReplication_QueryMuteState_Response *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_Muting_h

// ********** Begin Enum EConcertReplicationMuteOption *********************************************
#define FOREACH_ENUM_ECONCERTREPLICATIONMUTEOPTION(op) \
	op(EConcertReplicationMuteOption::OnlyObject) \
	op(EConcertReplicationMuteOption::ObjectAndSubobjects) 

enum class EConcertReplicationMuteOption : uint8;
template<> struct TIsUEnumClass<EConcertReplicationMuteOption> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertReplicationMuteOption>();
// ********** End Enum EConcertReplicationMuteOption ***********************************************

// ********** Begin Enum EConcertReplicationMuteRequestFlags ***************************************
#define FOREACH_ENUM_ECONCERTREPLICATIONMUTEREQUESTFLAGS(op) \
	op(EConcertReplicationMuteRequestFlags::None) \
	op(EConcertReplicationMuteRequestFlags::ClearMuteState) 

enum class EConcertReplicationMuteRequestFlags : uint8;
template<> struct TIsUEnumClass<EConcertReplicationMuteRequestFlags> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertReplicationMuteRequestFlags>();
// ********** End Enum EConcertReplicationMuteRequestFlags *****************************************

// ********** Begin Enum EConcertReplicationMuteErrorCode ******************************************
#define FOREACH_ENUM_ECONCERTREPLICATIONMUTEERRORCODE(op) \
	op(EConcertReplicationMuteErrorCode::Timeout) \
	op(EConcertReplicationMuteErrorCode::Accepted) \
	op(EConcertReplicationMuteErrorCode::Rejected) 

enum class EConcertReplicationMuteErrorCode : uint8;
template<> struct TIsUEnumClass<EConcertReplicationMuteErrorCode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertReplicationMuteErrorCode>();
// ********** End Enum EConcertReplicationMuteErrorCode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
