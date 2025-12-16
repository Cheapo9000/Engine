// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionTextureNodes.h"

#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionTextureNodes_generated_h
#error "GeometryCollectionTextureNodes.generated.h already included, missing '#pragma once' in GeometryCollectionTextureNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionTextureNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBakeTextureFromCollectionDataflowNode ****************************
struct Z_Construct_UScriptStruct_FBakeTextureFromCollectionDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTextureNodes_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakeTextureFromCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FBakeTextureFromCollectionDataflowNode;
// ********** End ScriptStruct FBakeTextureFromCollectionDataflowNode ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTextureNodes_h

// ********** Begin Enum ECollectionBakeTextureAttribute *******************************************
#define FOREACH_ENUM_ECOLLECTIONBAKETEXTUREATTRIBUTE(op) \
	op(ECollectionBakeTextureAttribute::None) \
	op(ECollectionBakeTextureAttribute::DistanceToExternal) \
	op(ECollectionBakeTextureAttribute::AmbientOcclusion) \
	op(ECollectionBakeTextureAttribute::Curvature) \
	op(ECollectionBakeTextureAttribute::NormalX) \
	op(ECollectionBakeTextureAttribute::NormalY) \
	op(ECollectionBakeTextureAttribute::NormalZ) \
	op(ECollectionBakeTextureAttribute::PositionX) \
	op(ECollectionBakeTextureAttribute::PositionY) \
	op(ECollectionBakeTextureAttribute::PositionZ) 

enum class ECollectionBakeTextureAttribute : int32;
template<> struct TIsUEnumClass<ECollectionBakeTextureAttribute> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<ECollectionBakeTextureAttribute>();
// ********** End Enum ECollectionBakeTextureAttribute *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
