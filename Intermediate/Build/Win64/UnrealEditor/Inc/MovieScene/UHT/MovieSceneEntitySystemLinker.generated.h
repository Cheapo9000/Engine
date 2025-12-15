// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneEntitySystemLinker.h"

#ifdef MOVIESCENE_MovieSceneEntitySystemLinker_generated_h
#error "MovieSceneEntitySystemLinker.generated.h already included, missing '#pragma once' in MovieSceneEntitySystemLinker.h"
#endif
#define MOVIESCENE_MovieSceneEntitySystemLinker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneEntitySystemLinker ********************************************
struct Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEntitySystemLinker(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEntitySystemLinker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEntitySystemLinker)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_132_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEntitySystemLinker(UMovieSceneEntitySystemLinker&&) = delete; \
	UMovieSceneEntitySystemLinker(const UMovieSceneEntitySystemLinker&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEntitySystemLinker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEntitySystemLinker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEntitySystemLinker) \
	MOVIESCENE_API virtual ~UMovieSceneEntitySystemLinker();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_110_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_132_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEntitySystemLinker;

// ********** End Class UMovieSceneEntitySystemLinker **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
