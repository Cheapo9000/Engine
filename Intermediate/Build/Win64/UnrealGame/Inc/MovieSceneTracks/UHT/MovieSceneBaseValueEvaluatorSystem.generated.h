// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneBaseValueEvaluatorSystem.h"

#ifdef MOVIESCENETRACKS_MovieSceneBaseValueEvaluatorSystem_generated_h
#error "MovieSceneBaseValueEvaluatorSystem.generated.h already included, missing '#pragma once' in MovieSceneBaseValueEvaluatorSystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneBaseValueEvaluatorSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneBaseValueEvaluatorSystem **************************************
struct Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBaseValueEvaluatorSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneBaseValueEvaluatorSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneBaseValueEvaluatorSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneBaseValueEvaluatorSystem(UMovieSceneBaseValueEvaluatorSystem&&) = delete; \
	UMovieSceneBaseValueEvaluatorSystem(const UMovieSceneBaseValueEvaluatorSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneBaseValueEvaluatorSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBaseValueEvaluatorSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBaseValueEvaluatorSystem) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneBaseValueEvaluatorSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_16_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneBaseValueEvaluatorSystem;

// ********** End Class UMovieSceneBaseValueEvaluatorSystem ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
