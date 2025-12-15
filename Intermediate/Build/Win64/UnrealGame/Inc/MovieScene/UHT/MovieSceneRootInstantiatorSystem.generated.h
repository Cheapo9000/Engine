// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneRootInstantiatorSystem.h"

#ifdef MOVIESCENE_MovieSceneRootInstantiatorSystem_generated_h
#error "MovieSceneRootInstantiatorSystem.generated.h already included, missing '#pragma once' in MovieSceneRootInstantiatorSystem.h"
#endif
#define MOVIESCENE_MovieSceneRootInstantiatorSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneRootInstantiatorSystem ****************************************
struct Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneRootInstantiatorSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneRootInstantiatorSystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneRootInstantiatorSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneRootInstantiatorSystem(UMovieSceneRootInstantiatorSystem&&) = delete; \
	UMovieSceneRootInstantiatorSystem(const UMovieSceneRootInstantiatorSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneRootInstantiatorSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneRootInstantiatorSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneRootInstantiatorSystem) \
	MOVIESCENE_API virtual ~UMovieSceneRootInstantiatorSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_18_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneRootInstantiatorSystem;

// ********** End Class UMovieSceneRootInstantiatorSystem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
