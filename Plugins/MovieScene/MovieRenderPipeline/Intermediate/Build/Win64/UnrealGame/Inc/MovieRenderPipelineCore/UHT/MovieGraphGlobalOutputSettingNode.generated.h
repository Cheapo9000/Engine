// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphGlobalOutputSettingNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphGlobalOutputSettingNode_generated_h
#error "MovieGraphGlobalOutputSettingNode.generated.h already included, missing '#pragma once' in MovieGraphGlobalOutputSettingNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphGlobalOutputSettingNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieGraphVersioningSettings *************************************
struct Z_Construct_UScriptStruct_FMovieGraphVersioningSettings_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalOutputSettingNode_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphVersioningSettings_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphVersioningSettings;
// ********** End ScriptStruct FMovieGraphVersioningSettings ***************************************

// ********** Begin ScriptStruct FMovieGraphSequencePlaybackRangeBound *****************************
struct Z_Construct_UScriptStruct_FMovieGraphSequencePlaybackRangeBound_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalOutputSettingNode_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphSequencePlaybackRangeBound_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphSequencePlaybackRangeBound;
// ********** End ScriptStruct FMovieGraphSequencePlaybackRangeBound *******************************

// ********** Begin Class UMovieGraphGlobalOutputSettingNode ***************************************
struct Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalOutputSettingNode_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphGlobalOutputSettingNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphGlobalOutputSettingNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphGlobalOutputSettingNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalOutputSettingNode_h_116_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphGlobalOutputSettingNode(UMovieGraphGlobalOutputSettingNode&&) = delete; \
	UMovieGraphGlobalOutputSettingNode(const UMovieGraphGlobalOutputSettingNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphGlobalOutputSettingNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphGlobalOutputSettingNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphGlobalOutputSettingNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphGlobalOutputSettingNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalOutputSettingNode_h_113_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalOutputSettingNode_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalOutputSettingNode_h_116_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalOutputSettingNode_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphGlobalOutputSettingNode;

// ********** End Class UMovieGraphGlobalOutputSettingNode *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalOutputSettingNode_h

// ********** Begin Enum EMovieGraphSequenceRangeType **********************************************
#define FOREACH_ENUM_EMOVIEGRAPHSEQUENCERANGETYPE(op) \
	op(EMovieGraphSequenceRangeType::SequenceDefault) \
	op(EMovieGraphSequenceRangeType::Custom) 

enum class EMovieGraphSequenceRangeType : uint8;
template<> struct TIsUEnumClass<EMovieGraphSequenceRangeType> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphSequenceRangeType>();
// ********** End Enum EMovieGraphSequenceRangeType ************************************************

// ********** Begin Enum EMovieGraphAspectRatioAdaptBehavior ***************************************
#define FOREACH_ENUM_EMOVIEGRAPHASPECTRATIOADAPTBEHAVIOR(op) \
	op(EMovieGraphAspectRatioAdaptBehavior::Disabled) \
	op(EMovieGraphAspectRatioAdaptBehavior::Automatic) \
	op(EMovieGraphAspectRatioAdaptBehavior::ScaleToWidth) \
	op(EMovieGraphAspectRatioAdaptBehavior::ScaleToHeight) 

enum class EMovieGraphAspectRatioAdaptBehavior : uint8;
template<> struct TIsUEnumClass<EMovieGraphAspectRatioAdaptBehavior> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphAspectRatioAdaptBehavior>();
// ********** End Enum EMovieGraphAspectRatioAdaptBehavior *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
