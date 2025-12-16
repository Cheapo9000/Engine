// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/PCGComputeCommon.h"

#ifdef PCG_PCGComputeCommon_generated_h
#error "PCGComputeCommon.generated.h already included, missing '#pragma once' in PCGComputeCommon.h"
#endif
#define PCG_PCGComputeCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGKernelPin *****************************************************
struct Z_Construct_UScriptStruct_FPCGKernelPin_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeCommon_h_194_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGKernelPin_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGKernelPin;
// ********** End ScriptStruct FPCGKernelPin *******************************************************

// ********** Begin ScriptStruct FPCGDataLabels ****************************************************
struct Z_Construct_UScriptStruct_FPCGDataLabels_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeCommon_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataLabels_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGDataLabels;
// ********** End ScriptStruct FPCGDataLabels ******************************************************

// ********** Begin ScriptStruct FPCGPinDataLabels *************************************************
struct Z_Construct_UScriptStruct_FPCGPinDataLabels_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeCommon_h_235_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPinDataLabels_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPinDataLabels;
// ********** End ScriptStruct FPCGPinDataLabels ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeCommon_h

// ********** Begin Enum EPCGExportMode ************************************************************
#define FOREACH_ENUM_EPCGEXPORTMODE(op) \
	op(EPCGExportMode::NoExport) \
	op(EPCGExportMode::ComputeGraphOutput) \
	op(EPCGExportMode::Inspection) \
	op(EPCGExportMode::DebugVisualization) 

enum class EPCGExportMode : uint8;
template<> struct TIsUEnumClass<EPCGExportMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExportMode>();
// ********** End Enum EPCGExportMode **************************************************************

// ********** Begin Enum EPCGElementDimension ******************************************************
#define FOREACH_ENUM_EPCGELEMENTDIMENSION(op) \
	op(EPCGElementDimension::One) \
	op(EPCGElementDimension::Two) \
	op(EPCGElementDimension::Three) \
	op(EPCGElementDimension::Four) 

enum class EPCGElementDimension : uint8;
template<> struct TIsUEnumClass<EPCGElementDimension> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGElementDimension>();
// ********** End Enum EPCGElementDimension ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
