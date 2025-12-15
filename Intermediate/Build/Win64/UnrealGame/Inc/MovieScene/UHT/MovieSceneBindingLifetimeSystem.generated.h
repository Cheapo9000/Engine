// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneBindingLifetimeSystem.h"

#ifdef MOVIESCENE_MovieSceneBindingLifetimeSystem_generated_h
#error "MovieSceneBindingLifetimeSystem.generated.h already included, missing '#pragma once' in MovieSceneBindingLifetimeSystem.h"
#endif
#define MOVIESCENE_MovieSceneBindingLifetimeSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneBindingLifetimeSystem *****************************************
struct Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingLifetimeSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneBindingLifetimeSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneBindingLifetimeSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneBindingLifetimeSystem(UMovieSceneBindingLifetimeSystem&&) = delete; \
	UMovieSceneBindingLifetimeSystem(const UMovieSceneBindingLifetimeSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBindingLifetimeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingLifetimeSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingLifetimeSystem) \
	MOVIESCENE_API virtual ~UMovieSceneBindingLifetimeSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_16_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneBindingLifetimeSystem;

// ********** End Class UMovieSceneBindingLifetimeSystem *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
