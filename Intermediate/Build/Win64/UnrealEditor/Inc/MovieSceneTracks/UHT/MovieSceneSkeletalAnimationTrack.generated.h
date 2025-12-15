// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneSkeletalAnimationTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneSkeletalAnimationTrack_generated_h
#error "MovieSceneSkeletalAnimationTrack.generated.h already included, missing '#pragma once' in MovieSceneSkeletalAnimationTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneSkeletalAnimationTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESwapRootBone : uint8;

// ********** Begin Class UMovieSceneSkeletalAnimationTrack ****************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetSwapRootBone); \
	DECLARE_FUNCTION(execSetSwapRootBone);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_21_ACCESSORS \
static void GetSwapRootBone_WrapperImpl(const void* Object, void* OutValue); \
static void SetSwapRootBone_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSkeletalAnimationTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSkeletalAnimationTrack, UMovieSceneCommonAnimationTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSkeletalAnimationTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSkeletalAnimationTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSkeletalAnimationTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSkeletalAnimationTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSkeletalAnimationTrack(UMovieSceneSkeletalAnimationTrack&&) = delete; \
	UMovieSceneSkeletalAnimationTrack(const UMovieSceneSkeletalAnimationTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneSkeletalAnimationTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_21_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSkeletalAnimationTrack;

// ********** End Class UMovieSceneSkeletalAnimationTrack ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
