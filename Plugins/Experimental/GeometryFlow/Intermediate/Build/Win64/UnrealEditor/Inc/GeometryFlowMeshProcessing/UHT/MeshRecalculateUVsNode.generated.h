// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshProcessingNodes/MeshRecalculateUVsNode.h"

#ifdef GEOMETRYFLOWMESHPROCESSING_MeshRecalculateUVsNode_generated_h
#error "MeshRecalculateUVsNode.generated.h already included, missing '#pragma once' in MeshRecalculateUVsNode.h"
#endif
#define GEOMETRYFLOWMESHPROCESSING_MeshRecalculateUVsNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshRecalculateUVsSettings ***************************************
struct Z_Construct_UScriptStruct_FMeshRecalculateUVsSettings_Statics;
#define FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshRecalculateUVsNode_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshRecalculateUVsSettings_Statics; \
	GEOMETRYFLOWMESHPROCESSING_API static class UScriptStruct* StaticStruct();


struct FMeshRecalculateUVsSettings;
// ********** End ScriptStruct FMeshRecalculateUVsSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessing_Public_MeshProcessingNodes_MeshRecalculateUVsNode_h

// ********** Begin Enum EGeometryFlow_RecalculateUVsUnwrapType ************************************
#define FOREACH_ENUM_EGEOMETRYFLOW_RECALCULATEUVSUNWRAPTYPE(op) \
	op(EGeometryFlow_RecalculateUVsUnwrapType::Auto) \
	op(EGeometryFlow_RecalculateUVsUnwrapType::ExpMap) \
	op(EGeometryFlow_RecalculateUVsUnwrapType::Conformal) 

enum class EGeometryFlow_RecalculateUVsUnwrapType : uint8;
template<> struct TIsUEnumClass<EGeometryFlow_RecalculateUVsUnwrapType> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryFlow_RecalculateUVsUnwrapType>();
// ********** End Enum EGeometryFlow_RecalculateUVsUnwrapType **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
