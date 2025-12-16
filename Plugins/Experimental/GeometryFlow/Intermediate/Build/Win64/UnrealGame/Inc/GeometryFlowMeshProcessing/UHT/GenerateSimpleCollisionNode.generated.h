// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsNodes/GenerateSimpleCollisionNode.h"

#ifdef GEOMETRYFLOWMESHPROCESSING_GenerateSimpleCollisionNode_generated_h
#error "GenerateSimpleCollisionNode.generated.h already included, missing '#pragma once' in GenerateSimpleCollisionNode.h"
#endif
#define GEOMETRYFLOWMESHPROCESSING_GenerateSimpleCollisionNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGenerateConvexHullSettings ***************************************
struct Z_Construct_UScriptStruct_FGenerateConvexHullSettings_Statics;
#define FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_PhysicsNodes_GenerateSimpleCollisionNode_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGenerateConvexHullSettings_Statics; \
	GEOMETRYFLOWMESHPROCESSING_API static class UScriptStruct* StaticStruct();


struct FGenerateConvexHullSettings;
// ********** End ScriptStruct FGenerateConvexHullSettings *****************************************

// ********** Begin ScriptStruct FGenerateSweptHullSettings ****************************************
struct Z_Construct_UScriptStruct_FGenerateSweptHullSettings_Statics;
#define FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_PhysicsNodes_GenerateSimpleCollisionNode_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGenerateSweptHullSettings_Statics; \
	GEOMETRYFLOWMESHPROCESSING_API static class UScriptStruct* StaticStruct();


struct FGenerateSweptHullSettings;
// ********** End ScriptStruct FGenerateSweptHullSettings ******************************************

// ********** Begin ScriptStruct FGenerateSimpleCollisionSettings **********************************
struct Z_Construct_UScriptStruct_FGenerateSimpleCollisionSettings_Statics;
#define FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_PhysicsNodes_GenerateSimpleCollisionNode_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGenerateSimpleCollisionSettings_Statics; \
	GEOMETRYFLOWMESHPROCESSING_API static class UScriptStruct* StaticStruct();


struct FGenerateSimpleCollisionSettings;
// ********** End ScriptStruct FGenerateSimpleCollisionSettings ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_PhysicsNodes_GenerateSimpleCollisionNode_h

// ********** Begin Enum EGeometryFlow_SimpleCollisionGeometryType *********************************
#define FOREACH_ENUM_EGEOMETRYFLOW_SIMPLECOLLISIONGEOMETRYTYPE(op) \
	op(EGeometryFlow_SimpleCollisionGeometryType::AlignedBoxes) \
	op(EGeometryFlow_SimpleCollisionGeometryType::OrientedBoxes) \
	op(EGeometryFlow_SimpleCollisionGeometryType::MinimalSpheres) \
	op(EGeometryFlow_SimpleCollisionGeometryType::Capsules) \
	op(EGeometryFlow_SimpleCollisionGeometryType::ConvexHulls) \
	op(EGeometryFlow_SimpleCollisionGeometryType::SweptHulls) \
	op(EGeometryFlow_SimpleCollisionGeometryType::MinVolume) \
	op(EGeometryFlow_SimpleCollisionGeometryType::None) 

enum class EGeometryFlow_SimpleCollisionGeometryType : uint8;
template<> struct TIsUEnumClass<EGeometryFlow_SimpleCollisionGeometryType> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryFlow_SimpleCollisionGeometryType>();
// ********** End Enum EGeometryFlow_SimpleCollisionGeometryType ***********************************

// ********** Begin Enum EGeometryFlow_ProjectedHullAxisMode ***************************************
#define FOREACH_ENUM_EGEOMETRYFLOW_PROJECTEDHULLAXISMODE(op) \
	op(EGeometryFlow_ProjectedHullAxisMode::X) \
	op(EGeometryFlow_ProjectedHullAxisMode::Y) \
	op(EGeometryFlow_ProjectedHullAxisMode::Z) \
	op(EGeometryFlow_ProjectedHullAxisMode::SmallestBoxDimension) \
	op(EGeometryFlow_ProjectedHullAxisMode::SmallestVolume) 

enum class EGeometryFlow_ProjectedHullAxisMode;
template<> struct TIsUEnumClass<EGeometryFlow_ProjectedHullAxisMode> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryFlow_ProjectedHullAxisMode>();
// ********** End Enum EGeometryFlow_ProjectedHullAxisMode *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
