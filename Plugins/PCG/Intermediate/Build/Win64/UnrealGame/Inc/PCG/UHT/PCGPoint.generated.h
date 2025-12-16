// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPoint.h"

#ifdef PCG_PCGPoint_generated_h
#error "PCGPoint.generated.h already included, missing '#pragma once' in PCGPoint.h"
#endif
#define PCG_PCGPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGPoint *********************************************************
struct Z_Construct_UScriptStruct_FPCGPoint_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPoint_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPoint_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPoint;
// ********** End ScriptStruct FPCGPoint ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPoint_h

// ********** Begin Enum EPCGPointProperties *******************************************************
#define FOREACH_ENUM_EPCGPOINTPROPERTIES(op) \
	op(EPCGPointProperties::Density) \
	op(EPCGPointProperties::BoundsMin) \
	op(EPCGPointProperties::BoundsMax) \
	op(EPCGPointProperties::Extents) \
	op(EPCGPointProperties::Color) \
	op(EPCGPointProperties::Position) \
	op(EPCGPointProperties::Rotation) \
	op(EPCGPointProperties::Scale) \
	op(EPCGPointProperties::Transform) \
	op(EPCGPointProperties::Steepness) \
	op(EPCGPointProperties::LocalCenter) \
	op(EPCGPointProperties::Seed) \
	op(EPCGPointProperties::LocalSize) \
	op(EPCGPointProperties::ScaledLocalSize) \
	op(EPCGPointProperties::Invalid) 

enum class EPCGPointProperties : uint8;
template<> struct TIsUEnumClass<EPCGPointProperties> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPointProperties>();
// ********** End Enum EPCGPointProperties *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
