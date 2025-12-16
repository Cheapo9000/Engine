// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelinePanoramicBlenderBase.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelinePanoramicBlenderBase_generated_h
#error "MoviePipelinePanoramicBlenderBase.generated.h already included, missing '#pragma once' in MoviePipelinePanoramicBlenderBase.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelinePanoramicBlenderBase_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePanoramicBlenderBase_h

// ********** Begin Enum EMoviePipelinePanoramicFilterType *****************************************
#define FOREACH_ENUM_EMOVIEPIPELINEPANORAMICFILTERTYPE(op) \
	op(EMoviePipelinePanoramicFilterType::Bilinear) \
	op(EMoviePipelinePanoramicFilterType::Catmull) \
	op(EMoviePipelinePanoramicFilterType::Mitchell) 

enum class EMoviePipelinePanoramicFilterType : uint8;
template<> struct TIsUEnumClass<EMoviePipelinePanoramicFilterType> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMoviePipelinePanoramicFilterType>();
// ********** End Enum EMoviePipelinePanoramicFilterType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
