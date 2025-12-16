// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertTransactionEvents.h"

#ifdef CONCERTSYNCCORE_ConcertTransactionEvents_generated_h
#error "ConcertTransactionEvents.generated.h already included, missing '#pragma once' in ConcertTransactionEvents.h"
#endif
#define CONCERTSYNCCORE_ConcertTransactionEvents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertObjectId **************************************************
struct Z_Construct_UScriptStruct_FConcertObjectId_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertObjectId_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertObjectId;
// ********** End ScriptStruct FConcertObjectId ****************************************************

// ********** Begin ScriptStruct FConcertSerializedObjectData **************************************
struct Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertSerializedObjectData;
// ********** End ScriptStruct FConcertSerializedObjectData ****************************************

// ********** Begin ScriptStruct FConcertSerializedPropertyData ************************************
struct Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertSerializedPropertyData;
// ********** End ScriptStruct FConcertSerializedPropertyData **************************************

// ********** Begin ScriptStruct FConcertExportedObject ********************************************
struct Z_Construct_UScriptStruct_FConcertExportedObject_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_153_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertExportedObject_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertExportedObject;
// ********** End ScriptStruct FConcertExportedObject **********************************************

// ********** Begin ScriptStruct FConcertTransactionEventBase **************************************
struct Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_177_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertTransactionEventBase;
// ********** End ScriptStruct FConcertTransactionEventBase ****************************************

// ********** Begin ScriptStruct FConcertTransactionFinalizedEvent *********************************
struct Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_207_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertTransactionEventBase Super;


struct FConcertTransactionFinalizedEvent;
// ********** End ScriptStruct FConcertTransactionFinalizedEvent ***********************************

// ********** Begin ScriptStruct FConcertTransactionSnapshotEvent **********************************
struct Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_219_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertTransactionEventBase Super;


struct FConcertTransactionSnapshotEvent;
// ********** End ScriptStruct FConcertTransactionSnapshotEvent ************************************

// ********** Begin ScriptStruct FConcertTransactionRejectedEvent **********************************
struct Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertTransactionRejectedEvent;
// ********** End ScriptStruct FConcertTransactionRejectedEvent ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h

// ********** Begin Enum ETransactionFilterResult **************************************************
#define FOREACH_ENUM_ETRANSACTIONFILTERRESULT(op) \
	op(ETransactionFilterResult::IncludeObject) \
	op(ETransactionFilterResult::ExcludeObject) \
	op(ETransactionFilterResult::ExcludeTransaction) \
	op(ETransactionFilterResult::UseDefault) 

enum class ETransactionFilterResult : uint8;
template<> struct TIsUEnumClass<ETransactionFilterResult> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransactionFilterResult>();
// ********** End Enum ETransactionFilterResult ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
