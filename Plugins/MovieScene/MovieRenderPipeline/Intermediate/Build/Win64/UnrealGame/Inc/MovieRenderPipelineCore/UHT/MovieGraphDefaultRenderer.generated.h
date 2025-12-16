// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphDefaultRenderer.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphDefaultRenderer_generated_h
#error "MovieGraphDefaultRenderer.generated.h already included, missing '#pragma once' in MovieGraphDefaultRenderer.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphDefaultRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphDefaultRenderer ***********************************************
struct Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDefaultRenderer_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphDefaultRenderer(); \
	friend struct ::Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphDefaultRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphDefaultRenderer, UMovieGraphRendererBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphDefaultRenderer_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphDefaultRenderer)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphDefaultRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphDefaultRenderer(UMovieGraphDefaultRenderer&&) = delete; \
	UMovieGraphDefaultRenderer(const UMovieGraphDefaultRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphDefaultRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphDefaultRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphDefaultRenderer) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphDefaultRenderer();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_298_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_301_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphDefaultRenderer;

// ********** End Class UMovieGraphDefaultRenderer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
