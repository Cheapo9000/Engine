// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/SelectionNode.h"

#ifdef CHAOSCLOTHASSETDATAFLOWNODES_SelectionNode_generated_h
#error "SelectionNode.generated.h already included, missing '#pragma once' in SelectionNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_SelectionNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosClothAssetNodeSelectionGroup ********************************
struct Z_Construct_UScriptStruct_FChaosClothAssetNodeSelectionGroup_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetNodeSelectionGroup_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct();


struct FChaosClothAssetNodeSelectionGroup;
// ********** End ScriptStruct FChaosClothAssetNodeSelectionGroup **********************************

// ********** Begin ScriptStruct FChaosClothAssetSelectionNode_v2 **********************************
struct Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_v2_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_v2_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FChaosClothAssetSelectionNode_v2;
// ********** End ScriptStruct FChaosClothAssetSelectionNode_v2 ************************************

// ********** Begin ScriptStruct FChaosClothAssetSelectionNode *************************************
struct Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_160_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowTerminalNode Super;


struct FChaosClothAssetSelectionNode;
// ********** End ScriptStruct FChaosClothAssetSelectionNode ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h

// ********** Begin Enum EChaosClothAssetSelectionType *********************************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETSELECTIONTYPE(op) \
	op(EChaosClothAssetSelectionType::SimVertex2D) \
	op(EChaosClothAssetSelectionType::SimVertex3D) \
	op(EChaosClothAssetSelectionType::RenderVertex) \
	op(EChaosClothAssetSelectionType::SimFace) \
	op(EChaosClothAssetSelectionType::RenderFace) \
	op(EChaosClothAssetSelectionType::Deprecated) 

enum class EChaosClothAssetSelectionType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetSelectionType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetSelectionType>();
// ********** End Enum EChaosClothAssetSelectionType ***********************************************

// ********** Begin Enum EChaosClothAssetSelectionOverrideType *************************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETSELECTIONOVERRIDETYPE(op) \
	op(EChaosClothAssetSelectionOverrideType::ReplaceAll) \
	op(EChaosClothAssetSelectionOverrideType::Modify) 

enum class EChaosClothAssetSelectionOverrideType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetSelectionOverrideType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetSelectionOverrideType>();
// ********** End Enum EChaosClothAssetSelectionOverrideType ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
