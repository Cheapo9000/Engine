// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneCommonAnimationTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneCommonAnimationTrack_generated_h
#error "MovieSceneCommonAnimationTrack.generated.h already included, missing '#pragma once' in MovieSceneCommonAnimationTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCommonAnimationTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneSkeletalAnimRootMotionTrackParams **********************
struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSkeletalAnimRootMotionTrackParams;
// ********** End ScriptStruct FMovieSceneSkeletalAnimRootMotionTrackParams ************************

// ********** Begin Class UMovieSceneCommonAnimationTrack ******************************************
struct Z_Construct_UClass_UMovieSceneCommonAnimationTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCommonAnimationTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCommonAnimationTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCommonAnimationTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCommonAnimationTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCommonAnimationTrack(UMovieSceneCommonAnimationTrack&&) = delete; \
	UMovieSceneCommonAnimationTrack(const UMovieSceneCommonAnimationTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCommonAnimationTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCommonAnimationTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCommonAnimationTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneCommonAnimationTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h_40_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCommonAnimationTrack;

// ********** End Class UMovieSceneCommonAnimationTrack ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
