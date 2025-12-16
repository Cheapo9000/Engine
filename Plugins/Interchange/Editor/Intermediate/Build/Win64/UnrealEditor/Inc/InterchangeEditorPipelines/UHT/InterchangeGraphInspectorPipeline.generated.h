// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGraphInspectorPipeline.h"

#ifdef INTERCHANGEEDITORPIPELINES_InterchangeGraphInspectorPipeline_generated_h
#error "InterchangeGraphInspectorPipeline.generated.h already included, missing '#pragma once' in InterchangeGraphInspectorPipeline.h"
#endif
#define INTERCHANGEEDITORPIPELINES_InterchangeGraphInspectorPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGraphInspectorPipeline ***************************************
struct Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics;
INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGraphInspectorPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGraphInspectorPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEEDITORPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeGraphInspectorPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGraphInspectorPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEditorPipelines"), Z_Construct_UClass_UInterchangeGraphInspectorPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGraphInspectorPipeline)


#define FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEEDITORPIPELINES_API UInterchangeGraphInspectorPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGraphInspectorPipeline(UInterchangeGraphInspectorPipeline&&) = delete; \
	UInterchangeGraphInspectorPipeline(const UInterchangeGraphInspectorPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEEDITORPIPELINES_API, UInterchangeGraphInspectorPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGraphInspectorPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGraphInspectorPipeline) \
	INTERCHANGEEDITORPIPELINES_API virtual ~UInterchangeGraphInspectorPipeline();


#define FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_20_PROLOG
#define FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGraphInspectorPipeline;

// ********** End Class UInterchangeGraphInspectorPipeline *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
