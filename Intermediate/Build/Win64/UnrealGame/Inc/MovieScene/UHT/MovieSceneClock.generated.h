// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneClock.h"

#ifdef MOVIESCENE_MovieSceneClock_generated_h
#error "MovieSceneClock.generated.h already included, missing '#pragma once' in MovieSceneClock.h"
#endif
#define MOVIESCENE_MovieSceneClock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneClock *********************************************************
struct Z_Construct_UClass_UMovieSceneClock_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneClock_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneClock(); \
	friend struct ::Z_Construct_UClass_UMovieSceneClock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneClock_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneClock, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneClock_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneClock)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneClock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneClock(UMovieSceneClock&&) = delete; \
	UMovieSceneClock(const UMovieSceneClock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneClock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneClock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneClock) \
	MOVIESCENE_API virtual ~UMovieSceneClock();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneClock;

// ********** End Class UMovieSceneClock ***********************************************************

// ********** Begin Class UMovieSceneExternalClock *************************************************
struct Z_Construct_UClass_UMovieSceneExternalClock_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneExternalClock_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneExternalClock(); \
	friend struct ::Z_Construct_UClass_UMovieSceneExternalClock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneExternalClock_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneExternalClock, UMovieSceneClock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneExternalClock_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneExternalClock)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneExternalClock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneExternalClock(UMovieSceneExternalClock&&) = delete; \
	UMovieSceneExternalClock(const UMovieSceneExternalClock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneExternalClock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneExternalClock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneExternalClock) \
	MOVIESCENE_API virtual ~UMovieSceneExternalClock();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_39_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h_44_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneExternalClock;

// ********** End Class UMovieSceneExternalClock ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
