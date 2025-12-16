// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/ChangeClientEvent.h"

#ifdef CONCERTSYNCCORE_ChangeClientEvent_generated_h
#error "ChangeClientEvent.generated.h already included, missing '#pragma once' in ChangeClientEvent.h"
#endif
#define CONCERTSYNCCORE_ChangeClientEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertReplication_ClientChangeData ******************************
struct Z_Construct_UScriptStruct_FConcertReplication_ClientChangeData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ChangeClientEvent_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_ClientChangeData_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_ClientChangeData;
// ********** End ScriptStruct FConcertReplication_ClientChangeData ********************************

// ********** Begin ScriptStruct FConcertReplication_ChangeClientEvent *****************************
struct Z_Construct_UScriptStruct_FConcertReplication_ChangeClientEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ChangeClientEvent_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertReplication_ChangeClientEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertReplication_ChangeClientEvent;
// ********** End ScriptStruct FConcertReplication_ChangeClientEvent *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ChangeClientEvent_h

// ********** Begin Enum EConcertReplicationChangeClientReason *************************************
#define FOREACH_ENUM_ECONCERTREPLICATIONCHANGECLIENTREASON(op) \
	op(EConcertReplicationChangeClientReason::Unknown) \
	op(EConcertReplicationChangeClientReason::PutRequest) 

enum class EConcertReplicationChangeClientReason : uint8;
template<> struct TIsUEnumClass<EConcertReplicationChangeClientReason> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertReplicationChangeClientReason>();
// ********** End Enum EConcertReplicationChangeClientReason ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
