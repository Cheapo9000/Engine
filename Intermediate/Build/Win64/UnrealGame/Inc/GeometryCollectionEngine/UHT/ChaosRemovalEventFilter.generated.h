// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosRemovalEventFilter.h"

#ifdef GEOMETRYCOLLECTIONENGINE_ChaosRemovalEventFilter_generated_h
#error "ChaosRemovalEventFilter.generated.h already included, missing '#pragma once' in ChaosRemovalEventFilter.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosRemovalEventFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosRemovalEventData ********************************************
struct Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosRemovalEventData;
// ********** End ScriptStruct FChaosRemovalEventData **********************************************

// ********** Begin ScriptStruct FChaosRemovalEventRequestSettings *********************************
struct Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosRemovalEventRequestSettings;
// ********** End ScriptStruct FChaosRemovalEventRequestSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h

// ********** Begin Enum EChaosRemovalSortMethod ***************************************************
#define FOREACH_ENUM_ECHAOSREMOVALSORTMETHOD(op) \
	op(EChaosRemovalSortMethod::SortNone) \
	op(EChaosRemovalSortMethod::SortByHighestMass) \
	op(EChaosRemovalSortMethod::SortByNearestFirst) \
	op(EChaosRemovalSortMethod::Count) 

enum class EChaosRemovalSortMethod : uint8;
template<> struct TIsUEnumClass<EChaosRemovalSortMethod> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosRemovalSortMethod>();
// ********** End Enum EChaosRemovalSortMethod *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
