// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GetGroomAttributesNodes.h"

#ifdef HAIRSTRANDSDATAFLOW_GetGroomAttributesNodes_generated_h
#error "GetGroomAttributesNodes.generated.h already included, missing '#pragma once' in GetGroomAttributesNodes.h"
#endif
#define HAIRSTRANDSDATAFLOW_GetGroomAttributesNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGetGroomAttributesDataflowNode ***********************************
struct Z_Construct_UScriptStruct_FGetGroomAttributesDataflowNode_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_GetGroomAttributesNodes_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGetGroomAttributesDataflowNode_Statics; \
	HAIRSTRANDSDATAFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FGetGroomAttributesDataflowNode;
// ********** End ScriptStruct FGetGroomAttributesDataflowNode *************************************

// ********** Begin ScriptStruct FGetCurveAttributesDataflowNode ***********************************
struct Z_Construct_UScriptStruct_FGetCurveAttributesDataflowNode_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_GetGroomAttributesNodes_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGetCurveAttributesDataflowNode_Statics; \
	HAIRSTRANDSDATAFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FGetCurveAttributesDataflowNode;
// ********** End ScriptStruct FGetCurveAttributesDataflowNode *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_GetGroomAttributesNodes_h

// ********** Begin Enum EGroomAttributeType *******************************************************
#define FOREACH_ENUM_EGROOMATTRIBUTETYPE(op) \
	op(EGroomAttributeType::KinematicWeights) \
	op(EGroomAttributeType::BoneIndices) \
	op(EGroomAttributeType::BoneWeights) \
	op(EGroomAttributeType::CurveParents) \
	op(EGroomAttributeType::CurveLods) 

enum class EGroomAttributeType : uint8;
template<> struct TIsUEnumClass<EGroomAttributeType> { enum { Value = true }; };
template<> HAIRSTRANDSDATAFLOW_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomAttributeType>();
// ********** End Enum EGroomAttributeType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
