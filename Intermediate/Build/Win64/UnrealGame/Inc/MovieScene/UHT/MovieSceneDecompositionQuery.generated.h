// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneDecompositionQuery.h"

#ifdef MOVIESCENE_MovieSceneDecompositionQuery_generated_h
#error "MovieSceneDecompositionQuery.generated.h already included, missing '#pragma once' in MovieSceneDecompositionQuery.h"
#endif
#define MOVIESCENE_MovieSceneDecompositionQuery_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneValueDecomposer *******************************************
struct Z_Construct_UClass_UMovieSceneValueDecomposer_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_213_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneValueDecomposer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneValueDecomposer(UMovieSceneValueDecomposer&&) = delete; \
	UMovieSceneValueDecomposer(const UMovieSceneValueDecomposer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneValueDecomposer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneValueDecomposer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneValueDecomposer) \
	virtual ~UMovieSceneValueDecomposer() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_213_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneValueDecomposer(); \
	friend struct ::Z_Construct_UClass_UMovieSceneValueDecomposer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneValueDecomposer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneValueDecomposer)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_213_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_213_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_213_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_213_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneValueDecomposer() {} \
public: \
	typedef UMovieSceneValueDecomposer UClassType; \
	typedef IMovieSceneValueDecomposer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_209_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_213_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneValueDecomposer;

// ********** End Interface UMovieSceneValueDecomposer *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
