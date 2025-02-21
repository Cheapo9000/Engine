// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Async/ChangeClientBlueprintParams.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIUSERCLIENTLIBRARY_ChangeClientBlueprintParams_generated_h
#error "ChangeClientBlueprintParams.generated.h already included, missing '#pragma once' in ChangeClientBlueprintParams.h"
#endif
#define MULTIUSERCLIENTLIBRARY_ChangeClientBlueprintParams_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserPropertyChange_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserPropertyChange>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserObjectReplicationSettings_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserObjectReplicationSettings>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserFrequencyChangeRequest_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserFrequencyChangeRequest>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserChangeStreamRequest_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserChangeStreamRequest>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserChangeAuthorityRequest_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserChangeAuthorityRequest>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_203_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserChangeClientReplicationRequest_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserChangeClientReplicationRequest>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_236_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChangeClientStreamFrequencyResponse_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FChangeClientStreamFrequencyResponse>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserChangeClientStreamResponse_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserChangeClientStreamResponse>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_301_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserChangeClientAuthorityResponse_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserChangeClientAuthorityResponse>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h_316_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserChangeClientReplicationResult_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserChangeClientReplicationResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientBlueprintParams_h


#define FOREACH_ENUM_EMULTIUSERCHANGESTREAMOPERATIONRESULT(op) \
	op(EMultiUserChangeStreamOperationResult::Success) \
	op(EMultiUserChangeStreamOperationResult::NoChanges) \
	op(EMultiUserChangeStreamOperationResult::Rejected) \
	op(EMultiUserChangeStreamOperationResult::Timeout) \
	op(EMultiUserChangeStreamOperationResult::Cancelled) \
	op(EMultiUserChangeStreamOperationResult::FailedToSendRequest) \
	op(EMultiUserChangeStreamOperationResult::NotInSession) \
	op(EMultiUserChangeStreamOperationResult::UnknownClient) \
	op(EMultiUserChangeStreamOperationResult::NotOnGameThread) \
	op(EMultiUserChangeStreamOperationResult::NotAvailable) 

enum class EMultiUserChangeStreamOperationResult : uint8;
template<> struct TIsUEnumClass<EMultiUserChangeStreamOperationResult> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserChangeStreamOperationResult>();

#define FOREACH_ENUM_EMULTIUSERCHANGEAUTHORITYOPERATIONRESULT(op) \
	op(EMultiUserChangeAuthorityOperationResult::Success) \
	op(EMultiUserChangeAuthorityOperationResult::NoChanges) \
	op(EMultiUserChangeAuthorityOperationResult::RejectedFullyOrPartially) \
	op(EMultiUserChangeAuthorityOperationResult::Timeout) \
	op(EMultiUserChangeAuthorityOperationResult::CancelledDueToStreamUpdate) \
	op(EMultiUserChangeAuthorityOperationResult::Cancelled) \
	op(EMultiUserChangeAuthorityOperationResult::FailedToSendRequest) \
	op(EMultiUserChangeAuthorityOperationResult::NotInSession) \
	op(EMultiUserChangeAuthorityOperationResult::UnknownClient) \
	op(EMultiUserChangeAuthorityOperationResult::NotOnGameThread) \
	op(EMultiUserChangeAuthorityOperationResult::NotAvailable) 

enum class EMultiUserChangeAuthorityOperationResult : uint8;
template<> struct TIsUEnumClass<EMultiUserChangeAuthorityOperationResult> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserChangeAuthorityOperationResult>();

#define FOREACH_ENUM_EMULTIUSERPROPERTYCHANGETYPE(op) \
	op(EMultiUserPropertyChangeType::Put) \
	op(EMultiUserPropertyChangeType::Add) \
	op(EMultiUserPropertyChangeType::Remove) 

enum class EMultiUserPropertyChangeType : uint8;
template<> struct TIsUEnumClass<EMultiUserPropertyChangeType> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserPropertyChangeType>();

#define FOREACH_ENUM_EMULTIUSEROBJECTREPLICATIONMODE(op) \
	op(EMultiUserObjectReplicationMode::SpecifiedRate) \
	op(EMultiUserObjectReplicationMode::Realtime) 

enum class EMultiUserObjectReplicationMode : uint8;
template<> struct TIsUEnumClass<EMultiUserObjectReplicationMode> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserObjectReplicationMode>();

#define FOREACH_ENUM_EMULTIUSERCHANGEFREQUENCYERRORCODE(op) \
	op(EMultiUserChangeFrequencyErrorCode::UnregisteredStream) \
	op(EMultiUserChangeFrequencyErrorCode::InvalidReplicationRate) \
	op(EMultiUserChangeFrequencyErrorCode::Count) 

enum class EMultiUserChangeFrequencyErrorCode : uint8;
template<> struct TIsUEnumClass<EMultiUserChangeFrequencyErrorCode> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserChangeFrequencyErrorCode>();

#define FOREACH_ENUM_EMULTIUSERPUTOBJECTERRORCODE(op) \
	op(EMultiUserPutObjectErrorCode::UnresolvedStream) \
	op(EMultiUserPutObjectErrorCode::MissingData) \
	op(EMultiUserPutObjectErrorCode::Count) 

enum class EMultiUserPutObjectErrorCode : uint8;
template<> struct TIsUEnumClass<EMultiUserPutObjectErrorCode> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserPutObjectErrorCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
