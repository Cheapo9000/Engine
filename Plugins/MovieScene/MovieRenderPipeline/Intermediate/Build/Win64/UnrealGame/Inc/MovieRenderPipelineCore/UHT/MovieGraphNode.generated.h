// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphNode_generated_h
#error "MovieGraphNode.generated.h already included, missing '#pragma once' in MovieGraphNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieGraphEvaluatedConfig;
class UMovieGraphPin;
class UMovieGraphSettingNode;
enum class EMovieGraphBranchRestriction : uint8;
enum class EMovieGraphPinQueryRequirement : uint8;
struct FMovieGraphPinProperties;
struct FMovieGraphPropertyInfo;

// ********** Begin ScriptStruct FMovieGraphPropertyInfo *******************************************
struct Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphPropertyInfo;
// ********** End ScriptStruct FMovieGraphPropertyInfo *********************************************

// ********** Begin ScriptStruct FMovieGraphTokenResolveContext ************************************
struct Z_Construct_UScriptStruct_FMovieGraphTokenResolveContext_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphTokenResolveContext_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphTokenResolveContext;
// ********** End ScriptStruct FMovieGraphTokenResolveContext **************************************

// ********** Begin Class UMovieGraphNode **********************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNodeValidationErrors); \
	DECLARE_FUNCTION(execIsDisabled); \
	DECLARE_FUNCTION(execSetDisabled); \
	DECLARE_FUNCTION(execCanBeDisabled); \
	DECLARE_FUNCTION(execGetBranchRestriction); \
	DECLARE_FUNCTION(execGetFirstConnectedOutputPin); \
	DECLARE_FUNCTION(execGetFirstConnectedInputPin); \
	DECLARE_FUNCTION(execGetOutputPin); \
	DECLARE_FUNCTION(execGetInputPin); \
	DECLARE_FUNCTION(execCanBeAddedByUser); \
	DECLARE_FUNCTION(execUnpromotePropertyFromPin); \
	DECLARE_FUNCTION(execPromotePropertyToPin); \
	DECLARE_FUNCTION(execTogglePromotePropertyToPin); \
	DECLARE_FUNCTION(execGetExposedProperties); \
	DECLARE_FUNCTION(execGetOverrideablePropertyInfo); \
	DECLARE_FUNCTION(execGetOutputPinProperties); \
	DECLARE_FUNCTION(execGetInputPinProperties); \
	DECLARE_FUNCTION(execGetOutputPins); \
	DECLARE_FUNCTION(execGetInputPins);


#if WITH_EDITOR
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetKeywords); \
	DECLARE_FUNCTION(execGetMenuCategory); \
	DECLARE_FUNCTION(execGetNodeTitle); \
	DECLARE_FUNCTION(execSetIsCommentBubbleVisible); \
	DECLARE_FUNCTION(execIsCommentBubbleVisible); \
	DECLARE_FUNCTION(execSetIsCommentBubblePinned); \
	DECLARE_FUNCTION(execIsCommentBubblePinned); \
	DECLARE_FUNCTION(execSetNodeComment); \
	DECLARE_FUNCTION(execGetNodeComment); \
	DECLARE_FUNCTION(execSetNodePosY); \
	DECLARE_FUNCTION(execSetNodePosX); \
	DECLARE_FUNCTION(execGetNodePosY); \
	DECLARE_FUNCTION(execGetNodePosX);
#else // WITH_EDITOR
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMovieGraphNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphNode(UMovieGraphNode&&) = delete; \
	UMovieGraphNode(const UMovieGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_129_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphNode;

// ********** End Class UMovieGraphNode ************************************************************

// ********** Begin Class UMovieGraphSettingNode ***************************************************
struct Z_Construct_UClass_UMovieGraphSettingNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_473_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphSettingNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphSettingNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphSettingNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphSettingNode, UMovieGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphSettingNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphSettingNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_473_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphSettingNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphSettingNode(UMovieGraphSettingNode&&) = delete; \
	UMovieGraphSettingNode(const UMovieGraphSettingNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphSettingNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphSettingNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphSettingNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphSettingNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_470_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_473_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_473_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_473_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphSettingNode;

// ********** End Class UMovieGraphSettingNode *****************************************************

// ********** Begin Interface UMovieGraphPostRenderNode ********************************************
struct Z_Construct_UClass_UMovieGraphPostRenderNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPostRenderNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_546_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphPostRenderNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphPostRenderNode(UMovieGraphPostRenderNode&&) = delete; \
	UMovieGraphPostRenderNode(const UMovieGraphPostRenderNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphPostRenderNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphPostRenderNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphPostRenderNode) \
	virtual ~UMovieGraphPostRenderNode() = default;


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_546_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieGraphPostRenderNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphPostRenderNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphPostRenderNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphPostRenderNode, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphPostRenderNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphPostRenderNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_546_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_546_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_546_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_546_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieGraphPostRenderNode() {} \
public: \
	typedef UMovieGraphPostRenderNode UClassType; \
	typedef IMovieGraphPostRenderNode ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_543_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_554_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_546_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphPostRenderNode;

// ********** End Interface UMovieGraphPostRenderNode **********************************************

// ********** Begin Interface UMovieGraphEvaluationNodeInjector ************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_570_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInjectNodesPostEvaluation);


struct Z_Construct_UClass_UMovieGraphEvaluationNodeInjector_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEvaluationNodeInjector_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_570_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphEvaluationNodeInjector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphEvaluationNodeInjector(UMovieGraphEvaluationNodeInjector&&) = delete; \
	UMovieGraphEvaluationNodeInjector(const UMovieGraphEvaluationNodeInjector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphEvaluationNodeInjector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphEvaluationNodeInjector); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphEvaluationNodeInjector) \
	virtual ~UMovieGraphEvaluationNodeInjector() = default;


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_570_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieGraphEvaluationNodeInjector(); \
	friend struct ::Z_Construct_UClass_UMovieGraphEvaluationNodeInjector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphEvaluationNodeInjector_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphEvaluationNodeInjector, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphEvaluationNodeInjector_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphEvaluationNodeInjector)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_570_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_570_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_570_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_570_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieGraphEvaluationNodeInjector() {} \
public: \
	typedef UMovieGraphEvaluationNodeInjector UClassType; \
	typedef IMovieGraphEvaluationNodeInjector ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_567_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_579_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_570_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_570_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphEvaluationNodeInjector;

// ********** End Interface UMovieGraphEvaluationNodeInjector **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h

// ********** Begin Enum EMovieGraphBranchRestriction **********************************************
#define FOREACH_ENUM_EMOVIEGRAPHBRANCHRESTRICTION(op) \
	op(EMovieGraphBranchRestriction::Any) \
	op(EMovieGraphBranchRestriction::Globals) \
	op(EMovieGraphBranchRestriction::RenderLayer) 

enum class EMovieGraphBranchRestriction : uint8;
template<> struct TIsUEnumClass<EMovieGraphBranchRestriction> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphBranchRestriction>();
// ********** End Enum EMovieGraphBranchRestriction ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
