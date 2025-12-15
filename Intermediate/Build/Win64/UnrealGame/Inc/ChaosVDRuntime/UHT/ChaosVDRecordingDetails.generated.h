// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDRecordingDetails.h"

#ifdef CHAOSVDRUNTIME_ChaosVDRecordingDetails_generated_h
#error "ChaosVDRecordingDetails.generated.h already included, missing '#pragma once' in ChaosVDRecordingDetails.h"
#endif
#define CHAOSVDRUNTIME_ChaosVDRecordingDetails_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosVDStartRecordingCommandMessage ******************************
struct Z_Construct_UScriptStruct_FChaosVDStartRecordingCommandMessage_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_ChaosVDRecordingDetails_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDStartRecordingCommandMessage_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct();


struct FChaosVDStartRecordingCommandMessage;
// ********** End ScriptStruct FChaosVDStartRecordingCommandMessage ********************************

// ********** Begin ScriptStruct FChaosVDTraceDetails **********************************************
struct Z_Construct_UScriptStruct_FChaosVDTraceDetails_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_ChaosVDRecordingDetails_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDTraceDetails_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct();


struct FChaosVDTraceDetails;
// ********** End ScriptStruct FChaosVDTraceDetails ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_ChaosVDRecordingDetails_h

// ********** Begin Enum EChaosVDRecordingMode *****************************************************
#define FOREACH_ENUM_ECHAOSVDRECORDINGMODE(op) \
	op(EChaosVDRecordingMode::Invalid) \
	op(EChaosVDRecordingMode::Live) \
	op(EChaosVDRecordingMode::File) 

enum class EChaosVDRecordingMode : uint8;
template<> struct TIsUEnumClass<EChaosVDRecordingMode> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDRecordingMode>();
// ********** End Enum EChaosVDRecordingMode *******************************************************

// ********** Begin Enum EChaosVDTransportMode *****************************************************
#define FOREACH_ENUM_ECHAOSVDTRANSPORTMODE(op) \
	op(EChaosVDTransportMode::Invalid) \
	op(EChaosVDTransportMode::FileSystem) \
	op(EChaosVDTransportMode::TraceServer) \
	op(EChaosVDTransportMode::Direct) \
	op(EChaosVDTransportMode::Relay) 

enum class EChaosVDTransportMode : uint8;
template<> struct TIsUEnumClass<EChaosVDTransportMode> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDTransportMode>();
// ********** End Enum EChaosVDTransportMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
