// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshProcessingNodes/MeshNormalFlowNode.h"

#ifdef GEOMETRYFLOWMESHPROCESSING_MeshNormalFlowNode_generated_h
#error "MeshNormalFlowNode.generated.h already included, missing '#pragma once' in MeshNormalFlowNode.h"
#endif
#define GEOMETRYFLOWMESHPROCESSING_MeshNormalFlowNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshNormalFlowSettings *******************************************
struct Z_Construct_UScriptStruct_FMeshNormalFlowSettings_Statics;
#define FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshNormalFlowNode_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshNormalFlowSettings_Statics; \
	GEOMETRYFLOWMESHPROCESSING_API static class UScriptStruct* StaticStruct(); \
	typedef FMeshSimplifySettings Super;


struct FMeshNormalFlowSettings;
// ********** End ScriptStruct FMeshNormalFlowSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshNormalFlowNode_h

// ********** Begin Enum EGeometryFlow_SmoothTypes *************************************************
#define FOREACH_ENUM_EGEOMETRYFLOW_SMOOTHTYPES(op) \
	op(EGeometryFlow_SmoothTypes::Uniform) \
	op(EGeometryFlow_SmoothTypes::Cotan) \
	op(EGeometryFlow_SmoothTypes::MeanValue) 

enum class EGeometryFlow_SmoothTypes;
template<> struct TIsUEnumClass<EGeometryFlow_SmoothTypes> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryFlow_SmoothTypes>();
// ********** End Enum EGeometryFlow_SmoothTypes ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
