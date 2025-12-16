// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Submission/Remote/RemoteSubmissionMessages.h"

#ifdef MULTIUSERCLIENT_RemoteSubmissionMessages_generated_h
#error "RemoteSubmissionMessages.generated.h already included, missing '#pragma once' in RemoteSubmissionMessages.h"
#endif
#define MULTIUSERCLIENT_RemoteSubmissionMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMultiUser_ChangeRemote_Request ***********************************
struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_Request_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_Request_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


struct FMultiUser_ChangeRemote_Request;
// ********** End ScriptStruct FMultiUser_ChangeRemote_Request *************************************

// ********** Begin ScriptStruct FMultiUser_ChangeRemote_Response **********************************
struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_Response_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_Response_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


struct FMultiUser_ChangeRemote_Response;
// ********** End ScriptStruct FMultiUser_ChangeRemote_Response ************************************

// ********** Begin ScriptStruct FMultiUser_ChangeRemote_StreamUpdatedEvent ************************
struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_StreamUpdatedEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_StreamUpdatedEvent_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


struct FMultiUser_ChangeRemote_StreamUpdatedEvent;
// ********** End ScriptStruct FMultiUser_ChangeRemote_StreamUpdatedEvent **************************

// ********** Begin ScriptStruct FMultiUser_ChangeRemote_AuthorityUpdatedEvent *********************
struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_AuthorityUpdatedEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_AuthorityUpdatedEvent_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


struct FMultiUser_ChangeRemote_AuthorityUpdatedEvent;
// ********** End ScriptStruct FMultiUser_ChangeRemote_AuthorityUpdatedEvent ***********************

// ********** Begin ScriptStruct FMultiUser_ChangeRemote_Cancelled *********************************
struct Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_Cancelled_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUser_ChangeRemote_Cancelled_Statics; \
	MULTIUSERCLIENT_API static class UScriptStruct* StaticStruct();


struct FMultiUser_ChangeRemote_Cancelled;
// ********** End ScriptStruct FMultiUser_ChangeRemote_Cancelled ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Replication_Submission_Remote_RemoteSubmissionMessages_h

// ********** Begin Enum EMultiUserChangeRemoteRequestError ****************************************
#define FOREACH_ENUM_EMULTIUSERCHANGEREMOTEREQUESTERROR(op) \
	op(EMultiUserChangeRemoteRequestError::Accepted) \
	op(EMultiUserChangeRemoteRequestError::RejectedChange) \
	op(EMultiUserChangeRemoteRequestError::PredictedConflict) \
	op(EMultiUserChangeRemoteRequestError::OtherInProgress) 

enum class EMultiUserChangeRemoteRequestError : uint8;
template<> struct TIsUEnumClass<EMultiUserChangeRemoteRequestError> { enum { Value = true }; };
template<> MULTIUSERCLIENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiUserChangeRemoteRequestError>();
// ********** End Enum EMultiUserChangeRemoteRequestError ******************************************

// ********** Begin Enum EMultiUserCancelRemoteChangeReason ****************************************
#define FOREACH_ENUM_EMULTIUSERCANCELREMOTECHANGEREASON(op) \
	op(EMultiUserCancelRemoteChangeReason::FailedToCreate) \
	op(EMultiUserCancelRemoteChangeReason::PredictedConflict) 

enum class EMultiUserCancelRemoteChangeReason : uint8;
template<> struct TIsUEnumClass<EMultiUserCancelRemoteChangeReason> { enum { Value = true }; };
template<> MULTIUSERCLIENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiUserCancelRemoteChangeReason>();
// ********** End Enum EMultiUserCancelRemoteChangeReason ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
