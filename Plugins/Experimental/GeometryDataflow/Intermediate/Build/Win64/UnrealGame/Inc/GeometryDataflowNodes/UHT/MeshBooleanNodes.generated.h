// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/MeshBooleanNodes.h"

#ifdef GEOMETRYDATAFLOWNODES_MeshBooleanNodes_generated_h
#error "MeshBooleanNodes.generated.h already included, missing '#pragma once' in MeshBooleanNodes.h"
#endif
#define GEOMETRYDATAFLOWNODES_MeshBooleanNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshBooleanDataflowNode ******************************************
struct Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryDataflow_Source_GeometryDataflowNodes_Public_Dataflow_MeshBooleanNodes_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics; \
	GEOMETRYDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FMeshBooleanDataflowNode;
// ********** End ScriptStruct FMeshBooleanDataflowNode ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryDataflow_Source_GeometryDataflowNodes_Public_Dataflow_MeshBooleanNodes_h

// ********** Begin Enum EMeshBooleanOperationEnum *************************************************
#define FOREACH_ENUM_EMESHBOOLEANOPERATIONENUM(op) \
	op(EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Union) \
	op(EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Intersect) \
	op(EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Difference) \
	op(EMeshBooleanOperationEnum::Dataflow_Max) 

enum class EMeshBooleanOperationEnum : uint8;
template<> struct TIsUEnumClass<EMeshBooleanOperationEnum> { enum { Value = true }; };
template<> GEOMETRYDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshBooleanOperationEnum>();
// ********** End Enum EMeshBooleanOperationEnum ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
