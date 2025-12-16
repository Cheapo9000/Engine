// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/RemeshNode.h"

#ifdef CHAOSCLOTHASSETDATAFLOWNODES_RemeshNode_generated_h
#error "RemeshNode.generated.h already included, missing '#pragma once' in RemeshNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_RemeshNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosClothAssetRemeshNode_v2 *************************************
struct Z_Construct_UScriptStruct_FChaosClothAssetRemeshNode_v2_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_RemeshNode_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetRemeshNode_v2_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FChaosClothAssetRemeshNode_v2;
// ********** End ScriptStruct FChaosClothAssetRemeshNode_v2 ***************************************

// ********** Begin ScriptStruct FChaosClothAssetRemeshNode ****************************************
struct Z_Construct_UScriptStruct_FChaosClothAssetRemeshNode_Statics;
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_RemeshNode_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothAssetRemeshNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FChaosClothAssetRemeshNode;
// ********** End ScriptStruct FChaosClothAssetRemeshNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_RemeshNode_h

// ********** Begin Enum EChaosClothAssetRemeshMethod **********************************************
#define FOREACH_ENUM_ECHAOSCLOTHASSETREMESHMETHOD(op) \
	op(EChaosClothAssetRemeshMethod::Remesh) \
	op(EChaosClothAssetRemeshMethod::Simplify) 

enum class EChaosClothAssetRemeshMethod : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetRemeshMethod> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosClothAssetRemeshMethod>();
// ********** End Enum EChaosClothAssetRemeshMethod ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
