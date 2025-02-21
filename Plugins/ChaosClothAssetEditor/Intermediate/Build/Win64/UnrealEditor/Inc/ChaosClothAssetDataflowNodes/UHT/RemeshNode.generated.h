// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/RemeshNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_RemeshNode_generated_h
#error "RemeshNode.generated.h already included, missing '#pragma once' in RemeshNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_RemeshNode_generated_h

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_RemeshNode_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetRemeshNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetRemeshNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_RemeshNode_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETREMESHMETHOD(op) \
	op(EChaosClothAssetRemeshMethod::Remesh) \
	op(EChaosClothAssetRemeshMethod::Simplify) 

enum class EChaosClothAssetRemeshMethod : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetRemeshMethod> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetRemeshMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
