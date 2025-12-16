// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphMP4EncoderNode.h"

#ifdef MOVIERENDERPIPELINEMP4ENCODER_MovieGraphMP4EncoderNode_generated_h
#error "MovieGraphMP4EncoderNode.generated.h already included, missing '#pragma once' in MovieGraphMP4EncoderNode.h"
#endif
#define MOVIERENDERPIPELINEMP4ENCODER_MovieGraphMP4EncoderNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphMP4EncoderNode ************************************************
struct Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics;
MOVIERENDERPIPELINEMP4ENCODER_API UClass* Z_Construct_UClass_UMovieGraphMP4EncoderNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphMP4EncoderNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEMP4ENCODER_API UClass* ::Z_Construct_UClass_UMovieGraphMP4EncoderNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphMP4EncoderNode, UMovieGraphVideoOutputNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineMP4Encoder"), Z_Construct_UClass_UMovieGraphMP4EncoderNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphMP4EncoderNode) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieGraphMP4EncoderNode*>(this); }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphMP4EncoderNode(UMovieGraphMP4EncoderNode&&) = delete; \
	UMovieGraphMP4EncoderNode(const UMovieGraphMP4EncoderNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINEMP4ENCODER_API, UMovieGraphMP4EncoderNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphMP4EncoderNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphMP4EncoderNode) \
	MOVIERENDERPIPELINEMP4ENCODER_API virtual ~UMovieGraphMP4EncoderNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h_14_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphMP4EncoderNode;

// ********** End Class UMovieGraphMP4EncoderNode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
