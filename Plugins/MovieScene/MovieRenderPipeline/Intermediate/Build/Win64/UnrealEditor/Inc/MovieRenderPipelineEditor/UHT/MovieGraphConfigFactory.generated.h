// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphConfigFactory.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MovieGraphConfigFactory_generated_h
#error "MovieGraphConfigFactory.generated.h already included, missing '#pragma once' in MovieGraphConfigFactory.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MovieGraphConfigFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphConfigFactory *************************************************
struct Z_Construct_UClass_UMovieGraphConfigFactory_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieGraphConfigFactory_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConfigFactory(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConfigFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMovieGraphConfigFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConfigFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMovieGraphConfigFactory_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConfigFactory)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConfigFactory(UMovieGraphConfigFactory&&) = delete; \
	UMovieGraphConfigFactory(const UMovieGraphConfigFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINEEDITOR_API, UMovieGraphConfigFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConfigFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConfigFactory) \
	MOVIERENDERPIPELINEEDITOR_API virtual ~UMovieGraphConfigFactory();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConfigFactory;

// ********** End Class UMovieGraphConfigFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
