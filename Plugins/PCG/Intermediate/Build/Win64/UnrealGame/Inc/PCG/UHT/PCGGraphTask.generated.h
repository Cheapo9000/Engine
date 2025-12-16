// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGGraphTask.h"

#ifdef PCG_PCGGraphTask_generated_h
#error "PCGGraphTask.generated.h already included, missing '#pragma once' in PCGGraphTask.h"
#endif
#define PCG_PCGGraphTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGGraphTaskInput ************************************************
struct Z_Construct_UScriptStruct_FPCGGraphTaskInput_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphTask_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGGraphTaskInput_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGGraphTaskInput;
// ********** End ScriptStruct FPCGGraphTaskInput **************************************************

// ********** Begin ScriptStruct FPCGGraphTask *****************************************************
struct Z_Construct_UScriptStruct_FPCGGraphTask_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphTask_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGGraphTask_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGGraphTask;
// ********** End ScriptStruct FPCGGraphTask *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphTask_h

// ********** Begin Enum EPCGElementSource *********************************************************
#define FOREACH_ENUM_EPCGELEMENTSOURCE(op) \
	op(EPCGElementSource::Trivial) \
	op(EPCGElementSource::TrivialPostGraph) \
	op(EPCGElementSource::Gather) \
	op(EPCGElementSource::FromNode) \
	op(EPCGElementSource::FromCookedSettings) 

enum class EPCGElementSource;
template<> struct TIsUEnumClass<EPCGElementSource> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGElementSource>();
// ********** End Enum EPCGElementSource ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
