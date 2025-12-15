// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneSpawnablesSystem.h"

#ifdef MOVIESCENE_MovieSceneSpawnablesSystem_generated_h
#error "MovieSceneSpawnablesSystem.generated.h already included, missing '#pragma once' in MovieSceneSpawnablesSystem.h"
#endif
#define MOVIESCENE_MovieSceneSpawnablesSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneSpawnablesSystem **********************************************
struct Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSpawnablesSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSpawnablesSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSpawnablesSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSpawnablesSystem(UMovieSceneSpawnablesSystem&&) = delete; \
	UMovieSceneSpawnablesSystem(const UMovieSceneSpawnablesSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSpawnablesSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSpawnablesSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSpawnablesSystem) \
	MOVIESCENE_API virtual ~UMovieSceneSpawnablesSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSpawnablesSystem;

// ********** End Class UMovieSceneSpawnablesSystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
