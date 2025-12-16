// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Traits/CallFunction.h"

#ifdef UAFANIMGRAPH_CallFunction_generated_h
#error "CallFunction.generated.h already included, missing '#pragma once' in CallFunction.h"
#endif
#define UAFANIMGRAPH_CallFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNextCallFunctionSharedData ***********************************
struct Z_Construct_UScriptStruct_FAnimNextCallFunctionSharedData_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Traits_CallFunction_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextCallFunctionSharedData_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextTraitSharedData Super;


struct FAnimNextCallFunctionSharedData;
// ********** End ScriptStruct FAnimNextCallFunctionSharedData *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Traits_CallFunction_h

// ********** Begin Enum EAnimNextCallFunctionCallSite *********************************************
#define FOREACH_ENUM_EANIMNEXTCALLFUNCTIONCALLSITE(op) \
	op(EAnimNextCallFunctionCallSite::BecomeRelevant) \
	op(EAnimNextCallFunctionCallSite::PreUpdate) \
	op(EAnimNextCallFunctionCallSite::PostUpdate) 

enum class EAnimNextCallFunctionCallSite : uint8;
template<> struct TIsUEnumClass<EAnimNextCallFunctionCallSite> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextCallFunctionCallSite>();
// ********** End Enum EAnimNextCallFunctionCallSite ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
