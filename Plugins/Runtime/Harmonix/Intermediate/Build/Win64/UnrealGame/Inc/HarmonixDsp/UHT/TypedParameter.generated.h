// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/Containers/TypedParameter.h"

#ifdef HARMONIXDSP_TypedParameter_generated_h
#error "TypedParameter.generated.h already included, missing '#pragma once' in TypedParameter.h"
#endif
#define HARMONIXDSP_TypedParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTypedParameter ***************************************************
struct Z_Construct_UScriptStruct_FTypedParameter_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Containers_TypedParameter_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTypedParameter_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FTypedParameter;
// ********** End ScriptStruct FTypedParameter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Containers_TypedParameter_h

// ********** Begin Enum EParameterType ************************************************************
#define FOREACH_ENUM_EPARAMETERTYPE(op) \
	op(EParameterType::Bool) \
	op(EParameterType::Double) \
	op(EParameterType::Float) \
	op(EParameterType::Int8) \
	op(EParameterType::Int16) \
	op(EParameterType::Int32) \
	op(EParameterType::Int64) \
	op(EParameterType::Name) \
	op(EParameterType::String) \
	op(EParameterType::UInt8) \
	op(EParameterType::UInt16) \
	op(EParameterType::UInt32) \
	op(EParameterType::UInt64) \
	op(EParameterType::Num) \
	op(EParameterType::Invalid) 

enum class EParameterType : uint8;
template<> struct TIsUEnumClass<EParameterType> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EParameterType>();
// ********** End Enum EParameterType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
