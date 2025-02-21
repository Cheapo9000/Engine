// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/RestoreContent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_RestoreContent_generated_h
#error "RestoreContent.generated.h already included, missing '#pragma once' in RestoreContent.h"
#endif
#define CONCERTSYNCCORE_RestoreContent_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_RestoreContent_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReplication_RestoreContent_Request_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertReplication_RestoreContent_Request>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_RestoreContent_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReplication_RestoreContent_Response_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertReplication_RestoreContent_Response>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_RestoreContent_h


#define FOREACH_ENUM_ECONCERTREPLICATIONRESTORECONTENTFLAGS(op) \
	op(EConcertReplicationRestoreContentFlags::None) \
	op(EConcertReplicationRestoreContentFlags::RestoreOnTop) \
	op(EConcertReplicationRestoreContentFlags::ValidateUniqueClient) \
	op(EConcertReplicationRestoreContentFlags::RestoreAuthority) \
	op(EConcertReplicationRestoreContentFlags::SendNewState) \
	op(EConcertReplicationRestoreContentFlags::RestoreMute) \
	op(EConcertReplicationRestoreContentFlags::StreamsAndAuthority) \
	op(EConcertReplicationRestoreContentFlags::All) 

enum class EConcertReplicationRestoreContentFlags : uint8;
template<> struct TIsUEnumClass<EConcertReplicationRestoreContentFlags> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertReplicationRestoreContentFlags>();

#define FOREACH_ENUM_ECONCERTREPLICATIONAUTHORITYRESTOREMODE(op) \
	op(EConcertReplicationAuthorityRestoreMode::ExcludeAlreadyOwnedObjectPropertiesFromStream) \
	op(EConcertReplicationAuthorityRestoreMode::IncludeAlreadyOwnedObjectPropertiesInStream) \
	op(EConcertReplicationAuthorityRestoreMode::AllOrNothing) 

enum class EConcertReplicationAuthorityRestoreMode : uint8;
template<> struct TIsUEnumClass<EConcertReplicationAuthorityRestoreMode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertReplicationAuthorityRestoreMode>();

#define FOREACH_ENUM_ECONCERTREPLICATIONRESTOREERRORCODE(op) \
	op(EConcertReplicationRestoreErrorCode::Timeout) \
	op(EConcertReplicationRestoreErrorCode::Success) \
	op(EConcertReplicationRestoreErrorCode::Invalid) \
	op(EConcertReplicationRestoreErrorCode::NotSupported) \
	op(EConcertReplicationRestoreErrorCode::NoSuchActivity) \
	op(EConcertReplicationRestoreErrorCode::NameConflict) \
	op(EConcertReplicationRestoreErrorCode::AuthorityConflict) 

enum class EConcertReplicationRestoreErrorCode : uint8;
template<> struct TIsUEnumClass<EConcertReplicationRestoreErrorCode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertReplicationRestoreErrorCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
