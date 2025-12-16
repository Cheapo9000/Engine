// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineObjectIdUtils.h"

#ifdef MOVIEPIPELINEMASKRENDERPASS_MoviePipelineObjectIdUtils_generated_h
#error "MoviePipelineObjectIdUtils.generated.h already included, missing '#pragma once' in MoviePipelineObjectIdUtils.h"
#endif
#define MOVIEPIPELINEMASKRENDERPASS_MoviePipelineObjectIdUtils_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelineObjectIdUtils_h

// ********** Begin Enum EMoviePipelineObjectIdPassIdType ******************************************
#define FOREACH_ENUM_EMOVIEPIPELINEOBJECTIDPASSIDTYPE(op) \
	op(EMoviePipelineObjectIdPassIdType::Full) \
	op(EMoviePipelineObjectIdPassIdType::Material) \
	op(EMoviePipelineObjectIdPassIdType::Actor) \
	op(EMoviePipelineObjectIdPassIdType::ActorWithHierarchy) \
	op(EMoviePipelineObjectIdPassIdType::Folder) \
	op(EMoviePipelineObjectIdPassIdType::Layer) 

enum class EMoviePipelineObjectIdPassIdType : uint8;
template<> struct TIsUEnumClass<EMoviePipelineObjectIdPassIdType> { enum { Value = true }; };
template<> MOVIEPIPELINEMASKRENDERPASS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMoviePipelineObjectIdPassIdType>();
// ********** End Enum EMoviePipelineObjectIdPassIdType ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
