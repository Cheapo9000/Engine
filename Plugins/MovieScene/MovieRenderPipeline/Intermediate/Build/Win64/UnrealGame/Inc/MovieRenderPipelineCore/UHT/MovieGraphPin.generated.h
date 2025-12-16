// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphPin.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphPin_generated_h
#error "MovieGraphPin.generated.h already included, missing '#pragma once' in MovieGraphPin.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphPin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieGraphNode;
class UMovieGraphPin;

// ********** Begin ScriptStruct FMovieGraphPinProperties ******************************************
struct Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphPinProperties;
// ********** End ScriptStruct FMovieGraphPinProperties ********************************************

// ********** Begin Class UMovieGraphPin ***********************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTypeCompatibleWith); \
	DECLARE_FUNCTION(execIsPinDirectionCompatibleWith); \
	DECLARE_FUNCTION(execIsConnectionToBranchAllowed); \
	DECLARE_FUNCTION(execGetConnectedNodes); \
	DECLARE_FUNCTION(execGetAllConnectedPins); \
	DECLARE_FUNCTION(execGetFirstConnectedPin); \
	DECLARE_FUNCTION(execAllowsMultipleConnections); \
	DECLARE_FUNCTION(execEdgeCount); \
	DECLARE_FUNCTION(execIsOutputPin); \
	DECLARE_FUNCTION(execIsInputPin); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execCanCreateConnection);


struct Z_Construct_UClass_UMovieGraphPin_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPin_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphPin(); \
	friend struct ::Z_Construct_UClass_UMovieGraphPin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphPin_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphPin_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphPin)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphPin(UMovieGraphPin&&) = delete; \
	UMovieGraphPin(const UMovieGraphPin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphPin) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphPin();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_105_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphPin;

// ********** End Class UMovieGraphPin *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h

// ********** Begin Enum EMovieGraphPinQueryRequirement ********************************************
#define FOREACH_ENUM_EMOVIEGRAPHPINQUERYREQUIREMENT(op) \
	op(EMovieGraphPinQueryRequirement::BuiltIn) \
	op(EMovieGraphPinQueryRequirement::Dynamic) \
	op(EMovieGraphPinQueryRequirement::BuiltInOrDynamic) 

enum class EMovieGraphPinQueryRequirement : uint8;
template<> struct TIsUEnumClass<EMovieGraphPinQueryRequirement> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphPinQueryRequirement>();
// ********** End Enum EMovieGraphPinQueryRequirement **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
