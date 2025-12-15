// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneInitialValueSystem.h"

#ifdef MOVIESCENE_MovieSceneInitialValueSystem_generated_h
#error "MovieSceneInitialValueSystem.generated.h already included, missing '#pragma once' in MovieSceneInitialValueSystem.h"
#endif
#define MOVIESCENE_MovieSceneInitialValueSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneInitialValueSystem ********************************************
struct Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneInitialValueSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneInitialValueSystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneInitialValueSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneInitialValueSystem(UMovieSceneInitialValueSystem&&) = delete; \
	UMovieSceneInitialValueSystem(const UMovieSceneInitialValueSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneInitialValueSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneInitialValueSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneInitialValueSystem) \
	MOVIESCENE_API virtual ~UMovieSceneInitialValueSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneInitialValueSystem;

// ********** End Class UMovieSceneInitialValueSystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
