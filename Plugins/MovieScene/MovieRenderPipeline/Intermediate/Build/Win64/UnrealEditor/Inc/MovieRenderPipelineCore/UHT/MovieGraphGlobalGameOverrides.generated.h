// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphGlobalGameOverrides.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphGlobalGameOverrides_generated_h
#error "MovieGraphGlobalGameOverrides.generated.h already included, missing '#pragma once' in MovieGraphGlobalGameOverrides.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphGlobalGameOverrides_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphGlobalGameOverridesNode ***************************************
struct Z_Construct_UClass_UMovieGraphGlobalGameOverridesNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphGlobalGameOverridesNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalGameOverrides_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphGlobalGameOverridesNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphGlobalGameOverridesNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphGlobalGameOverridesNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphGlobalGameOverridesNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphGlobalGameOverridesNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphGlobalGameOverridesNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalGameOverrides_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphGlobalGameOverridesNode(UMovieGraphGlobalGameOverridesNode&&) = delete; \
	UMovieGraphGlobalGameOverridesNode(const UMovieGraphGlobalGameOverridesNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphGlobalGameOverridesNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphGlobalGameOverridesNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphGlobalGameOverridesNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphGlobalGameOverridesNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalGameOverrides_h_24_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalGameOverrides_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalGameOverrides_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalGameOverrides_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphGlobalGameOverridesNode;

// ********** End Class UMovieGraphGlobalGameOverridesNode *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGlobalGameOverrides_h

// ********** Begin Enum EMovieGraphScalabilityQualityLevel ****************************************
#define FOREACH_ENUM_EMOVIEGRAPHSCALABILITYQUALITYLEVEL(op) \
	op(EMovieGraphScalabilityQualityLevel::Low) \
	op(EMovieGraphScalabilityQualityLevel::Medium) \
	op(EMovieGraphScalabilityQualityLevel::High) \
	op(EMovieGraphScalabilityQualityLevel::Epic) \
	op(EMovieGraphScalabilityQualityLevel::Cinematic) 

enum class EMovieGraphScalabilityQualityLevel : uint8;
template<> struct TIsUEnumClass<EMovieGraphScalabilityQualityLevel> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphScalabilityQualityLevel>();
// ********** End Enum EMovieGraphScalabilityQualityLevel ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
