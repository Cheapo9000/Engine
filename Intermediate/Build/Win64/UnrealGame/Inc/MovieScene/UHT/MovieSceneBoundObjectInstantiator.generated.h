// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneBoundObjectInstantiator.h"

#ifdef MOVIESCENE_MovieSceneBoundObjectInstantiator_generated_h
#error "MovieSceneBoundObjectInstantiator.generated.h already included, missing '#pragma once' in MovieSceneBoundObjectInstantiator.h"
#endif
#define MOVIESCENE_MovieSceneBoundObjectInstantiator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneGenericBoundObjectInstantiator ********************************
struct Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneGenericBoundObjectInstantiator(); \
	friend struct ::Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneGenericBoundObjectInstantiator, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneGenericBoundObjectInstantiator)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneGenericBoundObjectInstantiator(UMovieSceneGenericBoundObjectInstantiator&&) = delete; \
	UMovieSceneGenericBoundObjectInstantiator(const UMovieSceneGenericBoundObjectInstantiator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneGenericBoundObjectInstantiator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGenericBoundObjectInstantiator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGenericBoundObjectInstantiator) \
	MOVIESCENE_API virtual ~UMovieSceneGenericBoundObjectInstantiator();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneGenericBoundObjectInstantiator;

// ********** End Class UMovieSceneGenericBoundObjectInstantiator **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
