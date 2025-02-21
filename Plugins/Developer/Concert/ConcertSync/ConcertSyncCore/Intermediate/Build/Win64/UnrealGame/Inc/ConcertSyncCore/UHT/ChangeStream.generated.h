// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/ChangeStream.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ChangeStream_generated_h
#error "ChangeStream.generated.h already included, missing '#pragma once' in ChangeStream.h"
#endif
#define CONCERTSYNCCORE_ChangeStream_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ChangeStream_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReplication_ChangeStream_PutObject_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertReplication_ChangeStream_PutObject>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ChangeStream_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReplication_ChangeStream_Frequency_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertReplication_ChangeStream_Frequency>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ChangeStream_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReplication_ChangeStream_Request_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertReplication_ChangeStream_Request>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ChangeStream_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReplication_ChangeStream_FrequencyResponse_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertReplication_ChangeStream_FrequencyResponse>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ChangeStream_h_269_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReplication_ChangeStream_Response_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertReplication_ChangeStream_Response>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_ChangeStream_h


#define FOREACH_ENUM_ECONCERTREPLICATIONCHANGEFREQUENCYFLAGS(op) \
	op(EConcertReplicationChangeFrequencyFlags::None) \
	op(EConcertReplicationChangeFrequencyFlags::SetDefaults) 

enum class EConcertReplicationChangeFrequencyFlags : uint8;
template<> struct TIsUEnumClass<EConcertReplicationChangeFrequencyFlags> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertReplicationChangeFrequencyFlags>();

#define FOREACH_ENUM_ECONCERTPUTOBJECTERRORCODE(op) \
	op(EConcertPutObjectErrorCode::UnresolvedStream) \
	op(EConcertPutObjectErrorCode::MissingData) \
	op(EConcertPutObjectErrorCode::Count) 

enum class EConcertPutObjectErrorCode : uint8;
template<> struct TIsUEnumClass<EConcertPutObjectErrorCode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertPutObjectErrorCode>();

#define FOREACH_ENUM_ECONCERTCHANGEOBJECTFREQUENCYERRORCODE(op) \
	op(EConcertChangeObjectFrequencyErrorCode::NotRegistered) \
	op(EConcertChangeObjectFrequencyErrorCode::InvalidReplicationRate) \
	op(EConcertChangeObjectFrequencyErrorCode::Count) 

enum class EConcertChangeObjectFrequencyErrorCode : uint8;
template<> struct TIsUEnumClass<EConcertChangeObjectFrequencyErrorCode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertChangeObjectFrequencyErrorCode>();

#define FOREACH_ENUM_ECONCERTCHANGESTREAMFREQUENCYERRORCODE(op) \
	op(EConcertChangeStreamFrequencyErrorCode::UnknownStream) \
	op(EConcertChangeStreamFrequencyErrorCode::InvalidReplicationRate) \
	op(EConcertChangeStreamFrequencyErrorCode::Count) 

enum class EConcertChangeStreamFrequencyErrorCode : uint8;
template<> struct TIsUEnumClass<EConcertChangeStreamFrequencyErrorCode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertChangeStreamFrequencyErrorCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
