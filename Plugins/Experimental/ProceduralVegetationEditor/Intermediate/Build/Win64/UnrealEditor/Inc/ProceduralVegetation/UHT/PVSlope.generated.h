// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Implementations/PVSlope.h"

#ifdef PROCEDURALVEGETATION_PVSlope_generated_h
#error "PVSlope.generated.h already included, missing '#pragma once' in PVSlope.h"
#endif
#define PROCEDURALVEGETATION_PVSlope_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVSlopeParams ****************************************************
struct Z_Construct_UScriptStruct_FPVSlopeParams_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVSlope_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVSlopeParams_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct();


struct FPVSlopeParams;
// ********** End ScriptStruct FPVSlopeParams ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVSlope_h

// ********** Begin Enum EPVSlopeTrunkPivotPoint ***************************************************
#define FOREACH_ENUM_EPVSLOPETRUNKPIVOTPOINT(op) \
	op(EPVSlopeTrunkPivotPoint::Origin) \
	op(EPVSlopeTrunkPivotPoint::Trunk) 

enum class EPVSlopeTrunkPivotPoint;
template<> struct TIsUEnumClass<EPVSlopeTrunkPivotPoint> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPVSlopeTrunkPivotPoint>();
// ********** End Enum EPVSlopeTrunkPivotPoint *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
