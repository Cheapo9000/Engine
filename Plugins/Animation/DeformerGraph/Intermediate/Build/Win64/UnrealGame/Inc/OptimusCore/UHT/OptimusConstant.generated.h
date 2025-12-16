// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusConstant.h"

#ifdef OPTIMUSCORE_OptimusConstant_generated_h
#error "OptimusConstant.generated.h already included, missing '#pragma once' in OptimusConstant.h"
#endif
#define OPTIMUSCORE_OptimusConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusConstantIdentifier ****************************************
struct Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusConstantIdentifier;
// ********** End ScriptStruct FOptimusConstantIdentifier ******************************************

// ********** Begin ScriptStruct FOptimusConstantDefinition ****************************************
struct Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusConstantDefinition;
// ********** End ScriptStruct FOptimusConstantDefinition ******************************************

// ********** Begin ScriptStruct FOptimusConstant **************************************************
struct Z_Construct_UScriptStruct_FOptimusConstant_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusConstant_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusConstant;
// ********** End ScriptStruct FOptimusConstant ****************************************************

// ********** Begin ScriptStruct FOptimusConstantIndex *********************************************
struct Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusConstantIndex;
// ********** End ScriptStruct FOptimusConstantIndex ***********************************************

// ********** Begin ScriptStruct FOptimusKernelConstantContainer ***********************************
struct Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusKernelConstantContainer;
// ********** End ScriptStruct FOptimusKernelConstantContainer *************************************

// ********** Begin ScriptStruct FOptimusConstantContainer *****************************************
struct Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusConstantContainer;
// ********** End ScriptStruct FOptimusConstantContainer *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h

// ********** Begin Enum EOptimusConstantType ******************************************************
#define FOREACH_ENUM_EOPTIMUSCONSTANTTYPE(op) \
	op(EOptimusConstantType::Input) \
	op(EOptimusConstantType::Output) 

enum class EOptimusConstantType;
template<> struct TIsUEnumClass<EOptimusConstantType> { enum { Value = true }; };
template<> OPTIMUSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusConstantType>();
// ********** End Enum EOptimusConstantType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
