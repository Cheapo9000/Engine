// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/MovieSceneEasingFunction.h"

#ifdef MOVIESCENE_MovieSceneEasingFunction_generated_h
#error "MovieSceneEasingFunction.generated.h already included, missing '#pragma once' in MovieSceneEasingFunction.h"
#endif
#define MOVIESCENE_MovieSceneEasingFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneEasingFunction ********************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMovieSceneEasingFunction_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneEasingFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEasingFunction(UMovieSceneEasingFunction&&) = delete; \
	UMovieSceneEasingFunction(const UMovieSceneEasingFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEasingFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEasingFunction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEasingFunction) \
	virtual ~UMovieSceneEasingFunction() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneEasingFunction(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEasingFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEasingFunction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEasingFunction)


#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneEasingFunction() {} \
public: \
	typedef UMovieSceneEasingFunction UClassType; \
	typedef IMovieSceneEasingFunction ThisClass; \
	MOVIESCENE_API static float Execute_OnEvaluate(const UObject* O, float Interp); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_10_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEasingFunction;

// ********** End Interface UMovieSceneEasingFunction **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
