// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/AttributeNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_AttributeNode_generated_h
#error "AttributeNode.generated.h already included, missing '#pragma once' in AttributeNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_AttributeNode_generated_h

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AttributeNode_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetNodeAttributeGroup_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct();


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetNodeAttributeGroup>();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AttributeNode_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetAttributeNode_v2_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetAttributeNode_v2>();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AttributeNode_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetAttributeNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetAttributeNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AttributeNode_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETNODEATTRIBUTETYPE(op) \
	op(EChaosClothAssetNodeAttributeType::Integer) \
	op(EChaosClothAssetNodeAttributeType::Float) \
	op(EChaosClothAssetNodeAttributeType::Vector) 

enum class EChaosClothAssetNodeAttributeType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetNodeAttributeType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetNodeAttributeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
