// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/SimulationClothVertexSpringConfigNode.h"

#ifdef CHAOSCLOTHASSETDATAFLOWNODES_SimulationClothVertexSpringConfigNode_generated_h
#error "SimulationClothVertexSpringConfigNode.generated.h already included, missing '#pragma once' in SimulationClothVertexSpringConfigNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_SimulationClothVertexSpringConfigNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosClothAssetSimulationClothVertexSpringConstructionSet ********
struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationClothVertexSpringConstructionSet_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationClothVertexSpringConfigNode_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetSimulationClothVertexSpringConstructionSet_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct();


struct FChaosClothAssetSimulationClothVertexSpringConstructionSet;
// ********** End ScriptStruct FChaosClothAssetSimulationClothVertexSpringConstructionSet **********

// ********** Begin ScriptStruct FChaosClothAssetSimulationClothVertexSpringConfigNode *************
struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationClothVertexSpringConfigNode_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationClothVertexSpringConfigNode_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetSimulationClothVertexSpringConfigNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosClothAssetSimulationBaseConfigNode Super;


struct FChaosClothAssetSimulationClothVertexSpringConfigNode;
// ********** End ScriptStruct FChaosClothAssetSimulationClothVertexSpringConfigNode ***************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationClothVertexSpringConfigNode_h

// ********** Begin Enum EChaosClothAssetClothVertexSpringConstructionMethod ***********************
#define FOREACH_ENUM_ECHAOSCLOTHASSETCLOTHVERTEXSPRINGCONSTRUCTIONMETHOD(op) \
	op(EChaosClothAssetClothVertexSpringConstructionMethod::SourceToClosestTarget) \
	op(EChaosClothAssetClothVertexSpringConstructionMethod::ClosestSourceToClosestTarget) \
	op(EChaosClothAssetClothVertexSpringConstructionMethod::AllSourceToAllTargets) 

enum class EChaosClothAssetClothVertexSpringConstructionMethod;
template<> struct TIsUEnumClass<EChaosClothAssetClothVertexSpringConstructionMethod> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetClothVertexSpringConstructionMethod>();
// ********** End Enum EChaosClothAssetClothVertexSpringConstructionMethod *************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
