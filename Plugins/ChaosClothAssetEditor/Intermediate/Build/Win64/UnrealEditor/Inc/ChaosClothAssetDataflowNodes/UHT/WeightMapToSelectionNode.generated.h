// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/WeightMapToSelectionNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_WeightMapToSelectionNode_generated_h
#error "WeightMapToSelectionNode.generated.h already included, missing '#pragma once' in WeightMapToSelectionNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_WeightMapToSelectionNode_generated_h

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_WeightMapToSelectionNode_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetWeightMapToSelectionNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetWeightMapToSelectionNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_WeightMapToSelectionNode_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETWEIGHTMAPCONVERTABLESELECTIONTYPE(op) \
	op(EChaosClothAssetWeightMapConvertableSelectionType::SimVertices2D) \
	op(EChaosClothAssetWeightMapConvertableSelectionType::SimVertices3D) \
	op(EChaosClothAssetWeightMapConvertableSelectionType::SimFaces) 

enum class EChaosClothAssetWeightMapConvertableSelectionType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetWeightMapConvertableSelectionType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetWeightMapConvertableSelectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
