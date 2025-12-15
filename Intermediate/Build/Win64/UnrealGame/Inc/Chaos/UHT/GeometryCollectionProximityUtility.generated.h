// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionProximityUtility.h"

#ifdef CHAOS_GeometryCollectionProximityUtility_generated_h
#error "GeometryCollectionProximityUtility.generated.h already included, missing '#pragma once' in GeometryCollectionProximityUtility.h"
#endif
#define CHAOS_GeometryCollectionProximityUtility_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h

// ********** Begin Enum EProximityMethod **********************************************************
#define FOREACH_ENUM_EPROXIMITYMETHOD(op) \
	op(EProximityMethod::Precise) \
	op(EProximityMethod::ConvexHull) 

enum class EProximityMethod : int32;
template<> struct TIsUEnumClass<EProximityMethod> { enum { Value = true }; };
template<> CHAOS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProximityMethod>();
// ********** End Enum EProximityMethod ************************************************************

// ********** Begin Enum EProximityContactMethod ***************************************************
#define FOREACH_ENUM_EPROXIMITYCONTACTMETHOD(op) \
	op(EProximityContactMethod::MinOverlapInProjectionToMajorAxes) \
	op(EProximityContactMethod::ConvexHullSharpContact) \
	op(EProximityContactMethod::ConvexHullAreaContact) 

enum class EProximityContactMethod : uint8;
template<> struct TIsUEnumClass<EProximityContactMethod> { enum { Value = true }; };
template<> CHAOS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProximityContactMethod>();
// ********** End Enum EProximityContactMethod *****************************************************

// ********** Begin Enum EConnectionContactMethod **************************************************
#define FOREACH_ENUM_ECONNECTIONCONTACTMETHOD(op) \
	op(EConnectionContactMethod::None) \
	op(EConnectionContactMethod::ConvexHullContactArea) 

enum class EConnectionContactMethod : uint8;
template<> struct TIsUEnumClass<EConnectionContactMethod> { enum { Value = true }; };
template<> CHAOS_NON_ATTRIBUTED_API UEnum* StaticEnum<EConnectionContactMethod>();
// ********** End Enum EConnectionContactMethod ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
