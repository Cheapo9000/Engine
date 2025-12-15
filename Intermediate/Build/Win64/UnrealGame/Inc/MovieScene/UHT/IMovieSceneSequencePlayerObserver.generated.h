// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMovieSceneSequencePlayerObserver.h"

#ifdef MOVIESCENE_IMovieSceneSequencePlayerObserver_generated_h
#error "IMovieSceneSequencePlayerObserver.generated.h already included, missing '#pragma once' in IMovieSceneSequencePlayerObserver.h"
#endif
#define MOVIESCENE_IMovieSceneSequencePlayerObserver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneSequencePlayerObserver ************************************
struct Z_Construct_UClass_UMovieSceneSequencePlayerObserver_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayerObserver_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSequencePlayerObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSequencePlayerObserver(UMovieSceneSequencePlayerObserver&&) = delete; \
	UMovieSceneSequencePlayerObserver(const UMovieSceneSequencePlayerObserver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequencePlayerObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequencePlayerObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequencePlayerObserver) \
	virtual ~UMovieSceneSequencePlayerObserver() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneSequencePlayerObserver(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSequencePlayerObserver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSequencePlayerObserver_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSequencePlayerObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSequencePlayerObserver_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSequencePlayerObserver)


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneSequencePlayerObserver() {} \
public: \
	typedef UMovieSceneSequencePlayerObserver UClassType; \
	typedef IMovieSceneSequencePlayerObserver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_11_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSequencePlayerObserver;

// ********** End Interface UMovieSceneSequencePlayerObserver **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
