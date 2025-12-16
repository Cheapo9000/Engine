// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphValueContainer.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphValueContainer_generated_h
#error "MovieGraphValueContainer.generated.h already included, missing '#pragma once' in MovieGraphValueContainer.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphValueContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UEnum;
class UObject;
enum class EMovieGraphContainerType : uint8;
enum class EMovieGraphValueType : uint8;

// ********** Begin Class UMovieGraphValueContainer ************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValueContainerType); \
	DECLARE_FUNCTION(execGetValueContainerType); \
	DECLARE_FUNCTION(execSetValueTypeObject); \
	DECLARE_FUNCTION(execGetValueTypeObject); \
	DECLARE_FUNCTION(execSetValueType); \
	DECLARE_FUNCTION(execGetValueType); \
	DECLARE_FUNCTION(execSetValueSerializedString); \
	DECLARE_FUNCTION(execSetValueClass); \
	DECLARE_FUNCTION(execSetValueObject); \
	DECLARE_FUNCTION(execSetValueEnum); \
	DECLARE_FUNCTION(execSetValueText); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execSetValueName); \
	DECLARE_FUNCTION(execSetValueDouble); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execSetValueInt64); \
	DECLARE_FUNCTION(execSetValueInt32); \
	DECLARE_FUNCTION(execSetValueByte); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetValueSerializedString); \
	DECLARE_FUNCTION(execGetValueClass); \
	DECLARE_FUNCTION(execGetValueObject); \
	DECLARE_FUNCTION(execGetValueEnum); \
	DECLARE_FUNCTION(execGetValueText); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execGetValueName); \
	DECLARE_FUNCTION(execGetValueDouble); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execGetValueInt64); \
	DECLARE_FUNCTION(execGetValueInt32); \
	DECLARE_FUNCTION(execGetValueByte); \
	DECLARE_FUNCTION(execGetValueBool);


struct Z_Construct_UClass_UMovieGraphValueContainer_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphValueContainer_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphValueContainer(); \
	friend struct ::Z_Construct_UClass_UMovieGraphValueContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphValueContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphValueContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphValueContainer_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphValueContainer)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphValueContainer(UMovieGraphValueContainer&&) = delete; \
	UMovieGraphValueContainer(const UMovieGraphValueContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphValueContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphValueContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphValueContainer) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphValueContainer();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_35_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphValueContainer;

// ********** End Class UMovieGraphValueContainer **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
