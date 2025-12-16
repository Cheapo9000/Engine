// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshProcessingNodes/MeshTangentsNodes.h"

#ifdef GEOMETRYFLOWMESHPROCESSING_MeshTangentsNodes_generated_h
#error "MeshTangentsNodes.generated.h already included, missing '#pragma once' in MeshTangentsNodes.h"
#endif
#define GEOMETRYFLOWMESHPROCESSING_MeshTangentsNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshTangentsSettings *********************************************
struct Z_Construct_UScriptStruct_FMeshTangentsSettings_Statics;
#define FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshTangentsNodes_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshTangentsSettings_Statics; \
	GEOMETRYFLOWMESHPROCESSING_API static class UScriptStruct* StaticStruct();


struct FMeshTangentsSettings;
// ********** End ScriptStruct FMeshTangentsSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshTangentsNodes_h

// ********** Begin Enum EGeometryFlow_ComputeTangentsType *****************************************
#define FOREACH_ENUM_EGEOMETRYFLOW_COMPUTETANGENTSTYPE(op) \
	op(EGeometryFlow_ComputeTangentsType::PerTriangle) \
	op(EGeometryFlow_ComputeTangentsType::FastMikkT) 

enum class EGeometryFlow_ComputeTangentsType;
template<> struct TIsUEnumClass<EGeometryFlow_ComputeTangentsType> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryFlow_ComputeTangentsType>();
// ********** End Enum EGeometryFlow_ComputeTangentsType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
