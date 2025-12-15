// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JsonObjectGraph/Stringify.h"

#ifdef JSONOBJECTGRAPH_Stringify_generated_h
#error "Stringify.generated.h already included, missing '#pragma once' in Stringify.h"
#endif
#define JSONOBJECTGRAPH_Stringify_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FJsonStringifyOptions *********************************************
struct Z_Construct_UScriptStruct_FJsonStringifyOptions_Statics;
#define FID_Engine_Source_Runtime_Experimental_JsonObjectGraph_Public_JsonObjectGraph_Stringify_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FJsonStringifyOptions_Statics; \
	JSONOBJECTGRAPH_API static class UScriptStruct* StaticStruct();


struct FJsonStringifyOptions;
// ********** End ScriptStruct FJsonStringifyOptions ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_JsonObjectGraph_Public_JsonObjectGraph_Stringify_h

// ********** Begin Enum EJsonStringifyFlags *******************************************************
#define FOREACH_ENUM_EJSONSTRINGIFYFLAGS(op) \
	op(EJsonStringifyFlags::Default) \
	op(EJsonStringifyFlags::FilterEditorOnlyData) \
	op(EJsonStringifyFlags::DisableDeltaEncoding) 

enum class EJsonStringifyFlags : uint8;
template<> struct TIsUEnumClass<EJsonStringifyFlags> { enum { Value = true }; };
template<> JSONOBJECTGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EJsonStringifyFlags>();
// ********** End Enum EJsonStringifyFlags *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
