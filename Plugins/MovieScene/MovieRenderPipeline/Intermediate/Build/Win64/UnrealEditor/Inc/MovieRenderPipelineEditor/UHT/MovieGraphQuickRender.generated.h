// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphQuickRender.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MovieGraphQuickRender_generated_h
#error "MovieGraphQuickRender.generated.h already included, missing '#pragma once' in MovieGraphQuickRender.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MovieGraphQuickRender_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieGraphQuickRenderModeSettings;
enum class EMovieGraphQuickRenderMode : uint8;

// ********** Begin Class UMovieGraphQuickRenderSubsystem ******************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphQuickRender_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenOutputDirectory); \
	DECLARE_FUNCTION(execCanPlayLastRender); \
	DECLARE_FUNCTION(execPlayLastRender); \
	DECLARE_FUNCTION(execBeginQuickRender);


struct Z_Construct_UClass_UMovieGraphQuickRenderSubsystem_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieGraphQuickRenderSubsystem_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphQuickRender_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphQuickRenderSubsystem(); \
	friend struct ::Z_Construct_UClass_UMovieGraphQuickRenderSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMovieGraphQuickRenderSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphQuickRenderSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMovieGraphQuickRenderSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphQuickRenderSubsystem)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphQuickRender_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINEEDITOR_API UMovieGraphQuickRenderSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphQuickRenderSubsystem(UMovieGraphQuickRenderSubsystem&&) = delete; \
	UMovieGraphQuickRenderSubsystem(const UMovieGraphQuickRenderSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINEEDITOR_API, UMovieGraphQuickRenderSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphQuickRenderSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphQuickRenderSubsystem) \
	MOVIERENDERPIPELINEEDITOR_API virtual ~UMovieGraphQuickRenderSubsystem();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphQuickRender_h_24_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphQuickRender_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphQuickRender_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphQuickRender_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphQuickRender_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphQuickRenderSubsystem;

// ********** End Class UMovieGraphQuickRenderSubsystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphQuickRender_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
