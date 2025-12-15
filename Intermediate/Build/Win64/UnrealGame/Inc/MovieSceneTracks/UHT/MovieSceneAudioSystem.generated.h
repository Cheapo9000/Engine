// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneAudioSystem.h"

#ifdef MOVIESCENETRACKS_MovieSceneAudioSystem_generated_h
#error "MovieSceneAudioSystem.generated.h already included, missing '#pragma once' in MovieSceneAudioSystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneAudioSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneAudioSystem ***************************************************
struct Z_Construct_UClass_UMovieSceneAudioSystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneAudioSystem_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAudioSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneAudioSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAudioSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneAudioSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAudioSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneAudioSystem_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAudioSystem(UMovieSceneAudioSystem&&) = delete; \
	UMovieSceneAudioSystem(const UMovieSceneAudioSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioSystem) \
	NO_API virtual ~UMovieSceneAudioSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneAudioSystem_h_76_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneAudioSystem_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneAudioSystem_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneAudioSystem_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAudioSystem;

// ********** End Class UMovieSceneAudioSystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneAudioSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
