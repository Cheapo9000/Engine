// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Data/ReplicationFrequencySettings.h"

#ifdef CONCERTSYNCCORE_ReplicationFrequencySettings_generated_h
#error "ReplicationFrequencySettings.generated.h already included, missing '#pragma once' in ReplicationFrequencySettings.h"
#endif
#define CONCERTSYNCCORE_ReplicationFrequencySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertObjectReplicationSettings *********************************
struct Z_Construct_UScriptStruct_FConcertObjectReplicationSettings_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Data_ReplicationFrequencySettings_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertObjectReplicationSettings_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertObjectReplicationSettings;
// ********** End ScriptStruct FConcertObjectReplicationSettings ***********************************

// ********** Begin ScriptStruct FConcertStreamFrequencySettings ***********************************
struct Z_Construct_UScriptStruct_FConcertStreamFrequencySettings_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Data_ReplicationFrequencySettings_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertStreamFrequencySettings_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertStreamFrequencySettings;
// ********** End ScriptStruct FConcertStreamFrequencySettings *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Data_ReplicationFrequencySettings_h

// ********** Begin Enum EConcertObjectReplicationMode *********************************************
#define FOREACH_ENUM_ECONCERTOBJECTREPLICATIONMODE(op) \
	op(EConcertObjectReplicationMode::SpecifiedRate) \
	op(EConcertObjectReplicationMode::Realtime) \
	op(EConcertObjectReplicationMode::Count) 

enum class EConcertObjectReplicationMode : uint8;
template<> struct TIsUEnumClass<EConcertObjectReplicationMode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertObjectReplicationMode>();
// ********** End Enum EConcertObjectReplicationMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
