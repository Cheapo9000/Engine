// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGContext.h"

#ifdef PCG_PCGContext_generated_h
#error "PCGContext.generated.h already included, missing '#pragma once' in PCGContext.h"
#endif
#define PCG_PCGContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGBlueprintContextHandle ****************************************
struct Z_Construct_UScriptStruct_FPCGBlueprintContextHandle_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGContext_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGBlueprintContextHandle_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGBlueprintContextHandle;
// ********** End ScriptStruct FPCGBlueprintContextHandle ******************************************

// ********** Begin ScriptStruct FPCGContext *******************************************************
struct Z_Construct_UScriptStruct_FPCGContext_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGContext_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGContext_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGContext;
// ********** End ScriptStruct FPCGContext *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGContext_h

// ********** Begin Enum EPCGExecutionPhase ********************************************************
#define FOREACH_ENUM_EPCGEXECUTIONPHASE(op) \
	op(EPCGExecutionPhase::NotExecuted) \
	op(EPCGExecutionPhase::PrepareData) \
	op(EPCGExecutionPhase::Execute) \
	op(EPCGExecutionPhase::PostExecute) \
	op(EPCGExecutionPhase::Done) 

enum class EPCGExecutionPhase : uint8;
template<> struct TIsUEnumClass<EPCGExecutionPhase> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExecutionPhase>();
// ********** End Enum EPCGExecutionPhase **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
