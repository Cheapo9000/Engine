// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineVideoOutputBase.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineVideoOutputBase_generated_h
#error "MoviePipelineVideoOutputBase.generated.h already included, missing '#pragma once' in MoviePipelineVideoOutputBase.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineVideoOutputBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineVideoOutputBase ********************************************
struct Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineVideoOutputBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineVideoOutputBase(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineVideoOutputBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineVideoOutputBase, UMoviePipelineOutputBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineVideoOutputBase_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineVideoOutputBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineVideoOutputBase(UMoviePipelineVideoOutputBase&&) = delete; \
	UMoviePipelineVideoOutputBase(const UMoviePipelineVideoOutputBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineVideoOutputBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineVideoOutputBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineVideoOutputBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineVideoOutputBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_76_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineVideoOutputBase;

// ********** End Class UMoviePipelineVideoOutputBase **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
