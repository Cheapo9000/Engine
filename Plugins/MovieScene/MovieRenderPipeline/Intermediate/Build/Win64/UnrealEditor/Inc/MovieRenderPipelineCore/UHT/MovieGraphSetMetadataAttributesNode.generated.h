// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphSetMetadataAttributesNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphSetMetadataAttributesNode_generated_h
#error "MovieGraphSetMetadataAttributesNode.generated.h already included, missing '#pragma once' in MovieGraphSetMetadataAttributesNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphSetMetadataAttributesNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieGraphMetadataAttribute **************************************
struct Z_Construct_UScriptStruct_FMovieGraphMetadataAttribute_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphMetadataAttribute_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphMetadataAttribute;
// ********** End ScriptStruct FMovieGraphMetadataAttribute ****************************************

// ********** Begin Class UMovieGraphMetadataAttributeCollection ***********************************
struct Z_Construct_UClass_UMovieGraphMetadataAttributeCollection_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphMetadataAttributeCollection_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphMetadataAttributeCollection(); \
	friend struct ::Z_Construct_UClass_UMovieGraphMetadataAttributeCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphMetadataAttributeCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphMetadataAttributeCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphMetadataAttributeCollection_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphMetadataAttributeCollection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieGraphMetadataAttributeCollection*>(this); }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphMetadataAttributeCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphMetadataAttributeCollection(UMovieGraphMetadataAttributeCollection&&) = delete; \
	UMovieGraphMetadataAttributeCollection(const UMovieGraphMetadataAttributeCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphMetadataAttributeCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphMetadataAttributeCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphMetadataAttributeCollection) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphMetadataAttributeCollection();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_45_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphMetadataAttributeCollection;

// ********** End Class UMovieGraphMetadataAttributeCollection *************************************

// ********** Begin Class UMovieGraphSetMetadataAttributesNode *************************************
struct Z_Construct_UClass_UMovieGraphSetMetadataAttributesNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSetMetadataAttributesNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphSetMetadataAttributesNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphSetMetadataAttributesNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphSetMetadataAttributesNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphSetMetadataAttributesNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphSetMetadataAttributesNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphSetMetadataAttributesNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_67_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphSetMetadataAttributesNode(UMovieGraphSetMetadataAttributesNode&&) = delete; \
	UMovieGraphSetMetadataAttributesNode(const UMovieGraphSetMetadataAttributesNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphSetMetadataAttributesNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphSetMetadataAttributesNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphSetMetadataAttributesNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphSetMetadataAttributesNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_64_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphSetMetadataAttributesNode;

// ********** End Class UMovieGraphSetMetadataAttributesNode ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSetMetadataAttributesNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
