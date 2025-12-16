// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ProceduralSelectionNode.h"

#ifdef CHAOSCLOTHASSETDATAFLOWNODES_ProceduralSelectionNode_generated_h
#error "ProceduralSelectionNode.generated.h already included, missing '#pragma once' in ProceduralSelectionNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_ProceduralSelectionNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosClothAssetProceduralSelectionNode ***************************
struct Z_Construct_UScriptStruct_FChaosClothAssetProceduralSelectionNode_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_ProceduralSelectionNode_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetProceduralSelectionNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FChaosClothAssetProceduralSelectionNode;
// ********** End ScriptStruct FChaosClothAssetProceduralSelectionNode *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_ProceduralSelectionNode_h

// ********** Begin Enum EChaosClothAssetProceduralSelectionType ***********************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETPROCEDURALSELECTIONTYPE(op) \
	op(EChaosClothAssetProceduralSelectionType::SelectAll) \
	op(EChaosClothAssetProceduralSelectionType::Conversion) 

enum class EChaosClothAssetProceduralSelectionType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetProceduralSelectionType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetProceduralSelectionType>();
// ********** End Enum EChaosClothAssetProceduralSelectionType *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
