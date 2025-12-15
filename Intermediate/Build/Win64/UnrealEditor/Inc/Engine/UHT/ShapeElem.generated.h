// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ShapeElem.h"

#ifdef ENGINE_ShapeElem_generated_h
#error "ShapeElem.generated.h already included, missing '#pragma once' in ShapeElem.h"
#endif
#define ENGINE_ShapeElem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FKShapeElem *******************************************************
struct Z_Construct_UScriptStruct_FKShapeElem_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ShapeElem_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FKShapeElem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FKShapeElem;
// ********** End ScriptStruct FKShapeElem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ShapeElem_h

// ********** Begin Enum EAggCollisionShape ********************************************************
#define FOREACH_ENUM_EAGGCOLLISIONSHAPE(op) \
	op(EAggCollisionShape::Sphere) \
	op(EAggCollisionShape::Box) \
	op(EAggCollisionShape::Sphyl) \
	op(EAggCollisionShape::Convex) \
	op(EAggCollisionShape::TaperedCapsule) \
	op(EAggCollisionShape::LevelSet) \
	op(EAggCollisionShape::SkinnedLevelSet) \
	op(EAggCollisionShape::MLLevelSet) \
	op(EAggCollisionShape::SkinnedTriangleMesh) \
	op(EAggCollisionShape::Unknown) 

namespace EAggCollisionShape { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAggCollisionShape::Type>();
// ********** End Enum EAggCollisionShape **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
