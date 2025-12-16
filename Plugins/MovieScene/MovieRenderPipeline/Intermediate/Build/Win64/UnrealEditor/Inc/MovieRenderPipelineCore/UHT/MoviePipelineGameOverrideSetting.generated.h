// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineGameOverrideSetting.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineGameOverrideSetting_generated_h
#error "MoviePipelineGameOverrideSetting.generated.h already included, missing '#pragma once' in MoviePipelineGameOverrideSetting.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineGameOverrideSetting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineGameOverrideSetting ****************************************
struct Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineGameOverrideSetting(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineGameOverrideSetting, UMoviePipelineSetting, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineGameOverrideSetting)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineGameOverrideSetting(UMoviePipelineGameOverrideSetting&&) = delete; \
	UMoviePipelineGameOverrideSetting(const UMoviePipelineGameOverrideSetting&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineGameOverrideSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineGameOverrideSetting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineGameOverrideSetting) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineGameOverrideSetting();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_24_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineGameOverrideSetting;

// ********** End Class UMoviePipelineGameOverrideSetting ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h

// ********** Begin Enum EMoviePipelineTextureStreamingMethod **************************************
#define FOREACH_ENUM_EMOVIEPIPELINETEXTURESTREAMINGMETHOD(op) \
	op(EMoviePipelineTextureStreamingMethod::None) \
	op(EMoviePipelineTextureStreamingMethod::Disabled) \
	op(EMoviePipelineTextureStreamingMethod::FullyLoad) 

enum class EMoviePipelineTextureStreamingMethod : uint8;
template<> struct TIsUEnumClass<EMoviePipelineTextureStreamingMethod> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMoviePipelineTextureStreamingMethod>();
// ********** End Enum EMoviePipelineTextureStreamingMethod ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
