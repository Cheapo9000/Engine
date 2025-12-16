// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineConfigBase.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineConfigBase_generated_h
#error "MoviePipelineConfigBase.generated.h already included, missing '#pragma once' in MoviePipelineConfigBase.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineConfigBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMoviePipelineConfigBase;
class UMoviePipelineSetting;

// ********** Begin Class UMoviePipelineConfigBase *************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindOrAddSettingByClass); \
	DECLARE_FUNCTION(execFindSettingByClass); \
	DECLARE_FUNCTION(execFindSettingsByClass); \
	DECLARE_FUNCTION(execSetConfigOrigin); \
	DECLARE_FUNCTION(execGetConfigOrigin); \
	DECLARE_FUNCTION(execGetUserSettings); \
	DECLARE_FUNCTION(execCopyFrom); \
	DECLARE_FUNCTION(execRemoveSetting);


struct Z_Construct_UClass_UMoviePipelineConfigBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineConfigBase(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineConfigBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineConfigBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineConfigBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineConfigBase(UMoviePipelineConfigBase&&) = delete; \
	UMoviePipelineConfigBase(const UMoviePipelineConfigBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineConfigBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineConfigBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineConfigBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineConfigBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineConfigBase;

// ********** End Class UMoviePipelineConfigBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
