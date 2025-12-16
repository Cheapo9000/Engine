// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphBurnInWidget.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphBurnInWidget_generated_h
#error "MovieGraphBurnInWidget.generated.h already included, missing '#pragma once' in MovieGraphBurnInWidget.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphBurnInWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieGraphEvaluatedConfig;
class UMovieGraphPipeline;

// ********** Begin Class UMovieGraphBurnInWidget **************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMovieGraphBurnInWidget_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphBurnInWidget(); \
	friend struct ::Z_Construct_UClass_UMovieGraphBurnInWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphBurnInWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphBurnInWidget)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphBurnInWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphBurnInWidget(UMovieGraphBurnInWidget&&) = delete; \
	UMovieGraphBurnInWidget(const UMovieGraphBurnInWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphBurnInWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphBurnInWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphBurnInWidget) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphBurnInWidget();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_14_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphBurnInWidget;

// ********** End Class UMovieGraphBurnInWidget ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
