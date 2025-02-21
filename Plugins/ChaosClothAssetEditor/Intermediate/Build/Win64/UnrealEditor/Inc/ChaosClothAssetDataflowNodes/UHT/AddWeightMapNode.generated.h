// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/AddWeightMapNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_AddWeightMapNode_generated_h
#error "AddWeightMapNode.generated.h already included, missing '#pragma once' in AddWeightMapNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_AddWeightMapNode_generated_h

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AddWeightMapNode_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowTerminalNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetAddWeightMapNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AddWeightMapNode_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETWEIGHTMAPTRANSFERTYPE(op) \
	op(EChaosClothAssetWeightMapTransferType::Use2DSimMesh) \
	op(EChaosClothAssetWeightMapTransferType::Use3DSimMesh) 

enum class EChaosClothAssetWeightMapTransferType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetWeightMapTransferType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetWeightMapTransferType>();

#define FOREACH_ENUM_ECHAOSCLOTHASSETWEIGHTMAPMESHTYPE(op) \
	op(EChaosClothAssetWeightMapMeshType::Simulation) \
	op(EChaosClothAssetWeightMapMeshType::Render) \
	op(EChaosClothAssetWeightMapMeshType::Both) 

enum class EChaosClothAssetWeightMapMeshType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetWeightMapMeshType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetWeightMapMeshType>();

#define FOREACH_ENUM_ECHAOSCLOTHASSETWEIGHTMAPOVERRIDETYPE(op) \
	op(EChaosClothAssetWeightMapOverrideType::ReplaceAll) \
	op(EChaosClothAssetWeightMapOverrideType::ReplaceChanged) \
	op(EChaosClothAssetWeightMapOverrideType::Add) 

enum class EChaosClothAssetWeightMapOverrideType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetWeightMapOverrideType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetWeightMapOverrideType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
