// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/AttributeNode.h"

#ifdef CHAOSCLOTHASSETDATAFLOWNODES_AttributeNode_generated_h
#error "AttributeNode.generated.h already included, missing '#pragma once' in AttributeNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_AttributeNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosClothAssetNodeAttributeGroup ********************************
struct Z_Construct_UScriptStruct_FChaosClothAssetNodeAttributeGroup_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AttributeNode_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetNodeAttributeGroup_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct();


struct FChaosClothAssetNodeAttributeGroup;
// ********** End ScriptStruct FChaosClothAssetNodeAttributeGroup **********************************

// ********** Begin ScriptStruct FChaosClothAssetAttributeNode_v2 **********************************
struct Z_Construct_UScriptStruct_FChaosClothAssetAttributeNode_v2_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AttributeNode_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetAttributeNode_v2_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FChaosClothAssetAttributeNode_v2;
// ********** End ScriptStruct FChaosClothAssetAttributeNode_v2 ************************************

// ********** Begin ScriptStruct FChaosClothAssetAttributeNode *************************************
struct Z_Construct_UScriptStruct_FChaosClothAssetAttributeNode_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AttributeNode_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetAttributeNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FChaosClothAssetAttributeNode;
// ********** End ScriptStruct FChaosClothAssetAttributeNode ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AttributeNode_h

// ********** Begin Enum EChaosClothAssetNodeAttributeType *****************************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETNODEATTRIBUTETYPE(op) \
	op(EChaosClothAssetNodeAttributeType::Integer) \
	op(EChaosClothAssetNodeAttributeType::Float) \
	op(EChaosClothAssetNodeAttributeType::Vector) 

enum class EChaosClothAssetNodeAttributeType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetNodeAttributeType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetNodeAttributeType>();
// ********** End Enum EChaosClothAssetNodeAttributeType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
