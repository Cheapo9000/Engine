// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosCollisionEventFilter.h"

#ifdef GEOMETRYCOLLECTIONENGINE_ChaosCollisionEventFilter_generated_h
#error "ChaosCollisionEventFilter.generated.h already included, missing '#pragma once' in ChaosCollisionEventFilter.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosCollisionEventFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosCollisionEventData ******************************************
struct Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosCollisionEventData;
// ********** End ScriptStruct FChaosCollisionEventData ********************************************

// ********** Begin ScriptStruct FChaosCollisionEventRequestSettings *******************************
struct Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosCollisionEventRequestSettings;
// ********** End ScriptStruct FChaosCollisionEventRequestSettings *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h

// ********** Begin Enum EChaosCollisionSortMethod *************************************************
#define FOREACH_ENUM_ECHAOSCOLLISIONSORTMETHOD(op) \
	op(EChaosCollisionSortMethod::SortNone) \
	op(EChaosCollisionSortMethod::SortByHighestMass) \
	op(EChaosCollisionSortMethod::SortByHighestSpeed) \
	op(EChaosCollisionSortMethod::SortByHighestImpulse) \
	op(EChaosCollisionSortMethod::SortByNearestFirst) \
	op(EChaosCollisionSortMethod::Count) 

enum class EChaosCollisionSortMethod : uint8;
template<> struct TIsUEnumClass<EChaosCollisionSortMethod> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosCollisionSortMethod>();
// ********** End Enum EChaosCollisionSortMethod ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
