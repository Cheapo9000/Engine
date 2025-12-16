// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Renderers/MovieGraphShowFlags.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphShowFlags_generated_h
#error "MovieGraphShowFlags.generated.h already included, missing '#pragma once' in MovieGraphShowFlags.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphShowFlags_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphShowFlags *****************************************************
struct Z_Construct_UClass_UMovieGraphShowFlags_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphShowFlags_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Renderers_MovieGraphShowFlags_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphShowFlags(); \
	friend struct ::Z_Construct_UClass_UMovieGraphShowFlags_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphShowFlags_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphShowFlags, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphShowFlags_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphShowFlags) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieGraphShowFlags*>(this); }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Renderers_MovieGraphShowFlags_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphShowFlags(UMovieGraphShowFlags&&) = delete; \
	UMovieGraphShowFlags(const UMovieGraphShowFlags&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphShowFlags); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphShowFlags); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphShowFlags) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphShowFlags();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Renderers_MovieGraphShowFlags_h_19_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Renderers_MovieGraphShowFlags_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Renderers_MovieGraphShowFlags_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Renderers_MovieGraphShowFlags_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphShowFlags;

// ********** End Class UMovieGraphShowFlags *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Renderers_MovieGraphShowFlags_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
