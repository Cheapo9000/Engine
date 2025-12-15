// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneEntityGroupingSystem.h"

#ifdef MOVIESCENE_MovieSceneEntityGroupingSystem_generated_h
#error "MovieSceneEntityGroupingSystem.generated.h already included, missing '#pragma once' in MovieSceneEntityGroupingSystem.h"
#endif
#define MOVIESCENE_MovieSceneEntityGroupingSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneEntityGroupingSystem ******************************************
struct Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_327_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEntityGroupingSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEntityGroupingSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEntityGroupingSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_327_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEntityGroupingSystem(UMovieSceneEntityGroupingSystem&&) = delete; \
	UMovieSceneEntityGroupingSystem(const UMovieSceneEntityGroupingSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEntityGroupingSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEntityGroupingSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEntityGroupingSystem) \
	MOVIESCENE_API virtual ~UMovieSceneEntityGroupingSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_317_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_327_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_327_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_327_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEntityGroupingSystem;

// ********** End Class UMovieSceneEntityGroupingSystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
