// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGProjectionParams.h"

#ifdef PCG_PCGProjectionParams_generated_h
#error "PCGProjectionParams.generated.h already included, missing '#pragma once' in PCGProjectionParams.h"
#endif
#define PCG_PCGProjectionParams_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGProjectionParams **********************************************
struct Z_Construct_UScriptStruct_FPCGProjectionParams_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionParams_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGProjectionParams_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGProjectionParams;
// ********** End ScriptStruct FPCGProjectionParams ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionParams_h

// ********** Begin Enum EPCGProjectionColorBlendMode **********************************************
#define FOREACH_ENUM_EPCGPROJECTIONCOLORBLENDMODE(op) \
	op(EPCGProjectionColorBlendMode::SourceValue) \
	op(EPCGProjectionColorBlendMode::TargetValue) \
	op(EPCGProjectionColorBlendMode::Add) \
	op(EPCGProjectionColorBlendMode::Subtract) \
	op(EPCGProjectionColorBlendMode::Multiply) 

enum class EPCGProjectionColorBlendMode : uint8;
template<> struct TIsUEnumClass<EPCGProjectionColorBlendMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGProjectionColorBlendMode>();
// ********** End Enum EPCGProjectionColorBlendMode ************************************************

// ********** Begin Enum EPCGProjectionTagMergeMode ************************************************
#define FOREACH_ENUM_EPCGPROJECTIONTAGMERGEMODE(op) \
	op(EPCGProjectionTagMergeMode::Source) \
	op(EPCGProjectionTagMergeMode::Target) \
	op(EPCGProjectionTagMergeMode::Both) 

enum class EPCGProjectionTagMergeMode : uint8;
template<> struct TIsUEnumClass<EPCGProjectionTagMergeMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGProjectionTagMergeMode>();
// ********** End Enum EPCGProjectionTagMergeMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
