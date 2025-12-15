// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneBoundSceneComponentInstantiator.h"

#ifdef MOVIESCENE_MovieSceneBoundSceneComponentInstantiator_generated_h
#error "MovieSceneBoundSceneComponentInstantiator.generated.h already included, missing '#pragma once' in MovieSceneBoundSceneComponentInstantiator.h"
#endif
#define MOVIESCENE_MovieSceneBoundSceneComponentInstantiator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneBoundSceneComponentInstantiator *******************************
struct Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBoundSceneComponentInstantiator(); \
	friend struct ::Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneBoundSceneComponentInstantiator, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneBoundSceneComponentInstantiator)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneBoundSceneComponentInstantiator(UMovieSceneBoundSceneComponentInstantiator&&) = delete; \
	UMovieSceneBoundSceneComponentInstantiator(const UMovieSceneBoundSceneComponentInstantiator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBoundSceneComponentInstantiator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBoundSceneComponentInstantiator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBoundSceneComponentInstantiator) \
	MOVIESCENE_API virtual ~UMovieSceneBoundSceneComponentInstantiator();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneBoundSceneComponentInstantiator;

// ********** End Class UMovieSceneBoundSceneComponentInstantiator *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
