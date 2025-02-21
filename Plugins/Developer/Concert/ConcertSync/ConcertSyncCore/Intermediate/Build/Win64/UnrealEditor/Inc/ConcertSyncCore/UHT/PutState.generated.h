// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/PutState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_PutState_generated_h
#error "PutState.generated.h already included, missing '#pragma once' in PutState.h"
#endif
#define CONCERTSYNCCORE_PutState_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_PutState_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReplication_PutState_Request_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertReplication_PutState_Request>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_PutState_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReplication_PutState_Response_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertReplication_PutState_Response>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_PutState_h


#define FOREACH_ENUM_ECONCERTREPLICATIONPUTSTATEFLAGS(op) \
	op(EConcertReplicationPutStateFlags::None) \
	op(EConcertReplicationPutStateFlags::SkipDisconnectedClients) \
	op(EConcertReplicationPutStateFlags::Default) 

enum class EConcertReplicationPutStateFlags : uint8;
template<> struct TIsUEnumClass<EConcertReplicationPutStateFlags> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertReplicationPutStateFlags>();

#define FOREACH_ENUM_ECONCERTREPLICATIONPUTSTATERESPONSECODE(op) \
	op(EConcertReplicationPutStateResponseCode::Timeout) \
	op(EConcertReplicationPutStateResponseCode::Success) \
	op(EConcertReplicationPutStateResponseCode::FeatureDisabled) \
	op(EConcertReplicationPutStateResponseCode::ClientUnknown) \
	op(EConcertReplicationPutStateResponseCode::StreamError) \
	op(EConcertReplicationPutStateResponseCode::AuthorityConflict) \
	op(EConcertReplicationPutStateResponseCode::MuteError) 

enum class EConcertReplicationPutStateResponseCode : uint8;
template<> struct TIsUEnumClass<EConcertReplicationPutStateResponseCode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertReplicationPutStateResponseCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
