// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Traits/ModifyCurveTrait.h"

#ifdef UAFANIMGRAPH_ModifyCurveTrait_generated_h
#error "ModifyCurveTrait.generated.h already included, missing '#pragma once' in ModifyCurveTrait.h"
#endif
#define UAFANIMGRAPH_ModifyCurveTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModifyCurveParameters ********************************************
struct Z_Construct_UScriptStruct_FModifyCurveParameters_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Traits_ModifyCurveTrait_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModifyCurveParameters_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct();


struct FModifyCurveParameters;
// ********** End ScriptStruct FModifyCurveParameters **********************************************

// ********** Begin ScriptStruct FAnimNextModifyCurveTraitSharedData *******************************
struct Z_Construct_UScriptStruct_FAnimNextModifyCurveTraitSharedData_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Traits_ModifyCurveTrait_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextModifyCurveTraitSharedData_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextTraitSharedData Super;


struct FAnimNextModifyCurveTraitSharedData;
// ********** End ScriptStruct FAnimNextModifyCurveTraitSharedData *********************************

// ********** Begin ScriptStruct FModifyCurveTask **************************************************
struct Z_Construct_UScriptStruct_FModifyCurveTask_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Traits_ModifyCurveTrait_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModifyCurveTask_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextEvaluationTask Super;


struct FModifyCurveTask;
// ********** End ScriptStruct FModifyCurveTask ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Traits_ModifyCurveTrait_h

// ********** Begin Enum EAnimNext_ModifyCurveApplyMode ********************************************
#define FOREACH_ENUM_EANIMNEXT_MODIFYCURVEAPPLYMODE(op) \
	op(EAnimNext_ModifyCurveApplyMode::Add) \
	op(EAnimNext_ModifyCurveApplyMode::Scale) \
	op(EAnimNext_ModifyCurveApplyMode::Blend) 

enum class EAnimNext_ModifyCurveApplyMode : uint8;
template<> struct TIsUEnumClass<EAnimNext_ModifyCurveApplyMode> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNext_ModifyCurveApplyMode>();
// ********** End Enum EAnimNext_ModifyCurveApplyMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
