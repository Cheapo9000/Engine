// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GetGroomAssetNode.h"

#ifdef HAIRSTRANDSDATAFLOW_GetGroomAssetNode_generated_h
#error "GetGroomAssetNode.generated.h already included, missing '#pragma once' in GetGroomAssetNode.h"
#endif
#define HAIRSTRANDSDATAFLOW_GetGroomAssetNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGetGroomAssetDataflowNode ****************************************
struct Z_Construct_UScriptStruct_FGetGroomAssetDataflowNode_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_GetGroomAssetNode_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGetGroomAssetDataflowNode_Statics; \
	HAIRSTRANDSDATAFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FGetGroomAssetDataflowNode;
// ********** End ScriptStruct FGetGroomAssetDataflowNode ******************************************

// ********** Begin ScriptStruct FGetGroomAssetDataflowNode_v2 *************************************
struct Z_Construct_UScriptStruct_FGetGroomAssetDataflowNode_v2_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_GetGroomAssetNode_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGetGroomAssetDataflowNode_v2_Statics; \
	HAIRSTRANDSDATAFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FGetGroomAssetDataflowNode_v2;
// ********** End ScriptStruct FGetGroomAssetDataflowNode_v2 ***************************************

// ********** Begin ScriptStruct FGroomAssetToCollectionDataflowNode *******************************
struct Z_Construct_UScriptStruct_FGroomAssetToCollectionDataflowNode_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_GetGroomAssetNode_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGroomAssetToCollectionDataflowNode_Statics; \
	HAIRSTRANDSDATAFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FGroomAssetToCollectionDataflowNode;
// ********** End ScriptStruct FGroomAssetToCollectionDataflowNode *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_GetGroomAssetNode_h

// ********** Begin Enum EGroomCollectionType ******************************************************
#define FOREACH_ENUM_EGROOMCOLLECTIONTYPE(op) \
	op(EGroomCollectionType::Strands) \
	op(EGroomCollectionType::Guides) 

enum class EGroomCollectionType : uint8;
template<> struct TIsUEnumClass<EGroomCollectionType> { enum { Value = true }; };
template<> HAIRSTRANDSDATAFLOW_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomCollectionType>();
// ********** End Enum EGroomCollectionType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
