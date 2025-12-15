// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/Blending/MovieSceneBlendType.h"

#ifdef MOVIESCENE_MovieSceneBlendType_generated_h
#error "MovieSceneBlendType.generated.h already included, missing '#pragma once' in MovieSceneBlendType.h"
#endif
#define MOVIESCENE_MovieSceneBlendType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptionalMovieSceneBlendType **************************************
struct Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FOptionalMovieSceneBlendType;
// ********** End ScriptStruct FOptionalMovieSceneBlendType ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h

// ********** Begin Enum EMovieSceneBlendType ******************************************************
#define FOREACH_ENUM_EMOVIESCENEBLENDTYPE(op) \
	op(EMovieSceneBlendType::Invalid) \
	op(EMovieSceneBlendType::Absolute) \
	op(EMovieSceneBlendType::Additive) \
	op(EMovieSceneBlendType::Relative) \
	op(EMovieSceneBlendType::AdditiveFromBase) \
	op(EMovieSceneBlendType::Override) 

enum class EMovieSceneBlendType : uint8;
template<> struct TIsUEnumClass<EMovieSceneBlendType> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneBlendType>();
// ********** End Enum EMovieSceneBlendType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
