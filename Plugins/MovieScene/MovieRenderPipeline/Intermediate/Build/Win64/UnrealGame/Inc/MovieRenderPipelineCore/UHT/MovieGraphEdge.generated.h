// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphEdge.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphEdge_generated_h
#error "MovieGraphEdge.generated.h already included, missing '#pragma once' in MovieGraphEdge.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphEdge_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphEdge **********************************************************
struct Z_Construct_UClass_UMovieGraphEdge_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEdge_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphEdge(); \
	friend struct ::Z_Construct_UClass_UMovieGraphEdge_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphEdge_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphEdge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphEdge_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphEdge)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphEdge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphEdge(UMovieGraphEdge&&) = delete; \
	UMovieGraphEdge(const UMovieGraphEdge&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphEdge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphEdge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphEdge) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphEdge();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h_13_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphEdge;

// ********** End Class UMovieGraphEdge ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
