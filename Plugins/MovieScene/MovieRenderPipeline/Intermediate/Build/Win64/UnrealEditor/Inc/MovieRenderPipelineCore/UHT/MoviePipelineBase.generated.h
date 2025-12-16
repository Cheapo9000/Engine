// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineBase.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineBase_generated_h
#error "MoviePipelineBase.generated.h already included, missing '#pragma once' in MoviePipelineBase.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieRenderPipelineState : uint8;
struct FMoviePipelineOutputData;

// ********** Begin Delegate FMoviePipelineWorkFinished ********************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_9_DELEGATE \
MOVIERENDERPIPELINECORE_API void FMoviePipelineWorkFinished_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineWorkFinished, FMoviePipelineOutputData Results);


// ********** End Delegate FMoviePipelineWorkFinished **********************************************

// ********** Begin Class UMoviePipelineBase *******************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPipelineState); \
	DECLARE_FUNCTION(execIsShutdownRequested); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execRequestShutdown);


struct Z_Construct_UClass_UMoviePipelineBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineBase(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineBase_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMoviePipelineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineBase(UMoviePipelineBase&&) = delete; \
	UMoviePipelineBase(const UMoviePipelineBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_11_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineBase;

// ********** End Class UMoviePipelineBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
