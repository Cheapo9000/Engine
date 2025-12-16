// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneAnimatorTypes.h"

#ifdef PROPERTYANIMATORCORE_MovieSceneAnimatorTypes_generated_h
#error "MovieSceneAnimatorTypes.generated.h already included, missing '#pragma once' in MovieSceneAnimatorTypes.h"
#endif
#define PROPERTYANIMATORCORE_MovieSceneAnimatorTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorTypes_h

// ********** Begin Enum EMovieSceneAnimatorEvalTimeMode *******************************************
#define FOREACH_ENUM_EMOVIESCENEANIMATOREVALTIMEMODE(op) \
	op(EMovieSceneAnimatorEvalTimeMode::Sequence) \
	op(EMovieSceneAnimatorEvalTimeMode::Section) \
	op(EMovieSceneAnimatorEvalTimeMode::Custom) 

enum class EMovieSceneAnimatorEvalTimeMode : uint8;
template<> struct TIsUEnumClass<EMovieSceneAnimatorEvalTimeMode> { enum { Value = true }; };
template<> PROPERTYANIMATORCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneAnimatorEvalTimeMode>();
// ********** End Enum EMovieSceneAnimatorEvalTimeMode *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
