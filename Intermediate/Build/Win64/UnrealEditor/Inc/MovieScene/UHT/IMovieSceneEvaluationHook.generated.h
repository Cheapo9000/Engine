// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/IMovieSceneEvaluationHook.h"

#ifdef MOVIESCENE_IMovieSceneEvaluationHook_generated_h
#error "IMovieSceneEvaluationHook.generated.h already included, missing '#pragma once' in IMovieSceneEvaluationHook.h"
#endif
#define MOVIESCENE_IMovieSceneEvaluationHook_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneEvaluationHook ********************************************
struct Z_Construct_UClass_UMovieSceneEvaluationHook_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneEvaluationHook(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEvaluationHook(UMovieSceneEvaluationHook&&) = delete; \
	UMovieSceneEvaluationHook(const UMovieSceneEvaluationHook&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEvaluationHook); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEvaluationHook); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEvaluationHook) \
	virtual ~UMovieSceneEvaluationHook() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_53_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneEvaluationHook(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEvaluationHook_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEvaluationHook, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEvaluationHook)


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_53_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_53_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_53_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_53_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneEvaluationHook() {} \
public: \
	typedef UMovieSceneEvaluationHook UClassType; \
	typedef IMovieSceneEvaluationHook ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_49_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_53_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEvaluationHook;

// ********** End Interface UMovieSceneEvaluationHook **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
