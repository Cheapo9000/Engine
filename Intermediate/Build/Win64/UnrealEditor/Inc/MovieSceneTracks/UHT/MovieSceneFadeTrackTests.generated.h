// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/MovieSceneFadeTrackTests.h"

#ifdef MOVIESCENETRACKS_MovieSceneFadeTrackTests_generated_h
#error "MovieSceneFadeTrackTests.generated.h already included, missing '#pragma once' in MovieSceneFadeTrackTests.h"
#endif
#define MOVIESCENETRACKS_MovieSceneFadeTrackTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerCameraManager;

// ********** Begin Class UMovieSceneFadeTrackTestLibrary ******************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetManualFadeAmount);


struct Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFadeTrackTestLibrary(); \
	friend struct ::Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneFadeTrackTestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneFadeTrackTestLibrary)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFadeTrackTestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneFadeTrackTestLibrary(UMovieSceneFadeTrackTestLibrary&&) = delete; \
	UMovieSceneFadeTrackTestLibrary(const UMovieSceneFadeTrackTestLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFadeTrackTestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFadeTrackTestLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFadeTrackTestLibrary) \
	NO_API virtual ~UMovieSceneFadeTrackTestLibrary();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h_12_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneFadeTrackTestLibrary;

// ********** End Class UMovieSceneFadeTrackTestLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
