// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StormSyncTransportMessages.h"

#ifdef STORMSYNCTRANSPORTCORE_StormSyncTransportMessages_generated_h
#error "StormSyncTransportMessages.generated.h already included, missing '#pragma once' in StormSyncTransportMessages.h"
#endif
#define STORMSYNCTRANSPORTCORE_StormSyncTransportMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStormSyncTransportHeartbeatMessage *******************************
struct Z_Construct_UScriptStruct_FStormSyncTransportHeartbeatMessage_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportHeartbeatMessage_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncTransportHeartbeatMessage;
// ********** End ScriptStruct FStormSyncTransportHeartbeatMessage *********************************

// ********** Begin ScriptStruct FStormSyncConnectionInfo ******************************************
struct Z_Construct_UScriptStruct_FStormSyncConnectionInfo_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncConnectionInfo_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncConnectionInfo;
// ********** End ScriptStruct FStormSyncConnectionInfo ********************************************

// ********** Begin ScriptStruct FStormSyncTransportConnectMessage *********************************
struct Z_Construct_UScriptStruct_FStormSyncTransportConnectMessage_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportConnectMessage_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FStormSyncConnectionInfo Super;


struct FStormSyncTransportConnectMessage;
// ********** End ScriptStruct FStormSyncTransportConnectMessage ***********************************

// ********** Begin ScriptStruct FStormSyncTransportWakeupRequest **********************************
struct Z_Construct_UScriptStruct_FStormSyncTransportWakeupRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportWakeupRequest_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncTransportWakeupRequest;
// ********** End ScriptStruct FStormSyncTransportWakeupRequest ************************************

// ********** Begin ScriptStruct FStormSyncTransportSyncRequest ************************************
struct Z_Construct_UScriptStruct_FStormSyncTransportSyncRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportSyncRequest_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncTransportSyncRequest;
// ********** End ScriptStruct FStormSyncTransportSyncRequest **************************************

// ********** Begin ScriptStruct FStormSyncTransportPushRequest ************************************
struct Z_Construct_UScriptStruct_FStormSyncTransportPushRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportPushRequest_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FStormSyncTransportSyncRequest Super;


struct FStormSyncTransportPushRequest;
// ********** End ScriptStruct FStormSyncTransportPushRequest **************************************

// ********** Begin ScriptStruct FStormSyncTransportPullRequest ************************************
struct Z_Construct_UScriptStruct_FStormSyncTransportPullRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_167_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportPullRequest_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FStormSyncTransportSyncRequest Super;


struct FStormSyncTransportPullRequest;
// ********** End ScriptStruct FStormSyncTransportPullRequest **************************************

// ********** Begin ScriptStruct FStormSyncTransportSyncResponse ***********************************
struct Z_Construct_UScriptStruct_FStormSyncTransportSyncResponse_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_221_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportSyncResponse_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FStormSyncTransportSyncRequest Super;


struct FStormSyncTransportSyncResponse;
// ********** End ScriptStruct FStormSyncTransportSyncResponse *************************************

// ********** Begin ScriptStruct FStormSyncTransportPushResponse ***********************************
struct Z_Construct_UScriptStruct_FStormSyncTransportPushResponse_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_279_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportPushResponse_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FStormSyncTransportSyncResponse Super;


struct FStormSyncTransportPushResponse;
// ********** End ScriptStruct FStormSyncTransportPushResponse *************************************

// ********** Begin ScriptStruct FStormSyncTransportPullResponse ***********************************
struct Z_Construct_UScriptStruct_FStormSyncTransportPullResponse_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_296_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportPullResponse_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FStormSyncTransportSyncResponse Super;


struct FStormSyncTransportPullResponse;
// ********** End ScriptStruct FStormSyncTransportPullResponse *************************************

// ********** Begin ScriptStruct FStormSyncTransportStatusRequest **********************************
struct Z_Construct_UScriptStruct_FStormSyncTransportStatusRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_312_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportStatusRequest_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncTransportStatusRequest;
// ********** End ScriptStruct FStormSyncTransportStatusRequest ************************************

// ********** Begin ScriptStruct FStormSyncTransportStatusResponse *********************************
struct Z_Construct_UScriptStruct_FStormSyncTransportStatusResponse_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_344_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportStatusResponse_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncTransportStatusResponse;
// ********** End ScriptStruct FStormSyncTransportStatusResponse ***********************************

// ********** Begin ScriptStruct FStormSyncTransportStatusPing *************************************
struct Z_Construct_UScriptStruct_FStormSyncTransportStatusPing_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_378_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportStatusPing_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncTransportStatusPing;
// ********** End ScriptStruct FStormSyncTransportStatusPing ***************************************

// ********** Begin ScriptStruct FStormSyncTransportStatusPong *************************************
struct Z_Construct_UScriptStruct_FStormSyncTransportStatusPong_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_384_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportStatusPong_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncTransportStatusPong;
// ********** End ScriptStruct FStormSyncTransportStatusPong ***************************************

// ********** Begin ScriptStruct FStormSyncTransportPingMessage ************************************
struct Z_Construct_UScriptStruct_FStormSyncTransportPingMessage_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_391_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportPingMessage_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncTransportPingMessage;
// ********** End ScriptStruct FStormSyncTransportPingMessage **************************************

// ********** Begin ScriptStruct FStormSyncTransportPongMessage ************************************
struct Z_Construct_UScriptStruct_FStormSyncTransportPongMessage_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h_427_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncTransportPongMessage_Statics; \
	STORMSYNCTRANSPORTCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FStormSyncTransportPingMessage Super;


struct FStormSyncTransportPongMessage;
// ********** End ScriptStruct FStormSyncTransportPongMessage **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportMessages_h

// ********** Begin Enum EStormSyncResponseResult **************************************************
#define FOREACH_ENUM_ESTORMSYNCRESPONSERESULT(op) \
	op(EStormSyncResponseResult::Error) \
	op(EStormSyncResponseResult::Success) \
	op(EStormSyncResponseResult::Unknown) 

enum class EStormSyncResponseResult : uint8;
template<> struct TIsUEnumClass<EStormSyncResponseResult> { enum { Value = true }; };
template<> STORMSYNCTRANSPORTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStormSyncResponseResult>();
// ********** End Enum EStormSyncResponseResult ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
