// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneDeferredComponentMovementSystem.h"

#ifdef MOVIESCENETRACKS_MovieSceneDeferredComponentMovementSystem_generated_h
#error "MovieSceneDeferredComponentMovementSystem.generated.h already included, missing '#pragma once' in MovieSceneDeferredComponentMovementSystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneDeferredComponentMovementSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneDeferredComponentMovementSystem *******************************
struct Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDeferredComponentMovementSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDeferredComponentMovementSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDeferredComponentMovementSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDeferredComponentMovementSystem(UMovieSceneDeferredComponentMovementSystem&&) = delete; \
	UMovieSceneDeferredComponentMovementSystem(const UMovieSceneDeferredComponentMovementSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneDeferredComponentMovementSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDeferredComponentMovementSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDeferredComponentMovementSystem) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneDeferredComponentMovementSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_27_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_33_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDeferredComponentMovementSystem;

// ********** End Class UMovieSceneDeferredComponentMovementSystem *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
