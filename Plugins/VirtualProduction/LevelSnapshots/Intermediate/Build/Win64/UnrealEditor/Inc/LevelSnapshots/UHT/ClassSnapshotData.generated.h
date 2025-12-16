// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ClassSnapshotData.h"

#ifdef LEVELSNAPSHOTS_ClassSnapshotData_generated_h
#error "ClassSnapshotData.generated.h already included, missing '#pragma once' in ClassSnapshotData.h"
#endif
#define LEVELSNAPSHOTS_ClassSnapshotData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FClassSnapshotData ************************************************
struct Z_Construct_UScriptStruct_FClassSnapshotData_Statics;
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClassSnapshotData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FObjectSnapshotData Super;


struct FClassSnapshotData;
// ********** End ScriptStruct FClassSnapshotData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h

// ********** Begin Enum ESnapshotClassFlags *******************************************************
#define FOREACH_ENUM_ESNAPSHOTCLASSFLAGS(op) \
	op(ESnapshotClassFlags::NoFlags) \
	op(ESnapshotClassFlags::SerializationSkippedArchetypeData) 

enum class ESnapshotClassFlags : uint8;
template<> struct TIsUEnumClass<ESnapshotClassFlags> { enum { Value = true }; };
template<> LEVELSNAPSHOTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESnapshotClassFlags>();
// ********** End Enum ESnapshotClassFlags *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
