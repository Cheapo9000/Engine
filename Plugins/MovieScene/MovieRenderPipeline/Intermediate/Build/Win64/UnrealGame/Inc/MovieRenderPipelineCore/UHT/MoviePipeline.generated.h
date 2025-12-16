// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipeline.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipeline_generated_h
#error "MoviePipeline.generated.h already included, missing '#pragma once' in MoviePipeline.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipeline;
class UMoviePipelineExecutorJob;
class UMoviePipelinePrimaryConfig;
class UTexture;
struct FDateTime;
struct FTimespan;

// ********** Begin Delegate FMoviePipelineFinished ************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_40_DELEGATE \
MOVIERENDERPIPELINECORE_API void FMoviePipelineFinished_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineFinished, UMoviePipeline* MoviePipeline, bool bFatalError);


// ********** End Delegate FMoviePipelineFinished **************************************************

// ********** Begin Class UMoviePipeline ***********************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoviePipelineFinishedImpl); \
	DECLARE_FUNCTION(execGetCurrentJob); \
	DECLARE_FUNCTION(execGetPreviewTexture); \
	DECLARE_FUNCTION(execGetPipelinePrimaryConfig); \
	DECLARE_FUNCTION(execSetInitializationTime); \
	DECLARE_FUNCTION(execGetInitializationTimeOffset); \
	DECLARE_FUNCTION(execGetInitializationTime); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UMoviePipeline_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipeline(); \
	friend struct ::Z_Construct_UClass_UMoviePipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipeline, UMoviePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipeline_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipeline)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipeline(UMoviePipeline&&) = delete; \
	UMoviePipeline(const UMoviePipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipeline) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipeline();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_42_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipeline;

// ********** End Class UMoviePipeline *************************************************************

// ********** Begin Class UMoviePipelineCustomTimeStep *********************************************
struct Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCustomTimeStep_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_453_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineCustomTimeStep(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineCustomTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineCustomTimeStep, UEngineCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineCustomTimeStep_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineCustomTimeStep)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_453_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineCustomTimeStep(UMoviePipelineCustomTimeStep&&) = delete; \
	UMoviePipelineCustomTimeStep(const UMoviePipelineCustomTimeStep&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineCustomTimeStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineCustomTimeStep) \
	NO_API virtual ~UMoviePipelineCustomTimeStep();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_450_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_453_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_453_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_453_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineCustomTimeStep;

// ********** End Class UMoviePipelineCustomTimeStep ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
