// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDataType.h"

#ifdef OPTIMUSCORE_OptimusDataType_generated_h
#error "OptimusDataType.generated.h already included, missing '#pragma once' in OptimusDataType.h"
#endif
#define OPTIMUSCORE_OptimusDataType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusDataType **************************************************
struct Z_Construct_UScriptStruct_FOptimusDataType_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusDataType_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusDataType;
// ********** End ScriptStruct FOptimusDataType ****************************************************

// ********** Begin ScriptStruct FOptimusDataTypeRef ***********************************************
struct Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusDataTypeRef;
// ********** End ScriptStruct FOptimusDataTypeRef *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h

// ********** Begin Enum EOptimusDataTypeUsageFlags ************************************************
#define FOREACH_ENUM_EOPTIMUSDATATYPEUSAGEFLAGS(op) \
	op(EOptimusDataTypeUsageFlags::None) \
	op(EOptimusDataTypeUsageFlags::Resource) \
	op(EOptimusDataTypeUsageFlags::Variable) \
	op(EOptimusDataTypeUsageFlags::AnimAttributes) \
	op(EOptimusDataTypeUsageFlags::DataInterfaceOutput) \
	op(EOptimusDataTypeUsageFlags::PinType) \
	op(EOptimusDataTypeUsageFlags::PerBoneAnimAttribute) \
	op(EOptimusDataTypeUsageFlags::Property) 

enum class EOptimusDataTypeUsageFlags : uint8;
template<> struct TIsUEnumClass<EOptimusDataTypeUsageFlags> { enum { Value = true }; };
template<> OPTIMUSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusDataTypeUsageFlags>();
// ********** End Enum EOptimusDataTypeUsageFlags **************************************************

// ********** Begin Enum EOptimusDataTypeFlags *****************************************************
#define FOREACH_ENUM_EOPTIMUSDATATYPEFLAGS(op) \
	op(EOptimusDataTypeFlags::None) \
	op(EOptimusDataTypeFlags::IsStructType) \
	op(EOptimusDataTypeFlags::ShowElements) 

enum class EOptimusDataTypeFlags : uint8;
template<> struct TIsUEnumClass<EOptimusDataTypeFlags> { enum { Value = true }; };
template<> OPTIMUSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusDataTypeFlags>();
// ********** End Enum EOptimusDataTypeFlags *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
