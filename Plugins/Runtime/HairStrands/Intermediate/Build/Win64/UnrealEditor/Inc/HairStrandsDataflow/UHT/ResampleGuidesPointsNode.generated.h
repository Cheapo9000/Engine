// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResampleGuidesPointsNode.h"

#ifdef HAIRSTRANDSDATAFLOW_ResampleGuidesPointsNode_generated_h
#error "ResampleGuidesPointsNode.generated.h already included, missing '#pragma once' in ResampleGuidesPointsNode.h"
#endif
#define HAIRSTRANDSDATAFLOW_ResampleGuidesPointsNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FResampleGuidesPointsDataflowNode *********************************
struct Z_Construct_UScriptStruct_FResampleGuidesPointsDataflowNode_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_ResampleGuidesPointsNode_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FResampleGuidesPointsDataflowNode_Statics; \
	HAIRSTRANDSDATAFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FResampleGuidesPointsDataflowNode;
// ********** End ScriptStruct FResampleGuidesPointsDataflowNode ***********************************

// ********** Begin ScriptStruct FResampleCurvePointsDataflowNode **********************************
struct Z_Construct_UScriptStruct_FResampleCurvePointsDataflowNode_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_ResampleGuidesPointsNode_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FResampleCurvePointsDataflowNode_Statics; \
	HAIRSTRANDSDATAFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FResampleCurvePointsDataflowNode;
// ********** End ScriptStruct FResampleCurvePointsDataflowNode ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDataflow_Public_ResampleGuidesPointsNode_h

// ********** Begin Enum EGroomNumPoints ***********************************************************
#define FOREACH_ENUM_EGROOMNUMPOINTS(op) \
	op(EGroomNumPoints::Default) \
	op(EGroomNumPoints::Size4) \
	op(EGroomNumPoints::Size8) \
	op(EGroomNumPoints::Size16) \
	op(EGroomNumPoints::Size32) \
	op(EGroomNumPoints::Size64) 

enum class EGroomNumPoints : uint8;
template<> struct TIsUEnumClass<EGroomNumPoints> { enum { Value = true }; };
template<> HAIRSTRANDSDATAFLOW_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomNumPoints>();
// ********** End Enum EGroomNumPoints *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
