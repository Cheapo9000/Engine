// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphSchema.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MovieGraphSchema_generated_h
#error "MovieGraphSchema.generated.h already included, missing '#pragma once' in MovieGraphSchema.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MovieGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphSchema ********************************************************
struct Z_Construct_UClass_UMovieGraphSchema_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieGraphSchema_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphSchema(); \
	friend struct ::Z_Construct_UClass_UMovieGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMovieGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMovieGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphSchema)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphSchema(UMovieGraphSchema&&) = delete; \
	UMovieGraphSchema(const UMovieGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphSchema) \
	NO_API virtual ~UMovieGraphSchema();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphSchema;

// ********** End Class UMovieGraphSchema **********************************************************

// ********** Begin ScriptStruct FMovieGraphSchemaAction *******************************************
struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics; \
	MOVIERENDERPIPELINEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FMovieGraphSchemaAction;
// ********** End ScriptStruct FMovieGraphSchemaAction *********************************************

// ********** Begin ScriptStruct FMovieGraphSchemaAction_NewNode ***********************************
struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics; \
	MOVIERENDERPIPELINEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieGraphSchemaAction Super;


struct FMovieGraphSchemaAction_NewNode;
// ********** End ScriptStruct FMovieGraphSchemaAction_NewNode *************************************

// ********** Begin ScriptStruct FMovieGraphSchemaAction_NewVariableNode ***************************
struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics; \
	MOVIERENDERPIPELINEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieGraphSchemaAction Super;


struct FMovieGraphSchemaAction_NewVariableNode;
// ********** End ScriptStruct FMovieGraphSchemaAction_NewVariableNode *****************************

// ********** Begin ScriptStruct FMovieGraphSchemaAction_NewComment ********************************
struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_183_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics; \
	MOVIERENDERPIPELINEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieGraphSchemaAction Super;


struct FMovieGraphSchemaAction_NewComment;
// ********** End ScriptStruct FMovieGraphSchemaAction_NewComment **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
