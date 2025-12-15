// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/MovieSceneDecomposerTests.h"

#ifdef MOVIESCENETRACKS_MovieSceneDecomposerTests_generated_h
#error "MovieSceneDecomposerTests.generated.h already included, missing '#pragma once' in MovieSceneDecomposerTests.h"
#endif
#define MOVIESCENETRACKS_MovieSceneDecomposerTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneDecomposerTestObject ******************************************
struct Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDecomposerTestObject_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDecomposerTestObject(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneDecomposerTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDecomposerTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneDecomposerTestObject_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDecomposerTestObject)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneDecomposerTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDecomposerTestObject(UMovieSceneDecomposerTestObject&&) = delete; \
	UMovieSceneDecomposerTestObject(const UMovieSceneDecomposerTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneDecomposerTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDecomposerTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDecomposerTestObject) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneDecomposerTestObject();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_9_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDecomposerTestObject;

// ********** End Class UMovieSceneDecomposerTestObject ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
