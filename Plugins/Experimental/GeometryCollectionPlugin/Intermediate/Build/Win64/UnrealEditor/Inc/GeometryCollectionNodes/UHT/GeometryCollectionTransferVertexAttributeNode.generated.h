// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionTransferVertexAttributeNode.h"

#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionTransferVertexAttributeNode_generated_h
#error "GeometryCollectionTransferVertexAttributeNode.generated.h already included, missing '#pragma once' in GeometryCollectionTransferVertexAttributeNode.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionTransferVertexAttributeNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGeometryCollectionTransferVertexAttributeNode ********************
struct Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FGeometryCollectionTransferVertexAttributeNode;
// ********** End ScriptStruct FGeometryCollectionTransferVertexAttributeNode **********************

// ********** Begin ScriptStruct FGeometryCollectionTransferVertexSkinWeightsNode ******************
struct Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_180_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FGeometryCollectionTransferVertexSkinWeightsNode;
// ********** End ScriptStruct FGeometryCollectionTransferVertexSkinWeightsNode ********************

// ********** Begin ScriptStruct FGeometryCollectionSetKinematicVertexSelectionNode ****************
struct Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_258_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FGeometryCollectionSetKinematicVertexSelectionNode;
// ********** End ScriptStruct FGeometryCollectionSetKinematicVertexSelectionNode ******************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h

// ********** Begin Enum EDataflowTransferVertexAttributeNodeFalloff *******************************
#define FOREACH_ENUM_EDATAFLOWTRANSFERVERTEXATTRIBUTENODEFALLOFF(op) \
	op(EDataflowTransferVertexAttributeNodeFalloff::Squared) \
	op(EDataflowTransferVertexAttributeNodeFalloff::Linear) \
	op(EDataflowTransferVertexAttributeNodeFalloff::None) \
	op(EDataflowTransferVertexAttributeNodeFalloff::Dataflow_Max) 

enum class EDataflowTransferVertexAttributeNodeFalloff : uint8;
template<> struct TIsUEnumClass<EDataflowTransferVertexAttributeNodeFalloff> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeFalloff>();
// ********** End Enum EDataflowTransferVertexAttributeNodeFalloff *********************************

// ********** Begin Enum EDataflowTransferVertexAttributeNodeSourceScale ***************************
#define FOREACH_ENUM_EDATAFLOWTRANSFERVERTEXATTRIBUTENODESOURCESCALE(op) \
	op(EDataflowTransferVertexAttributeNodeSourceScale::Component_Edge) \
	op(EDataflowTransferVertexAttributeNodeSourceScale::Asset_Edge) \
	op(EDataflowTransferVertexAttributeNodeSourceScale::Asset_Bound) \
	op(EDataflowTransferVertexAttributeNodeSourceScale::Dataflow_Max) 

enum class EDataflowTransferVertexAttributeNodeSourceScale : uint8;
template<> struct TIsUEnumClass<EDataflowTransferVertexAttributeNodeSourceScale> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeSourceScale>();
// ********** End Enum EDataflowTransferVertexAttributeNodeSourceScale *****************************

// ********** Begin Enum EDataflowTransferVertexAttributeNodeBoundingVolume ************************
#define FOREACH_ENUM_EDATAFLOWTRANSFERVERTEXATTRIBUTENODEBOUNDINGVOLUME(op) \
	op(EDataflowTransferVertexAttributeNodeBoundingVolume::Vertex) \
	op(EDataflowTransferVertexAttributeNodeBoundingVolume::Triangle) \
	op(EDataflowTransferVertexAttributeNodeBoundingVolume::Dataflow_Max) 

enum class EDataflowTransferVertexAttributeNodeBoundingVolume : uint8;
template<> struct TIsUEnumClass<EDataflowTransferVertexAttributeNodeBoundingVolume> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeBoundingVolume>();
// ********** End Enum EDataflowTransferVertexAttributeNodeBoundingVolume **************************

// ********** Begin Enum EDataflowTransferVertexAttributeNodeTransferMethod ************************
#define FOREACH_ENUM_EDATAFLOWTRANSFERVERTEXATTRIBUTENODETRANSFERMETHOD(op) \
	op(EDataflowTransferVertexAttributeNodeTransferMethod::Component) \
	op(EDataflowTransferVertexAttributeNodeTransferMethod::Global) \
	op(EDataflowTransferVertexAttributeNodeTransferMethod::None) \
	op(EDataflowTransferVertexAttributeNodeTransferMethod::Dataflow_Max) 

enum class EDataflowTransferVertexAttributeNodeTransferMethod : uint8;
template<> struct TIsUEnumClass<EDataflowTransferVertexAttributeNodeTransferMethod> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeTransferMethod>();
// ********** End Enum EDataflowTransferVertexAttributeNodeTransferMethod **************************

// ********** Begin Enum ESetKinematicVertexSelectionKinematicValue ********************************
#define FOREACH_ENUM_ESETKINEMATICVERTEXSELECTIONKINEMATICVALUE(op) \
	op(ESetKinematicVertexSelectionKinematicValue::SetKinematic) \
	op(ESetKinematicVertexSelectionKinematicValue::SetNonKinematic) 

enum class ESetKinematicVertexSelectionKinematicValue : uint8;
template<> struct TIsUEnumClass<ESetKinematicVertexSelectionKinematicValue> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<ESetKinematicVertexSelectionKinematicValue>();
// ********** End Enum ESetKinematicVertexSelectionKinematicValue **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
