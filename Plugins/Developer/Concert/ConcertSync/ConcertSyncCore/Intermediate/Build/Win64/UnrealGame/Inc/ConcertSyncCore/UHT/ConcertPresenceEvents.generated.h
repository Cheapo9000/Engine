// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertPresenceEvents.h"

#ifdef CONCERTSYNCCORE_ConcertPresenceEvents_generated_h
#error "ConcertPresenceEvents.generated.h already included, missing '#pragma once' in ConcertPresenceEvents.h"
#endif
#define CONCERTSYNCCORE_ConcertPresenceEvents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertClientPresenceEventBase ***********************************
struct Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_10_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertClientPresenceEventBase;
// ********** End ScriptStruct FConcertClientPresenceEventBase *************************************

// ********** Begin ScriptStruct FConcertClientPresenceVisibilityUpdateEvent ***********************
struct Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertClientPresenceVisibilityUpdateEvent;
// ********** End ScriptStruct FConcertClientPresenceVisibilityUpdateEvent *************************

// ********** Begin ScriptStruct FConcertClientPresenceInVREvent ***********************************
struct Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertClientPresenceInVREvent;
// ********** End ScriptStruct FConcertClientPresenceInVREvent *************************************

// ********** Begin ScriptStruct FConcertClientPresenceDataUpdateEvent *****************************
struct Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertClientPresenceEventBase Super;


struct FConcertClientPresenceDataUpdateEvent;
// ********** End ScriptStruct FConcertClientPresenceDataUpdateEvent *******************************

// ********** Begin ScriptStruct FConcertClientDesktopPresenceUpdateEvent **************************
struct Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertClientPresenceEventBase Super;


struct FConcertClientDesktopPresenceUpdateEvent;
// ********** End ScriptStruct FConcertClientDesktopPresenceUpdateEvent ****************************

// ********** Begin ScriptStruct FConcertLaserData *************************************************
struct Z_Construct_UScriptStruct_FConcertLaserData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertLaserData_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertLaserData;
// ********** End ScriptStruct FConcertLaserData ***************************************************

// ********** Begin ScriptStruct FConcertClientVRPresenceUpdateEvent *******************************
struct Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertClientPresenceEventBase Super;


struct FConcertClientVRPresenceUpdateEvent;
// ********** End ScriptStruct FConcertClientVRPresenceUpdateEvent *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h

// ********** Begin Enum EPresenceModeType *********************************************************
#define FOREACH_ENUM_EPRESENCEMODETYPE(op) \
	op(EPresenceModeType::Desktop) \
	op(EPresenceModeType::VRMode) 

enum class EPresenceModeType;
template<> struct TIsUEnumClass<EPresenceModeType> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPresenceModeType>();
// ********** End Enum EPresenceModeType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
