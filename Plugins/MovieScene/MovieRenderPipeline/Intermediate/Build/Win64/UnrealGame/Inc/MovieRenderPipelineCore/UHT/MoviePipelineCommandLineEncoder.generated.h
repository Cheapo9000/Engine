// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineCommandLineEncoder.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineCommandLineEncoder_generated_h
#error "MoviePipelineCommandLineEncoder.generated.h already included, missing '#pragma once' in MoviePipelineCommandLineEncoder.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineCommandLineEncoder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineCommandLineEncoder *****************************************
struct Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoder_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineCommandLineEncoder(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineCommandLineEncoder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineCommandLineEncoder, UMoviePipelineSetting, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineCommandLineEncoder_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineCommandLineEncoder)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineCommandLineEncoder(UMoviePipelineCommandLineEncoder&&) = delete; \
	UMoviePipelineCommandLineEncoder(const UMoviePipelineCommandLineEncoder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineCommandLineEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineCommandLineEncoder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineCommandLineEncoder) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineCommandLineEncoder();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_20_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineCommandLineEncoder;

// ********** End Class UMoviePipelineCommandLineEncoder *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h

// ********** Begin Enum EMoviePipelineEncodeQuality ***********************************************
#define FOREACH_ENUM_EMOVIEPIPELINEENCODEQUALITY(op) \
	op(EMoviePipelineEncodeQuality::Low) \
	op(EMoviePipelineEncodeQuality::Medium) \
	op(EMoviePipelineEncodeQuality::High) \
	op(EMoviePipelineEncodeQuality::Epic) 

enum class EMoviePipelineEncodeQuality : uint8;
template<> struct TIsUEnumClass<EMoviePipelineEncodeQuality> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMoviePipelineEncodeQuality>();
// ********** End Enum EMoviePipelineEncodeQuality *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
