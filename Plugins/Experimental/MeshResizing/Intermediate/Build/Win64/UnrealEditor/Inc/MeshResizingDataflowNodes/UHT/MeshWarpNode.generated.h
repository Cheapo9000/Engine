// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshResizing/MeshWarpNode.h"

#ifdef MESHRESIZINGDATAFLOWNODES_MeshWarpNode_generated_h
#error "MeshWarpNode.generated.h already included, missing '#pragma once' in MeshWarpNode.h"
#endif
#define MESHRESIZINGDATAFLOWNODES_MeshWarpNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshWarpNode *****************************************************
struct Z_Construct_UScriptStruct_FMeshWarpNode_Statics;
#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingNodes_Private_MeshResizing_MeshWarpNode_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshWarpNode_Statics; \
	MESHRESIZINGDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FMeshWarpNode;
// ********** End ScriptStruct FMeshWarpNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingNodes_Private_MeshResizing_MeshWarpNode_h

// ********** Begin Enum EMeshResizingWarpMethod ***************************************************
#define FOREACH_ENUM_EMESHRESIZINGWARPMETHOD(op) \
	op(EMeshResizingWarpMethod::WrapDeform) \
	op(EMeshResizingWarpMethod::RBFInterpolate) 

enum class EMeshResizingWarpMethod : uint8;
template<> struct TIsUEnumClass<EMeshResizingWarpMethod> { enum { Value = true }; };
template<> MESHRESIZINGDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshResizingWarpMethod>();
// ********** End Enum EMeshResizingWarpMethod *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
