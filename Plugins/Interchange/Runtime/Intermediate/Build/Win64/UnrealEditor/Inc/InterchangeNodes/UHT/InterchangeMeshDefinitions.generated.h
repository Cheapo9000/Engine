// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshDefinitions.h"

#ifdef INTERCHANGENODES_InterchangeMeshDefinitions_generated_h
#error "InterchangeMeshDefinitions.generated.h already included, missing '#pragma once' in InterchangeMeshDefinitions.h"
#endif
#define INTERCHANGENODES_InterchangeMeshDefinitions_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshDefinitions_h

// ********** Begin Enum EInterchangeMeshCollision *************************************************
#define FOREACH_ENUM_EINTERCHANGEMESHCOLLISION(op) \
	op(EInterchangeMeshCollision::Box) \
	op(EInterchangeMeshCollision::Sphere) \
	op(EInterchangeMeshCollision::Capsule) \
	op(EInterchangeMeshCollision::Convex10DOP_X) \
	op(EInterchangeMeshCollision::Convex10DOP_Y) \
	op(EInterchangeMeshCollision::Convex10DOP_Z) \
	op(EInterchangeMeshCollision::Convex18DOP) \
	op(EInterchangeMeshCollision::Convex26DOP) \
	op(EInterchangeMeshCollision::None) 

enum class EInterchangeMeshCollision : uint8;
template<> struct TIsUEnumClass<EInterchangeMeshCollision> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeMeshCollision>();
// ********** End Enum EInterchangeMeshCollision ***************************************************

// ********** Begin Enum EInterchangeMotionVectorsHandling *****************************************
#define FOREACH_ENUM_EINTERCHANGEMOTIONVECTORSHANDLING(op) \
	op(EInterchangeMotionVectorsHandling::NoMotionVectors) \
	op(EInterchangeMotionVectorsHandling::ImportVelocitiesAsMotionVectors) \
	op(EInterchangeMotionVectorsHandling::CalculateMotionVectorsDuringImport) 

enum class EInterchangeMotionVectorsHandling : uint8;
template<> struct TIsUEnumClass<EInterchangeMotionVectorsHandling> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeMotionVectorsHandling>();
// ********** End Enum EInterchangeMotionVectorsHandling *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
