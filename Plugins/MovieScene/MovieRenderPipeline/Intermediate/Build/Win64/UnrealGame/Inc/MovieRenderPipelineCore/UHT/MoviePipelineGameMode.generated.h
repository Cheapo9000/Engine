// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineGameMode.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineGameMode_generated_h
#error "MoviePipelineGameMode.generated.h already included, missing '#pragma once' in MoviePipelineGameMode.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMoviePipelineGameMode ***************************************************
struct Z_Construct_UClass_AMoviePipelineGameMode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_AMoviePipelineGameMode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoviePipelineGameMode(); \
	friend struct ::Z_Construct_UClass_AMoviePipelineGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_AMoviePipelineGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AMoviePipelineGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_AMoviePipelineGameMode_NoRegister) \
	DECLARE_SERIALIZER(AMoviePipelineGameMode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API AMoviePipelineGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMoviePipelineGameMode(AMoviePipelineGameMode&&) = delete; \
	AMoviePipelineGameMode(const AMoviePipelineGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, AMoviePipelineGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoviePipelineGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoviePipelineGameMode) \
	MOVIERENDERPIPELINECORE_API virtual ~AMoviePipelineGameMode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_9_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMoviePipelineGameMode;

// ********** End Class AMoviePipelineGameMode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
