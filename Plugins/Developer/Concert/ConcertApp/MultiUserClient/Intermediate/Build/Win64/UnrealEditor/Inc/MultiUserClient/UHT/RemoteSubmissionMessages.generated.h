// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Submission/Remote/RemoteSubmissionMessages.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIUSERCLIENT_RemoteSubmissionMessages_generated_h
#error "RemoteSubmissionMessages.generated.h already included, missing '#pragma once' in RemoteSubmissionMessages.h"
#endif
#define MULTIUSERCLIENT_RemoteSubmissionMessages_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_Request_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENT_API UScriptStruct* StaticStruct<struct FMultiUser_ChangeRemote_Request>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_Response_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENT_API UScriptStruct* StaticStruct<struct FMultiUser_ChangeRemote_Response>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_StreamUpdatedEvent_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENT_API UScriptStruct* StaticStruct<struct FMultiUser_ChangeRemote_StreamUpdatedEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_AuthorityUpdatedEvent_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENT_API UScriptStruct* StaticStruct<struct FMultiUser_ChangeRemote_AuthorityUpdatedEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_Cancelled_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENT_API UScriptStruct* StaticStruct<struct FMultiUser_ChangeRemote_Cancelled>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h


#define FOREACH_ENUM_EMULTIUSERCHANGEREMOTEREQUESTERROR(op) \
	op(EMultiUserChangeRemoteRequestError::Accepted) \
	op(EMultiUserChangeRemoteRequestError::RejectedChange) \
	op(EMultiUserChangeRemoteRequestError::PredictedConflict) \
	op(EMultiUserChangeRemoteRequestError::OtherInProgress) 

enum class EMultiUserChangeRemoteRequestError : uint8;
template<> struct TIsUEnumClass<EMultiUserChangeRemoteRequestError> { enum { Value = true }; };
template<> MULTIUSERCLIENT_API UEnum* StaticEnum<EMultiUserChangeRemoteRequestError>();

#define FOREACH_ENUM_EMULTIUSERCANCELREMOTECHANGEREASON(op) \
	op(EMultiUserCancelRemoteChangeReason::FailedToCreate) \
	op(EMultiUserCancelRemoteChangeReason::PredictedConflict) 

enum class EMultiUserCancelRemoteChangeReason : uint8;
template<> struct TIsUEnumClass<EMultiUserCancelRemoteChangeReason> { enum { Value = true }; };
template<> MULTIUSERCLIENT_API UEnum* StaticEnum<EMultiUserCancelRemoteChangeReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
