// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusEditorGraph.h"

#ifdef OPTIMUSEDITOR_OptimusEditorGraph_generated_h
#error "OptimusEditorGraph.generated.h already included, missing '#pragma once' in OptimusEditorGraph.h"
#endif
#define OPTIMUSEDITOR_OptimusEditorGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusEditorGraph ******************************************************
struct Z_Construct_UClass_UOptimusEditorGraph_Statics;
OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusEditorGraph_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraph_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusEditorGraph(); \
	friend struct ::Z_Construct_UClass_UOptimusEditorGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSEDITOR_API UClass* ::Z_Construct_UClass_UOptimusEditorGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusEditorGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusEditor"), Z_Construct_UClass_UOptimusEditorGraph_NoRegister) \
	DECLARE_SERIALIZER(UOptimusEditorGraph)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraph_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusEditorGraph(UOptimusEditorGraph&&) = delete; \
	UOptimusEditorGraph(const UOptimusEditorGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusEditorGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusEditorGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusEditorGraph) \
	NO_API virtual ~UOptimusEditorGraph();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraph_h_19_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraph_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraph_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraph_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusEditorGraph;

// ********** End Class UOptimusEditorGraph ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
