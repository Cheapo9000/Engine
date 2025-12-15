// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkMessages.h"

#ifdef LIVELINKMESSAGEBUSFRAMEWORK_LiveLinkMessages_generated_h
#error "LiveLinkMessages.generated.h already included, missing '#pragma once' in LiveLinkMessages.h"
#endif
#define LIVELINKMESSAGEBUSFRAMEWORK_LiveLinkMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkPingMessage **********************************************
struct Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics;
#define FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics; \
	LIVELINKMESSAGEBUSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkPingMessage;
// ********** End ScriptStruct FLiveLinkPingMessage ************************************************

// ********** Begin ScriptStruct FLiveLinkPongMessage **********************************************
struct Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics;
#define FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics; \
	LIVELINKMESSAGEBUSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkPongMessage;
// ********** End ScriptStruct FLiveLinkPongMessage ************************************************

// ********** Begin ScriptStruct FLiveLinkConnectMessage *******************************************
struct Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics;
#define FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics; \
	LIVELINKMESSAGEBUSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkConnectMessage;
// ********** End ScriptStruct FLiveLinkConnectMessage *********************************************

// ********** Begin ScriptStruct FLiveLinkHeartbeatMessage *****************************************
struct Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics;
#define FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics; \
	LIVELINKMESSAGEBUSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHeartbeatMessage;
// ********** End ScriptStruct FLiveLinkHeartbeatMessage *******************************************

// ********** Begin ScriptStruct FLiveLinkClearSubject *********************************************
struct Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics;
#define FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics; \
	LIVELINKMESSAGEBUSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkClearSubject;
// ********** End ScriptStruct FLiveLinkClearSubject ***********************************************

// ********** Begin ScriptStruct FLiveLinkSubjectDataMessage ***************************************
struct Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics;
#define FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics; \
	LIVELINKMESSAGEBUSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkSubjectDataMessage;
// ********** End ScriptStruct FLiveLinkSubjectDataMessage *****************************************

// ********** Begin ScriptStruct FLiveLinkSubjectFrameMessage **************************************
struct Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics;
#define FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics; \
	LIVELINKMESSAGEBUSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkSubjectFrameMessage;
// ********** End ScriptStruct FLiveLinkSubjectFrameMessage ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h

// ********** Begin Enum ELiveLinkTopologyMode *****************************************************
#define FOREACH_ENUM_ELIVELINKTOPOLOGYMODE(op) \
	op(ELiveLinkTopologyMode::Hub) \
	op(ELiveLinkTopologyMode::Spoke) \
	op(ELiveLinkTopologyMode::UnrealClient) \
	op(ELiveLinkTopologyMode::External) 

enum class ELiveLinkTopologyMode : uint8;
template<> struct TIsUEnumClass<ELiveLinkTopologyMode> { enum { Value = true }; };
template<> LIVELINKMESSAGEBUSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkTopologyMode>();
// ********** End Enum ELiveLinkTopologyMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
