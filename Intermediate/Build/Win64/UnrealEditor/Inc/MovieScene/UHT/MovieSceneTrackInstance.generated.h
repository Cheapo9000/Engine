// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/TrackInstance/MovieSceneTrackInstance.h"

#ifdef MOVIESCENE_MovieSceneTrackInstance_generated_h
#error "MovieSceneTrackInstance.generated.h already included, missing '#pragma once' in MovieSceneTrackInstance.h"
#endif
#define MOVIESCENE_MovieSceneTrackInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneTrackInstanceInput *************************************
struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneTrackInstanceInput;
// ********** End ScriptStruct FMovieSceneTrackInstanceInput ***************************************

// ********** Begin Class UMovieSceneTrackInstance *************************************************
struct Z_Construct_UClass_UMovieSceneTrackInstance_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackInstance(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTrackInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTrackInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTrackInstance)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneTrackInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTrackInstance(UMovieSceneTrackInstance&&) = delete; \
	UMovieSceneTrackInstance(const UMovieSceneTrackInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrackInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackInstance) \
	MOVIESCENE_API virtual ~UMovieSceneTrackInstance();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_104_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_108_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTrackInstance;

// ********** End Class UMovieSceneTrackInstance ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
