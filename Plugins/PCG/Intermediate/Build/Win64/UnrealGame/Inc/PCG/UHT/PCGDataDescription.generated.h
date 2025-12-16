// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/PCGDataDescription.h"

#ifdef PCG_PCGDataDescription_generated_h
#error "PCGDataDescription.generated.h already included, missing '#pragma once' in PCGDataDescription.h"
#endif
#define PCG_PCGDataDescription_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGKernelAttributeKey ********************************************
struct Z_Construct_UScriptStruct_FPCGKernelAttributeKey_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataDescription_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGKernelAttributeKey_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGKernelAttributeKey;
// ********** End ScriptStruct FPCGKernelAttributeKey **********************************************

// ********** Begin ScriptStruct FPCGKernelAttributeTable ******************************************
struct Z_Construct_UScriptStruct_FPCGKernelAttributeTable_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataDescription_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGKernelAttributeTable_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGKernelAttributeTable;
// ********** End ScriptStruct FPCGKernelAttributeTable ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataDescription_h

// ********** Begin Enum EPCGKernelAttributeType ***************************************************
#define FOREACH_ENUM_EPCGKERNELATTRIBUTETYPE(op) \
	op(EPCGKernelAttributeType::Bool) \
	op(EPCGKernelAttributeType::Int) \
	op(EPCGKernelAttributeType::Float) \
	op(EPCGKernelAttributeType::Float2) \
	op(EPCGKernelAttributeType::Float3) \
	op(EPCGKernelAttributeType::Float4) \
	op(EPCGKernelAttributeType::Rotator) \
	op(EPCGKernelAttributeType::Quat) \
	op(EPCGKernelAttributeType::Transform) \
	op(EPCGKernelAttributeType::StringKey) \
	op(EPCGKernelAttributeType::Name) \
	op(EPCGKernelAttributeType::Invalid) 

enum class EPCGKernelAttributeType : uint8;
template<> struct TIsUEnumClass<EPCGKernelAttributeType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGKernelAttributeType>();
// ********** End Enum EPCGKernelAttributeType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
