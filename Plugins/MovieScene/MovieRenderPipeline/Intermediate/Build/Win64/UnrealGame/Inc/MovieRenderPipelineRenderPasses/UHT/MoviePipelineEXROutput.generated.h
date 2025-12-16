// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineEXROutput.h"

#ifdef MOVIERENDERPIPELINERENDERPASSES_MoviePipelineEXROutput_generated_h
#error "MoviePipelineEXROutput.generated.h already included, missing '#pragma once' in MoviePipelineEXROutput.h"
#endif
#define MOVIERENDERPIPELINERENDERPASSES_MoviePipelineEXROutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineImageSequenceOutput_EXR ************************************
struct Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineEXROutput_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineImageSequenceOutput_EXR(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineImageSequenceOutput_EXR, UMoviePipelineImageSequenceOutputBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineImageSequenceOutput_EXR)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineEXROutput_h_200_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineImageSequenceOutput_EXR(UMoviePipelineImageSequenceOutput_EXR&&) = delete; \
	UMoviePipelineImageSequenceOutput_EXR(const UMoviePipelineImageSequenceOutput_EXR&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMoviePipelineImageSequenceOutput_EXR); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineImageSequenceOutput_EXR); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineImageSequenceOutput_EXR) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMoviePipelineImageSequenceOutput_EXR();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineEXROutput_h_197_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineEXROutput_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineEXROutput_h_200_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineEXROutput_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineImageSequenceOutput_EXR;

// ********** End Class UMoviePipelineImageSequenceOutput_EXR **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineEXROutput_h

// ********** Begin Enum EEXRCompressionFormat *****************************************************
#define FOREACH_ENUM_EEXRCOMPRESSIONFORMAT(op) \
	op(EEXRCompressionFormat::None) \
	op(EEXRCompressionFormat::RLE) \
	op(EEXRCompressionFormat::ZIPS) \
	op(EEXRCompressionFormat::ZIP) \
	op(EEXRCompressionFormat::PIZ) \
	op(EEXRCompressionFormat::PXR24) \
	op(EEXRCompressionFormat::B44) \
	op(EEXRCompressionFormat::B44A) \
	op(EEXRCompressionFormat::DWAA) \
	op(EEXRCompressionFormat::DWAB) \
	op(EEXRCompressionFormat::Max) 

enum class EEXRCompressionFormat : uint8;
template<> struct TIsUEnumClass<EEXRCompressionFormat> { enum { Value = true }; };
template<> MOVIERENDERPIPELINERENDERPASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EEXRCompressionFormat>();
// ********** End Enum EEXRCompressionFormat *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
