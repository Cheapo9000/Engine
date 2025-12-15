// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneNameableTrack.h"

#ifdef MOVIESCENE_MovieSceneNameableTrack_generated_h
#error "MovieSceneNameableTrack.generated.h already included, missing '#pragma once' in MovieSceneNameableTrack.h"
#endif
#define MOVIESCENE_MovieSceneNameableTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneNameableTrack *************************************************
struct Z_Construct_UClass_UMovieSceneNameableTrack_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNameableTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNameableTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNameableTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNameableTrack)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneNameableTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNameableTrack(UMovieSceneNameableTrack&&) = delete; \
	UMovieSceneNameableTrack(const UMovieSceneNameableTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneNameableTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNameableTrack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNameableTrack) \
	MOVIESCENE_API virtual ~UMovieSceneNameableTrack();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_21_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNameableTrack;

// ********** End Class UMovieSceneNameableTrack ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
