// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/MovieSceneTestDataBuilders.h"

#ifdef MOVIESCENETRACKS_MovieSceneTestDataBuilders_generated_h
#error "MovieSceneTestDataBuilders.generated.h already included, missing '#pragma once' in MovieSceneTestDataBuilders.h"
#endif
#define MOVIESCENETRACKS_MovieSceneTestDataBuilders_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTestSequence **************************************************
struct Z_Construct_UClass_UMovieSceneTestSequence_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTestSequence_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTestSequence(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTestSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneTestSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTestSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneTestSequence_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTestSequence)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneTestSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTestSequence(UMovieSceneTestSequence&&) = delete; \
	UMovieSceneTestSequence(const UMovieSceneTestSequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneTestSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTestSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTestSequence) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneTestSequence();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_27_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTestSequence;

// ********** End Class UMovieSceneTestSequence ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
