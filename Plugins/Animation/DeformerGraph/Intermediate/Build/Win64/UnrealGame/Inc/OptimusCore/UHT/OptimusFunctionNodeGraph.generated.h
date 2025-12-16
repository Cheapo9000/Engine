// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusFunctionNodeGraph.h"

#ifdef OPTIMUSCORE_OptimusFunctionNodeGraph_generated_h
#error "OptimusFunctionNodeGraph.generated.h already included, missing '#pragma once' in OptimusFunctionNodeGraph.h"
#endif
#define OPTIMUSCORE_OptimusFunctionNodeGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusFunctionGraphIdentifier ***********************************
struct Z_Construct_UScriptStruct_FOptimusFunctionGraphIdentifier_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusFunctionGraphIdentifier_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusFunctionGraphIdentifier;
// ********** End ScriptStruct FOptimusFunctionGraphIdentifier *************************************

// ********** Begin Class UOptimusFunctionNodeGraph ************************************************
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAccessSpecifierOptions);


struct Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusFunctionNodeGraph(); \
	friend struct ::Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusFunctionNodeGraph, UOptimusNodeSubGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister) \
	DECLARE_SERIALIZER(UOptimusFunctionNodeGraph)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusFunctionNodeGraph(UOptimusFunctionNodeGraph&&) = delete; \
	UOptimusFunctionNodeGraph(const UOptimusFunctionNodeGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusFunctionNodeGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusFunctionNodeGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusFunctionNodeGraph) \
	OPTIMUSCORE_API virtual ~UOptimusFunctionNodeGraph();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_36_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusFunctionNodeGraph;

// ********** End Class UOptimusFunctionNodeGraph **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
