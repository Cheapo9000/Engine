// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneTrack.h"

#ifdef MOVIESCENE_MovieSceneTrack_generated_h
#error "MovieSceneTrack.generated.h already included, missing '#pragma once' in MovieSceneTrack.h"
#endif
#define MOVIESCENE_MovieSceneTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneTrackEvalOptions ***************************************
struct Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneTrackEvalOptions;
// ********** End ScriptStruct FMovieSceneTrackEvalOptions *****************************************

// ********** Begin ScriptStruct FMovieSceneTrackDisplayOptions ************************************
struct Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneTrackDisplayOptions;
// ********** End ScriptStruct FMovieSceneTrackDisplayOptions **************************************

// ********** Begin ScriptStruct FMovieSceneTrackRowMetadata ***************************************
struct Z_Construct_UScriptStruct_FMovieSceneTrackRowMetadata_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_178_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneTrackRowMetadata_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneTrackRowMetadata;
// ********** End ScriptStruct FMovieSceneTrackRowMetadata *****************************************

// ********** Begin Class UMovieSceneTrack *********************************************************
struct Z_Construct_UClass_UMovieSceneTrack_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_207_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTrack, UMovieSceneDecorationContainerObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTrack)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_207_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTrack(UMovieSceneTrack&&) = delete; \
	UMovieSceneTrack(const UMovieSceneTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrack)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_202_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_207_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_207_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_207_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTrack;

// ********** End Class UMovieSceneTrack ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
