// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshProcessingNodes/MeshSimplifyNode.h"

#ifdef GEOMETRYFLOWMESHPROCESSING_MeshSimplifyNode_generated_h
#error "MeshSimplifyNode.generated.h already included, missing '#pragma once' in MeshSimplifyNode.h"
#endif
#define GEOMETRYFLOWMESHPROCESSING_MeshSimplifyNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshSimplifySettings *********************************************
struct Z_Construct_UScriptStruct_FMeshSimplifySettings_Statics;
#define FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshSimplifyNode_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshSimplifySettings_Statics; \
	GEOMETRYFLOWMESHPROCESSING_API static class UScriptStruct* StaticStruct();


struct FMeshSimplifySettings;
// ********** End ScriptStruct FMeshSimplifySettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshSimplifyNode_h

// ********** Begin Enum EGeometryFlow_MeshSimplifyType ********************************************
#define FOREACH_ENUM_EGEOMETRYFLOW_MESHSIMPLIFYTYPE(op) \
	op(EGeometryFlow_MeshSimplifyType::Standard) \
	op(EGeometryFlow_MeshSimplifyType::VolumePreserving) \
	op(EGeometryFlow_MeshSimplifyType::AttributeAware) 

enum class EGeometryFlow_MeshSimplifyType;
template<> struct TIsUEnumClass<EGeometryFlow_MeshSimplifyType> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryFlow_MeshSimplifyType>();
// ********** End Enum EGeometryFlow_MeshSimplifyType **********************************************

// ********** Begin Enum EGeomtryFlow_MeshSimplifyTargetType ***************************************
#define FOREACH_ENUM_EGEOMTRYFLOW_MESHSIMPLIFYTARGETTYPE(op) \
	op(EGeomtryFlow_MeshSimplifyTargetType::TriangleCount) \
	op(EGeomtryFlow_MeshSimplifyTargetType::VertexCount) \
	op(EGeomtryFlow_MeshSimplifyTargetType::TrianglePercentage) \
	op(EGeomtryFlow_MeshSimplifyTargetType::GeometricDeviation) 

enum class EGeomtryFlow_MeshSimplifyTargetType;
template<> struct TIsUEnumClass<EGeomtryFlow_MeshSimplifyTargetType> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeomtryFlow_MeshSimplifyTargetType>();
// ********** End Enum EGeomtryFlow_MeshSimplifyTargetType *****************************************

// ********** Begin Enum EGeometryFlow_EdgeRefineFlags *********************************************
#define FOREACH_ENUM_EGEOMETRYFLOW_EDGEREFINEFLAGS(op) \
	op(EGeometryFlow_EdgeRefineFlags::NoConstraint) \
	op(EGeometryFlow_EdgeRefineFlags::NoFlip) \
	op(EGeometryFlow_EdgeRefineFlags::NoSplit) \
	op(EGeometryFlow_EdgeRefineFlags::NoCollapse) \
	op(EGeometryFlow_EdgeRefineFlags::FullyConstrained) \
	op(EGeometryFlow_EdgeRefineFlags::SplitsOnly) \
	op(EGeometryFlow_EdgeRefineFlags::FlipOnly) \
	op(EGeometryFlow_EdgeRefineFlags::CollapseOnly) 

enum class EGeometryFlow_EdgeRefineFlags;
template<> struct TIsUEnumClass<EGeometryFlow_EdgeRefineFlags> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryFlow_EdgeRefineFlags>();
// ********** End Enum EGeometryFlow_EdgeRefineFlags ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
