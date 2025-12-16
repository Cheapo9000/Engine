// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphCameraNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphCameraNode_generated_h
#error "MovieGraphCameraNode.generated.h already included, missing '#pragma once' in MovieGraphCameraNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphCameraSettingNode *********************************************
struct Z_Construct_UClass_UMovieGraphCameraSettingNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphCameraSettingNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCameraNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphCameraSettingNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphCameraSettingNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphCameraSettingNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphCameraSettingNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphCameraSettingNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphCameraSettingNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCameraNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphCameraSettingNode(UMovieGraphCameraSettingNode&&) = delete; \
	UMovieGraphCameraSettingNode(const UMovieGraphCameraSettingNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphCameraSettingNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphCameraSettingNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphCameraSettingNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphCameraSettingNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCameraNode_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCameraNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCameraNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCameraNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphCameraSettingNode;

// ********** End Class UMovieGraphCameraSettingNode ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
