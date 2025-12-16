// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/Sequencer/MovieSceneChaosCacheTrack.h"

#ifdef CHAOSCACHING_MovieSceneChaosCacheTrack_generated_h
#error "MovieSceneChaosCacheTrack.generated.h already included, missing '#pragma once' in MovieSceneChaosCacheTrack.h"
#endif
#define CHAOSCACHING_MovieSceneChaosCacheTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneChaosCacheTrack ***********************************************
struct Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics;
CHAOSCACHING_API UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrack_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneChaosCacheTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCACHING_API UClass* ::Z_Construct_UClass_UMovieSceneChaosCacheTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneChaosCacheTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCaching"), Z_Construct_UClass_UMovieSceneChaosCacheTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneChaosCacheTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneChaosCacheTrack*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCACHING_API UMovieSceneChaosCacheTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneChaosCacheTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHING_API, UMovieSceneChaosCacheTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneChaosCacheTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneChaosCacheTrack(UMovieSceneChaosCacheTrack&&) = delete; \
	UMovieSceneChaosCacheTrack(const UMovieSceneChaosCacheTrack&) = delete; \
	CHAOSCACHING_API virtual ~UMovieSceneChaosCacheTrack();


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneChaosCacheTrack;

// ********** End Class UMovieSceneChaosCacheTrack *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
