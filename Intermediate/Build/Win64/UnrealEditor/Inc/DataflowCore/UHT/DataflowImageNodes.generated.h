// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowImageNodes.h"

#ifdef DATAFLOWCORE_DataflowImageNodes_generated_h
#error "DataflowImageNodes.generated.h already included, missing '#pragma once' in DataflowImageNodes.h"
#endif
#define DATAFLOWCORE_DataflowImageNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowImageFromColorNode ***************************************
struct Z_Construct_UScriptStruct_FDataflowImageFromColorNode_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImageNodes_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowImageFromColorNode_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FDataflowImageFromColorNode;
// ********** End ScriptStruct FDataflowImageFromColorNode *****************************************

// ********** Begin ScriptStruct FDataflowImageSplitChannelsNode ***********************************
struct Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImageNodes_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FDataflowImageSplitChannelsNode;
// ********** End ScriptStruct FDataflowImageSplitChannelsNode *************************************

// ********** Begin ScriptStruct FDataflowImageCombineChannelsNode *********************************
struct Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImageNodes_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FDataflowImageCombineChannelsNode;
// ********** End ScriptStruct FDataflowImageCombineChannelsNode ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImageNodes_h

// ********** Begin Enum EDataflowImageCombineResolutionOption *************************************
#define FOREACH_ENUM_EDATAFLOWIMAGECOMBINERESOLUTIONOPTION(op) \
	op(EDataflowImageCombineResolutionOption::Lowest) \
	op(EDataflowImageCombineResolutionOption::Highest) \
	op(EDataflowImageCombineResolutionOption::UserDefined) 

enum class EDataflowImageCombineResolutionOption : int32;
template<> struct TIsUEnumClass<EDataflowImageCombineResolutionOption> { enum { Value = true }; };
template<> DATAFLOWCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowImageCombineResolutionOption>();
// ********** End Enum EDataflowImageCombineResolutionOption ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
