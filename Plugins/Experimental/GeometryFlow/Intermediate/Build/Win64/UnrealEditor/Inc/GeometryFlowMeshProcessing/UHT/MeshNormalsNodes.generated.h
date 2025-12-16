// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshProcessingNodes/MeshNormalsNodes.h"

#ifdef GEOMETRYFLOWMESHPROCESSING_MeshNormalsNodes_generated_h
#error "MeshNormalsNodes.generated.h already included, missing '#pragma once' in MeshNormalsNodes.h"
#endif
#define GEOMETRYFLOWMESHPROCESSING_MeshNormalsNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshNormalsSettings **********************************************
struct Z_Construct_UScriptStruct_FMeshNormalsSettings_Statics;
#define FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshNormalsNodes_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshNormalsSettings_Statics; \
	GEOMETRYFLOWMESHPROCESSING_API static class UScriptStruct* StaticStruct();


struct FMeshNormalsSettings;
// ********** End ScriptStruct FMeshNormalsSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshNormalsNodes_h

// ********** Begin Enum EGeometryFlow_ComputeNormalsType ******************************************
#define FOREACH_ENUM_EGEOMETRYFLOW_COMPUTENORMALSTYPE(op) \
	op(EGeometryFlow_ComputeNormalsType::PerTriangle) \
	op(EGeometryFlow_ComputeNormalsType::PerVertex) \
	op(EGeometryFlow_ComputeNormalsType::RecomputeExistingTopology) \
	op(EGeometryFlow_ComputeNormalsType::FromFaceAngleThreshold) \
	op(EGeometryFlow_ComputeNormalsType::FromGroups) 

enum class EGeometryFlow_ComputeNormalsType;
template<> struct TIsUEnumClass<EGeometryFlow_ComputeNormalsType> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryFlow_ComputeNormalsType>();
// ********** End Enum EGeometryFlow_ComputeNormalsType ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
