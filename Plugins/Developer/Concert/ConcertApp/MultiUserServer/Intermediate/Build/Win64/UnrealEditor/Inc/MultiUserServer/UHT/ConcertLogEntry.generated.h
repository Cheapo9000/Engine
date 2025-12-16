// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Clients/Logging/ConcertLogEntry.h"

#ifdef MULTIUSERSERVER_ConcertLogEntry_generated_h
#error "ConcertLogEntry.generated.h already included, missing '#pragma once' in ConcertLogEntry.h"
#endif
#define MULTIUSERSERVER_ConcertLogEntry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertLogMetadata ***********************************************
struct Z_Construct_UScriptStruct_FConcertLogMetadata_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertLogMetadata_Statics; \
	MULTIUSERSERVER_API static class UScriptStruct* StaticStruct();


struct FConcertLogMetadata;
// ********** End ScriptStruct FConcertLogMetadata *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h

// ********** Begin Enum EConcertLogAckState *******************************************************
#define FOREACH_ENUM_ECONCERTLOGACKSTATE(op) \
	op(EConcertLogAckState::NotNeeded) \
	op(EConcertLogAckState::Ack) \
	op(EConcertLogAckState::InProgress) \
	op(EConcertLogAckState::AckReceived) \
	op(EConcertLogAckState::AckFailure) 

enum class EConcertLogAckState : uint8;
template<> struct TIsUEnumClass<EConcertLogAckState> { enum { Value = true }; };
template<> MULTIUSERSERVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertLogAckState>();
// ********** End Enum EConcertLogAckState *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
