// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosTrailingEventFilter.h"

#ifdef GEOMETRYCOLLECTIONENGINE_ChaosTrailingEventFilter_generated_h
#error "ChaosTrailingEventFilter.generated.h already included, missing '#pragma once' in ChaosTrailingEventFilter.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosTrailingEventFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosTrailingEventData *******************************************
struct Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosTrailingEventData;
// ********** End ScriptStruct FChaosTrailingEventData *********************************************

// ********** Begin ScriptStruct FChaosTrailingEventRequestSettings ********************************
struct Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosTrailingEventRequestSettings;
// ********** End ScriptStruct FChaosTrailingEventRequestSettings **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h

// ********** Begin Enum EChaosTrailingSortMethod **************************************************
#define FOREACH_ENUM_ECHAOSTRAILINGSORTMETHOD(op) \
	op(EChaosTrailingSortMethod::SortNone) \
	op(EChaosTrailingSortMethod::SortByHighestMass) \
	op(EChaosTrailingSortMethod::SortByHighestSpeed) \
	op(EChaosTrailingSortMethod::SortByNearestFirst) \
	op(EChaosTrailingSortMethod::Count) 

enum class EChaosTrailingSortMethod : uint8;
template<> struct TIsUEnumClass<EChaosTrailingSortMethod> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosTrailingSortMethod>();
// ********** End Enum EChaosTrailingSortMethod ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
