// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraceMessages.h"

#ifdef CONCERTINSIGHTSCORE_TraceMessages_generated_h
#error "TraceMessages.generated.h already included, missing '#pragma once' in TraceMessages.h"
#endif
#define CONCERTINSIGHTSCORE_TraceMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertTrace_StartTraceArgs **************************************
struct Z_Construct_UScriptStruct_FConcertTrace_StartTraceArgs_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsCore_Source_ConcertInsightsCore_Public_TraceMessages_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertTrace_StartTraceArgs_Statics; \
	CONCERTINSIGHTSCORE_API static class UScriptStruct* StaticStruct();


struct FConcertTrace_StartTraceArgs;
// ********** End ScriptStruct FConcertTrace_StartTraceArgs ****************************************

// ********** Begin ScriptStruct FConcertTrace_StartSyncTrace_Request ******************************
struct Z_Construct_UScriptStruct_FConcertTrace_StartSyncTrace_Request_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsCore_Source_ConcertInsightsCore_Public_TraceMessages_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertTrace_StartSyncTrace_Request_Statics; \
	CONCERTINSIGHTSCORE_API static class UScriptStruct* StaticStruct();


struct FConcertTrace_StartSyncTrace_Request;
// ********** End ScriptStruct FConcertTrace_StartSyncTrace_Request ********************************

// ********** Begin ScriptStruct FConcertTrace_StartSyncTrace_Response *****************************
struct Z_Construct_UScriptStruct_FConcertTrace_StartSyncTrace_Response_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsCore_Source_ConcertInsightsCore_Public_TraceMessages_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertTrace_StartSyncTrace_Response_Statics; \
	CONCERTINSIGHTSCORE_API static class UScriptStruct* StaticStruct();


struct FConcertTrace_StartSyncTrace_Response;
// ********** End ScriptStruct FConcertTrace_StartSyncTrace_Response *******************************

// ********** Begin ScriptStruct FConcertTrace_StopSyncTrace ***************************************
struct Z_Construct_UScriptStruct_FConcertTrace_StopSyncTrace_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsCore_Source_ConcertInsightsCore_Public_TraceMessages_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertTrace_StopSyncTrace_Statics; \
	CONCERTINSIGHTSCORE_API static class UScriptStruct* StaticStruct();


struct FConcertTrace_StopSyncTrace;
// ********** End ScriptStruct FConcertTrace_StopSyncTrace *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsCore_Source_ConcertInsightsCore_Public_TraceMessages_h

// ********** Begin Enum EConcertTraceTargetType ***************************************************
#define FOREACH_ENUM_ECONCERTTRACETARGETTYPE(op) \
	op(EConcertTraceTargetType::Network) \
	op(EConcertTraceTargetType::File) 

enum class EConcertTraceTargetType : uint8;
template<> struct TIsUEnumClass<EConcertTraceTargetType> { enum { Value = true }; };
template<> CONCERTINSIGHTSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertTraceTargetType>();
// ********** End Enum EConcertTraceTargetType *****************************************************

// ********** Begin Enum EConcertTraceErrorCode ****************************************************
#define FOREACH_ENUM_ECONCERTTRACEERRORCODE(op) \
	op(EConcertTraceErrorCode::Timeout) \
	op(EConcertTraceErrorCode::Joined) \
	op(EConcertTraceErrorCode::Rejected) 

enum class EConcertTraceErrorCode : uint8;
template<> struct TIsUEnumClass<EConcertTraceErrorCode> { enum { Value = true }; };
template<> CONCERTINSIGHTSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertTraceErrorCode>();
// ********** End Enum EConcertTraceErrorCode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
