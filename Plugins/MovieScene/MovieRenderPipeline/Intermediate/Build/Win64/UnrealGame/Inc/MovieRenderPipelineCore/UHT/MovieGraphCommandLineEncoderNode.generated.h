// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphCommandLineEncoderNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphCommandLineEncoderNode_generated_h
#error "MovieGraphCommandLineEncoderNode.generated.h already included, missing '#pragma once' in MovieGraphCommandLineEncoderNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphCommandLineEncoderNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphCommandLineEncoderNode ****************************************
struct Z_Construct_UClass_UMovieGraphCommandLineEncoderNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphCommandLineEncoderNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCommandLineEncoderNode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphCommandLineEncoderNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphCommandLineEncoderNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphCommandLineEncoderNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphCommandLineEncoderNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphCommandLineEncoderNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphCommandLineEncoderNode) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieGraphCommandLineEncoderNode*>(this); }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCommandLineEncoderNode_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphCommandLineEncoderNode(UMovieGraphCommandLineEncoderNode&&) = delete; \
	UMovieGraphCommandLineEncoderNode(const UMovieGraphCommandLineEncoderNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphCommandLineEncoderNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphCommandLineEncoderNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphCommandLineEncoderNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphCommandLineEncoderNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCommandLineEncoderNode_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCommandLineEncoderNode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCommandLineEncoderNode_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCommandLineEncoderNode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphCommandLineEncoderNode;

// ********** End Class UMovieGraphCommandLineEncoderNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCommandLineEncoderNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
