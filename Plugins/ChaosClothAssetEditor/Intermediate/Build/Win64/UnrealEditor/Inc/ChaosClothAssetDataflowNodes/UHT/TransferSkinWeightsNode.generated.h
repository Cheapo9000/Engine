// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/TransferSkinWeightsNode.h"

#ifdef CHAOSCLOTHASSETDATAFLOWNODES_TransferSkinWeightsNode_generated_h
#error "TransferSkinWeightsNode.generated.h already included, missing '#pragma once' in TransferSkinWeightsNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_TransferSkinWeightsNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosClothAssetTransferSkinWeightsNode ***************************
struct Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FChaosClothAssetTransferSkinWeightsNode;
// ********** End ScriptStruct FChaosClothAssetTransferSkinWeightsNode *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h

// ********** Begin Enum EChaosClothAssetTransferSkinWeightsMethod *********************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETTRANSFERSKINWEIGHTSMETHOD(op) \
	op(EChaosClothAssetTransferSkinWeightsMethod::ClosestPointOnSurface) \
	op(EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights) 

enum class EChaosClothAssetTransferSkinWeightsMethod : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetTransferSkinWeightsMethod> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetTransferSkinWeightsMethod>();
// ********** End Enum EChaosClothAssetTransferSkinWeightsMethod ***********************************

// ********** Begin Enum EChaosClothAssetMaxNumInfluences ******************************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETMAXNUMINFLUENCES(op) \
	op(EChaosClothAssetMaxNumInfluences::Uninitialized) \
	op(EChaosClothAssetMaxNumInfluences::Four) \
	op(EChaosClothAssetMaxNumInfluences::Eight) \
	op(EChaosClothAssetMaxNumInfluences::Twelve) 

enum class EChaosClothAssetMaxNumInfluences : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetMaxNumInfluences> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetMaxNumInfluences>();
// ********** End Enum EChaosClothAssetMaxNumInfluences ********************************************

// ********** Begin Enum EChaosClothAssetTransferTargetMeshType ************************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETTRANSFERTARGETMESHTYPE(op) \
	op(EChaosClothAssetTransferTargetMeshType::All) \
	op(EChaosClothAssetTransferTargetMeshType::Simulation) \
	op(EChaosClothAssetTransferTargetMeshType::Render) 

enum class EChaosClothAssetTransferTargetMeshType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetTransferTargetMeshType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetTransferTargetMeshType>();
// ********** End Enum EChaosClothAssetTransferTargetMeshType **************************************

// ********** Begin Enum EChaosClothAssetTransferRenderMeshSource **********************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETTRANSFERRENDERMESHSOURCE(op) \
	op(EChaosClothAssetTransferRenderMeshSource::SkeletalMesh) \
	op(EChaosClothAssetTransferRenderMeshSource::SimulationMesh) 

enum class EChaosClothAssetTransferRenderMeshSource : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetTransferRenderMeshSource> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetTransferRenderMeshSource>();
// ********** End Enum EChaosClothAssetTransferRenderMeshSource ************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
