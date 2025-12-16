// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/SimulationClothVertexFaceSpringConfigNode.h"

#ifdef CHAOSCLOTHASSETDATAFLOWNODES_SimulationClothVertexFaceSpringConfigNode_generated_h
#error "SimulationClothVertexFaceSpringConfigNode.generated.h already included, missing '#pragma once' in SimulationClothVertexFaceSpringConfigNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_SimulationClothVertexFaceSpringConfigNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosClothAssetSimulationClothVertexFaceSpringConstructionSet ****
struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationClothVertexFaceSpringConstructionSet_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationClothVertexFaceSpringConfigNode_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetSimulationClothVertexFaceSpringConstructionSet_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct();


struct FChaosClothAssetSimulationClothVertexFaceSpringConstructionSet;
// ********** End ScriptStruct FChaosClothAssetSimulationClothVertexFaceSpringConstructionSet ******

// ********** Begin ScriptStruct FChaosClothAssetSimulationClothVertexFaceSpringConfigNode *********
struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationClothVertexFaceSpringConfigNode_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationClothVertexFaceSpringConfigNode_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetSimulationClothVertexFaceSpringConfigNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosClothAssetSimulationBaseConfigNode Super;


struct FChaosClothAssetSimulationClothVertexFaceSpringConfigNode;
// ********** End ScriptStruct FChaosClothAssetSimulationClothVertexFaceSpringConfigNode ***********

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationClothVertexFaceSpringConfigNode_h

// ********** Begin Enum EChaosClothAssetClothVertexFaceSpringConstructionMethod *******************
#define FOREACH_ENUM_ECHAOSCLOTHASSETCLOTHVERTEXFACESPRINGCONSTRUCTIONMETHOD(op) \
	op(EChaosClothAssetClothVertexFaceSpringConstructionMethod::SourceToClosestTarget) \
	op(EChaosClothAssetClothVertexFaceSpringConstructionMethod::SourceToRayIntersectionTarget) \
	op(EChaosClothAssetClothVertexFaceSpringConstructionMethod::AllWithinRadius) \
	op(EChaosClothAssetClothVertexFaceSpringConstructionMethod::Tetrahedralize) 

enum class EChaosClothAssetClothVertexFaceSpringConstructionMethod;
template<> struct TIsUEnumClass<EChaosClothAssetClothVertexFaceSpringConstructionMethod> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetClothVertexFaceSpringConstructionMethod>();
// ********** End Enum EChaosClothAssetClothVertexFaceSpringConstructionMethod *********************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
