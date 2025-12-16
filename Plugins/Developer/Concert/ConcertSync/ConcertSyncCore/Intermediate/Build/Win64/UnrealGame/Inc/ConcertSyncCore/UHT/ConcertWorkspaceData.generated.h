// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertWorkspaceData.h"

#ifdef CONCERTSYNCCORE_ConcertWorkspaceData_generated_h
#error "ConcertWorkspaceData.generated.h already included, missing '#pragma once' in ConcertWorkspaceData.h"
#endif
#define CONCERTSYNCCORE_ConcertWorkspaceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertPackageInfo ***********************************************
struct Z_Construct_UScriptStruct_FConcertPackageInfo_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertPackageInfo_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertPackageInfo;
// ********** End ScriptStruct FConcertPackageInfo *************************************************

// ********** Begin ScriptStruct FConcertPackage ***************************************************
struct Z_Construct_UScriptStruct_FConcertPackage_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertPackage_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FConcertPackage;
// ********** End ScriptStruct FConcertPackage *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h

// ********** Begin Enum EConcertPackageUpdateType *************************************************
#define FOREACH_ENUM_ECONCERTPACKAGEUPDATETYPE(op) \
	op(EConcertPackageUpdateType::Dummy) \
	op(EConcertPackageUpdateType::Added) \
	op(EConcertPackageUpdateType::Saved) \
	op(EConcertPackageUpdateType::Renamed) \
	op(EConcertPackageUpdateType::Deleted) \
	op(EConcertPackageUpdateType::Count) 

enum class EConcertPackageUpdateType : uint8;
template<> struct TIsUEnumClass<EConcertPackageUpdateType> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertPackageUpdateType>();
// ********** End Enum EConcertPackageUpdateType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
