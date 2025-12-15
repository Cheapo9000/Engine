// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralFoliageInstance.h"

#ifdef FOLIAGE_ProceduralFoliageInstance_generated_h
#error "ProceduralFoliageInstance.generated.h already included, missing '#pragma once' in ProceduralFoliageInstance.h"
#endif
#define FOLIAGE_ProceduralFoliageInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FProceduralFoliageInstance ****************************************
struct Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics;
#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics; \
	FOLIAGE_API static class UScriptStruct* StaticStruct();


struct FProceduralFoliageInstance;
// ********** End ScriptStruct FProceduralFoliageInstance ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h

// ********** Begin Enum ESimulationOverlap ********************************************************
#define FOREACH_ENUM_ESIMULATIONOVERLAP(op) \
	op(ESimulationOverlap::CollisionOverlap) \
	op(ESimulationOverlap::ShadeOverlap) \
	op(ESimulationOverlap::None) 

namespace ESimulationOverlap { enum Type : int; }
template<> FOLIAGE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESimulationOverlap::Type>();
// ********** End Enum ESimulationOverlap **********************************************************

// ********** Begin Enum ESimulationQuery **********************************************************
#define FOREACH_ENUM_ESIMULATIONQUERY(op) \
	op(ESimulationQuery::None) \
	op(ESimulationQuery::CollisionOverlap) \
	op(ESimulationQuery::ShadeOverlap) \
	op(ESimulationQuery::AnyOverlap) 

namespace ESimulationQuery { enum Type : int; }
template<> FOLIAGE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESimulationQuery::Type>();
// ********** End Enum ESimulationQuery ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
