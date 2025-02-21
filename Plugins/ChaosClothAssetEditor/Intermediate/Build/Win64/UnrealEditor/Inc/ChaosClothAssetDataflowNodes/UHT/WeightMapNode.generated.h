// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/WeightMapNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_WeightMapNode_generated_h
#error "WeightMapNode.generated.h already included, missing '#pragma once' in WeightMapNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_WeightMapNode_generated_h

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_WeightMapNode_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetWeightMapNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetWeightMapNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_WeightMapNode_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETWEIGHTMAPMESHTARGET(op) \
	op(EChaosClothAssetWeightMapMeshTarget::Simulation) \
	op(EChaosClothAssetWeightMapMeshTarget::Render) 

enum class EChaosClothAssetWeightMapMeshTarget : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetWeightMapMeshTarget> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetWeightMapMeshTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
