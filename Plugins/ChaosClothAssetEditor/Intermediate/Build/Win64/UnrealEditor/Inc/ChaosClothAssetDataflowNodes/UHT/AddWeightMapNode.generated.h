// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/AddWeightMapNode.h"

#ifdef CHAOSCLOTHASSETDATAFLOWNODES_AddWeightMapNode_generated_h
#error "AddWeightMapNode.generated.h already included, missing '#pragma once' in AddWeightMapNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_AddWeightMapNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosClothAssetAddWeightMapNode **********************************
struct Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AddWeightMapNode_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowTerminalNode Super;


struct FChaosClothAssetAddWeightMapNode;
// ********** End ScriptStruct FChaosClothAssetAddWeightMapNode ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AddWeightMapNode_h

// ********** Begin Enum EChaosClothAssetWeightMapTransferType *************************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETWEIGHTMAPTRANSFERTYPE(op) \
	op(EChaosClothAssetWeightMapTransferType::Use2DSimMesh) \
	op(EChaosClothAssetWeightMapTransferType::Use3DSimMesh) 

enum class EChaosClothAssetWeightMapTransferType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetWeightMapTransferType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetWeightMapTransferType>();
// ********** End Enum EChaosClothAssetWeightMapTransferType ***************************************

// ********** Begin Enum EChaosClothAssetWeightMapMeshType *****************************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETWEIGHTMAPMESHTYPE(op) \
	op(EChaosClothAssetWeightMapMeshType::Simulation) \
	op(EChaosClothAssetWeightMapMeshType::Render) \
	op(EChaosClothAssetWeightMapMeshType::Both) 

enum class EChaosClothAssetWeightMapMeshType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetWeightMapMeshType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetWeightMapMeshType>();
// ********** End Enum EChaosClothAssetWeightMapMeshType *******************************************

// ********** Begin Enum EChaosClothAssetWeightMapOverrideType *************************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETWEIGHTMAPOVERRIDETYPE(op) \
	op(EChaosClothAssetWeightMapOverrideType::ReplaceAll) \
	op(EChaosClothAssetWeightMapOverrideType::ReplaceChanged) \
	op(EChaosClothAssetWeightMapOverrideType::Add) 

enum class EChaosClothAssetWeightMapOverrideType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetWeightMapOverrideType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetWeightMapOverrideType>();
// ********** End Enum EChaosClothAssetWeightMapOverrideType ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
