// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGSplineStruct.h"

#ifdef PCG_PCGSplineStruct_generated_h
#error "PCGSplineStruct.generated.h already included, missing '#pragma once' in PCGSplineStruct.h"
#endif
#define PCG_PCGSplineStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGSplineStruct **************************************************
struct Z_Construct_UScriptStruct_FPCGSplineStruct_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineStruct_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSplineStruct_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSplineStruct;
// ********** End ScriptStruct FPCGSplineStruct ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineStruct_h

// ********** Begin Enum EPCGSplineStructProperties ************************************************
#define FOREACH_ENUM_EPCGSPLINESTRUCTPROPERTIES(op) \
	op(EPCGSplineStructProperties::Position) \
	op(EPCGSplineStructProperties::Rotation) \
	op(EPCGSplineStructProperties::Scale) \
	op(EPCGSplineStructProperties::Transform) \
	op(EPCGSplineStructProperties::ArriveTangent) \
	op(EPCGSplineStructProperties::LeaveTangent) \
	op(EPCGSplineStructProperties::InterpType) \
	op(EPCGSplineStructProperties::LocalPosition) \
	op(EPCGSplineStructProperties::LocalRotation) \
	op(EPCGSplineStructProperties::LocalScale) \
	op(EPCGSplineStructProperties::LocalTransform) 

enum class EPCGSplineStructProperties : uint8;
template<> struct TIsUEnumClass<EPCGSplineStructProperties> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineStructProperties>();
// ********** End Enum EPCGSplineStructProperties **************************************************

// ********** Begin Enum EPCGSplineDataProperties **************************************************
#define FOREACH_ENUM_EPCGSPLINEDATAPROPERTIES(op) \
	op(EPCGSplineDataProperties::SplineTransform) \
	op(EPCGSplineDataProperties::IsClosed) 

enum class EPCGSplineDataProperties : uint8;
template<> struct TIsUEnumClass<EPCGSplineDataProperties> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineDataProperties>();
// ********** End Enum EPCGSplineDataProperties ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
