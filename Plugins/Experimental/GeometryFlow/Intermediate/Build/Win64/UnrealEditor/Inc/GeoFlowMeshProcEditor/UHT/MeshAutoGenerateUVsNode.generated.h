// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshProcessingNodes/MeshAutoGenerateUVsNode.h"

#ifdef GEOMETRYFLOWMESHPROCESSINGEDITOR_MeshAutoGenerateUVsNode_generated_h
#error "MeshAutoGenerateUVsNode.generated.h already included, missing '#pragma once' in MeshAutoGenerateUVsNode.h"
#endif
#define GEOMETRYFLOWMESHPROCESSINGEDITOR_MeshAutoGenerateUVsNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshAutoGenerateUVsSettings **************************************
struct Z_Construct_UScriptStruct_FMeshAutoGenerateUVsSettings_Statics;
#define FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessingEditor_Public_MeshProcessingNodes_MeshAutoGenerateUVsNode_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshAutoGenerateUVsSettings_Statics; \
	GEOMETRYFLOWMESHPROCESSINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FMeshAutoGenerateUVsSettings;
// ********** End ScriptStruct FMeshAutoGenerateUVsSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryFlow_Source_GeometryFlowMeshProcessingEditor_Public_MeshProcessingNodes_MeshAutoGenerateUVsNode_h

// ********** Begin Enum EGeometryFlow_AutoUVMethod ************************************************
#define FOREACH_ENUM_EGEOMETRYFLOW_AUTOUVMETHOD(op) \
	op(EGeometryFlow_AutoUVMethod::PatchBuilder) \
	op(EGeometryFlow_AutoUVMethod::UVAtlas) \
	op(EGeometryFlow_AutoUVMethod::XAtlas) 

enum class EGeometryFlow_AutoUVMethod : uint8;
template<> struct TIsUEnumClass<EGeometryFlow_AutoUVMethod> { enum { Value = true }; };
template<> GEOMETRYFLOWMESHPROCESSINGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryFlow_AutoUVMethod>();
// ********** End Enum EGeometryFlow_AutoUVMethod **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
