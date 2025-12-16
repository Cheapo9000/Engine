// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphPathTracerPassNode.h"

#ifdef MOVIERENDERPIPELINERENDERPASSES_MovieGraphPathTracerPassNode_generated_h
#error "MovieGraphPathTracerPassNode.generated.h already included, missing '#pragma once' in MovieGraphPathTracerPassNode.h"
#endif
#define MOVIERENDERPIPELINERENDERPASSES_MovieGraphPathTracerPassNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphPathTracerRenderPassNode **************************************
struct Z_Construct_UClass_UMovieGraphPathTracerRenderPassNode_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMovieGraphPathTracerRenderPassNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphPathTracerPassNode_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphPathTracerRenderPassNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphPathTracerRenderPassNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMovieGraphPathTracerRenderPassNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphPathTracerRenderPassNode, UMovieGraphImagePassBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMovieGraphPathTracerRenderPassNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphPathTracerRenderPassNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphPathTracerPassNode_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphPathTracerRenderPassNode(UMovieGraphPathTracerRenderPassNode&&) = delete; \
	UMovieGraphPathTracerRenderPassNode(const UMovieGraphPathTracerRenderPassNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMovieGraphPathTracerRenderPassNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphPathTracerRenderPassNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphPathTracerRenderPassNode) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMovieGraphPathTracerRenderPassNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphPathTracerPassNode_h_32_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphPathTracerPassNode_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphPathTracerPassNode_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphPathTracerPassNode_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphPathTracerRenderPassNode;

// ********** End Class UMovieGraphPathTracerRenderPassNode ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphPathTracerPassNode_h

// ********** Begin Enum EMovieGraphPathTracerDenoiserType *****************************************
#define FOREACH_ENUM_EMOVIEGRAPHPATHTRACERDENOISERTYPE(op) \
	op(EMovieGraphPathTracerDenoiserType::Spatial) \
	op(EMovieGraphPathTracerDenoiserType::Temporal) 

enum class EMovieGraphPathTracerDenoiserType : uint8;
template<> struct TIsUEnumClass<EMovieGraphPathTracerDenoiserType> { enum { Value = true }; };
template<> MOVIERENDERPIPELINERENDERPASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphPathTracerDenoiserType>();
// ********** End Enum EMovieGraphPathTracerDenoiserType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
