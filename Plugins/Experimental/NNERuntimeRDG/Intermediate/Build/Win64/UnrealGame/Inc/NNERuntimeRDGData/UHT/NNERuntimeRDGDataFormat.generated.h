// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeRDGDataFormat.h"

#ifdef NNERUNTIMERDGDATA_NNERuntimeRDGDataFormat_generated_h
#error "NNERuntimeRDGDataFormat.generated.h already included, missing '#pragma once' in NNERuntimeRDGDataFormat.h"
#endif
#define NNERUNTIMERDGDATA_NNERuntimeRDGDataFormat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNNERuntimeRDGDataAttributeDesc ***********************************
struct Z_Construct_UScriptStruct_FNNERuntimeRDGDataAttributeDesc_Statics;
#define FID_Engine_Plugins_Experimental_NNERuntimeRDG_Source_NNERuntimeRDGData_Internal_NNERuntimeRDGDataFormat_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNERuntimeRDGDataAttributeDesc_Statics; \
	NNERUNTIMERDGDATA_API static class UScriptStruct* StaticStruct();


struct FNNERuntimeRDGDataAttributeDesc;
// ********** End ScriptStruct FNNERuntimeRDGDataAttributeDesc *************************************

// ********** Begin ScriptStruct FNNERuntimeRDGDataOperatorDesc ************************************
struct Z_Construct_UScriptStruct_FNNERuntimeRDGDataOperatorDesc_Statics;
#define FID_Engine_Plugins_Experimental_NNERuntimeRDG_Source_NNERuntimeRDGData_Internal_NNERuntimeRDGDataFormat_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNERuntimeRDGDataOperatorDesc_Statics; \
	NNERUNTIMERDGDATA_API static class UScriptStruct* StaticStruct();


struct FNNERuntimeRDGDataOperatorDesc;
// ********** End ScriptStruct FNNERuntimeRDGDataOperatorDesc **************************************

// ********** Begin ScriptStruct FNNERuntimeRDGDataTensorDesc **************************************
struct Z_Construct_UScriptStruct_FNNERuntimeRDGDataTensorDesc_Statics;
#define FID_Engine_Plugins_Experimental_NNERuntimeRDG_Source_NNERuntimeRDGData_Internal_NNERuntimeRDGDataFormat_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNERuntimeRDGDataTensorDesc_Statics; \
	NNERUNTIMERDGDATA_API static class UScriptStruct* StaticStruct();


struct FNNERuntimeRDGDataTensorDesc;
// ********** End ScriptStruct FNNERuntimeRDGDataTensorDesc ****************************************

// ********** Begin ScriptStruct FNNERuntimeRDGDataModelFormat *************************************
struct Z_Construct_UScriptStruct_FNNERuntimeRDGDataModelFormat_Statics;
#define FID_Engine_Plugins_Experimental_NNERuntimeRDG_Source_NNERuntimeRDGData_Internal_NNERuntimeRDGDataFormat_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNERuntimeRDGDataModelFormat_Statics; \
	NNERUNTIMERDGDATA_API static class UScriptStruct* StaticStruct();


struct FNNERuntimeRDGDataModelFormat;
// ********** End ScriptStruct FNNERuntimeRDGDataModelFormat ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNERuntimeRDG_Source_NNERuntimeRDGData_Internal_NNERuntimeRDGDataFormat_h

// ********** Begin Enum ENNERuntimeRDGDataTensorType **********************************************
#define FOREACH_ENUM_ENNERUNTIMERDGDATATENSORTYPE(op) \
	op(ENNERuntimeRDGDataTensorType::None) \
	op(ENNERuntimeRDGDataTensorType::Input) \
	op(ENNERuntimeRDGDataTensorType::Output) \
	op(ENNERuntimeRDGDataTensorType::Intermediate) \
	op(ENNERuntimeRDGDataTensorType::Initializer) \
	op(ENNERuntimeRDGDataTensorType::Empty) \
	op(ENNERuntimeRDGDataTensorType::NUM) 

enum class ENNERuntimeRDGDataTensorType : uint8;
template<> struct TIsUEnumClass<ENNERuntimeRDGDataTensorType> { enum { Value = true }; };
template<> NNERUNTIMERDGDATA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENNERuntimeRDGDataTensorType>();
// ********** End Enum ENNERuntimeRDGDataTensorType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
