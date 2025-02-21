// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSceneItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESCENETREE_AvaSceneItem_generated_h
#error "AvaSceneItem.generated.h already included, missing '#pragma once' in AvaSceneItem.h"
#endif
#define AVALANCHESCENETREE_AvaSceneItem_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSceneTree_Public_AvaSceneItem_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaSceneItem_Statics; \
	AVALANCHESCENETREE_API static class UScriptStruct* StaticStruct();


template<> AVALANCHESCENETREE_API UScriptStruct* StaticStruct<struct FAvaSceneItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSceneTree_Public_AvaSceneItem_h


#define FOREACH_ENUM_EAVASCENEITEMIDTYPE(op) \
	op(EAvaSceneItemIdType::ObjectPath) \
	op(EAvaSceneItemIdType::Other) 

enum class EAvaSceneItemIdType : uint8;
template<> struct TIsUEnumClass<EAvaSceneItemIdType> { enum { Value = true }; };
template<> AVALANCHESCENETREE_API UEnum* StaticEnum<EAvaSceneItemIdType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
