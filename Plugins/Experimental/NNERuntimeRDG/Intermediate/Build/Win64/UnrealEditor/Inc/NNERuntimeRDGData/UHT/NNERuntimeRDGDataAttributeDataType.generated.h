// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeRDGDataAttributeDataType.h"

#ifdef NNERUNTIMERDGDATA_NNERuntimeRDGDataAttributeDataType_generated_h
#error "NNERuntimeRDGDataAttributeDataType.generated.h already included, missing '#pragma once' in NNERuntimeRDGDataAttributeDataType.h"
#endif
#define NNERUNTIMERDGDATA_NNERuntimeRDGDataAttributeDataType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNERuntimeRDG_Source_NNERuntimeRDGData_Internal_NNERuntimeRDGDataAttributeDataType_h

// ********** Begin Enum ENNERuntimeRDGDataAttributeDataType ***************************************
#define FOREACH_ENUM_ENNERUNTIMERDGDATAATTRIBUTEDATATYPE(op) \
	op(ENNERuntimeRDGDataAttributeDataType::None) \
	op(ENNERuntimeRDGDataAttributeDataType::Float) \
	op(ENNERuntimeRDGDataAttributeDataType::FloatArray) \
	op(ENNERuntimeRDGDataAttributeDataType::Int32) \
	op(ENNERuntimeRDGDataAttributeDataType::Int32Array) \
	op(ENNERuntimeRDGDataAttributeDataType::String) \
	op(ENNERuntimeRDGDataAttributeDataType::StringArray) \
	op(ENNERuntimeRDGDataAttributeDataType::Tensor) \
	op(ENNERuntimeRDGDataAttributeDataType::TensorArray) 

enum class ENNERuntimeRDGDataAttributeDataType : uint8;
template<> struct TIsUEnumClass<ENNERuntimeRDGDataAttributeDataType> { enum { Value = true }; };
template<> NNERUNTIMERDGDATA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENNERuntimeRDGDataAttributeDataType>();
// ********** End Enum ENNERuntimeRDGDataAttributeDataType *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
