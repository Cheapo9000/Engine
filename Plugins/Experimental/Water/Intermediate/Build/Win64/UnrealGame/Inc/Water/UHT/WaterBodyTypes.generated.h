// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyTypes.h"

#ifdef WATER_WaterBodyTypes_generated_h
#error "WaterBodyTypes.generated.h already included, missing '#pragma once' in WaterBodyTypes.h"
#endif
#define WATER_WaterBodyTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyTypes_h

// ********** Begin Enum EWaterBodyType ************************************************************
#define FOREACH_ENUM_EWATERBODYTYPE(op) \
	op(EWaterBodyType::River) \
	op(EWaterBodyType::Lake) \
	op(EWaterBodyType::Ocean) \
	op(EWaterBodyType::Transition) \
	op(EWaterBodyType::Num) 

enum class EWaterBodyType : uint8;
template<> struct TIsUEnumClass<EWaterBodyType> { enum { Value = true }; };
template<> WATER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWaterBodyType>();
// ********** End Enum EWaterBodyType **************************************************************

// ********** Begin Enum EWaterBodyQueryError ******************************************************
#define FOREACH_ENUM_EWATERBODYQUERYERROR(op) \
	op(EWaterBodyQueryError::UnknownError) \
	op(EWaterBodyQueryError::WaterBodyNotRegistered) \
	op(EWaterBodyQueryError::NullWaterSplineMetadata) 

enum class EWaterBodyQueryError : uint8;
template<> struct TIsUEnumClass<EWaterBodyQueryError> { enum { Value = true }; };
template<> WATER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWaterBodyQueryError>();
// ********** End Enum EWaterBodyQueryError ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
