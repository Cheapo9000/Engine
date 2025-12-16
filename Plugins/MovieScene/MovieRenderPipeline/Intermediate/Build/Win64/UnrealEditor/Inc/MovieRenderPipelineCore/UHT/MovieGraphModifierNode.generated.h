// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphModifierNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphModifierNode_generated_h
#error "MovieGraphModifierNode.generated.h already included, missing '#pragma once' in MovieGraphModifierNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphModifierNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMovieGraphCollectionModifier;
class UMovieGraphModifierBase;

// ********** Begin Class UMovieGraphMergeableModifierContainer ************************************
struct Z_Construct_UClass_UMovieGraphMergeableModifierContainer_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphMergeableModifierContainer_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphMergeableModifierContainer(); \
	friend struct ::Z_Construct_UClass_UMovieGraphMergeableModifierContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphMergeableModifierContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphMergeableModifierContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphMergeableModifierContainer_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphMergeableModifierContainer) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieGraphMergeableModifierContainer*>(this); }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieGraphMergeableModifierContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphMergeableModifierContainer(UMovieGraphMergeableModifierContainer&&) = delete; \
	UMovieGraphMergeableModifierContainer(const UMovieGraphMergeableModifierContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieGraphMergeableModifierContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphMergeableModifierContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphMergeableModifierContainer) \
	NO_API virtual ~UMovieGraphMergeableModifierContainer();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_14_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphMergeableModifierContainer;

// ********** End Class UMovieGraphMergeableModifierContainer **************************************

// ********** Begin Interface UMovieGraphModifierNodeInterface *************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCollection); \
	DECLARE_FUNCTION(execAddCollection); \
	DECLARE_FUNCTION(execGetAllCollections); \
	DECLARE_FUNCTION(execSetCollectionEnabled); \
	DECLARE_FUNCTION(execIsCollectionEnabled); \
	DECLARE_FUNCTION(execSupportsCollections); \
	DECLARE_FUNCTION(execGetAllModifiers);


struct Z_Construct_UClass_UMovieGraphModifierNodeInterface_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphModifierNodeInterface_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphModifierNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphModifierNodeInterface(UMovieGraphModifierNodeInterface&&) = delete; \
	UMovieGraphModifierNodeInterface(const UMovieGraphModifierNodeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphModifierNodeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphModifierNodeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphModifierNodeInterface) \
	virtual ~UMovieGraphModifierNodeInterface() = default;


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_36_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieGraphModifierNodeInterface(); \
	friend struct ::Z_Construct_UClass_UMovieGraphModifierNodeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphModifierNodeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphModifierNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphModifierNodeInterface_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphModifierNodeInterface)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_36_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_36_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_36_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_36_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieGraphModifierNodeInterface() {} \
public: \
	typedef UMovieGraphModifierNodeInterface UClassType; \
	typedef IMovieGraphModifierNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_33_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_36_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphModifierNodeInterface;

// ********** End Interface UMovieGraphModifierNodeInterface ***************************************

// ********** Begin Class UMovieGraphModifierNode **************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCollections); \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execAddModifier); \
	DECLARE_FUNCTION(execGetModifiers); \
	DECLARE_FUNCTION(execGetModifier);


struct Z_Construct_UClass_UMovieGraphModifierNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphModifierNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphModifierNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphModifierNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphModifierNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphModifierNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphModifierNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphModifierNode) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieGraphModifierNode*>(this); }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_112_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphModifierNode(UMovieGraphModifierNode&&) = delete; \
	UMovieGraphModifierNode(const UMovieGraphModifierNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphModifierNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphModifierNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphModifierNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphModifierNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_109_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_112_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphModifierNode;

// ********** End Class UMovieGraphModifierNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
