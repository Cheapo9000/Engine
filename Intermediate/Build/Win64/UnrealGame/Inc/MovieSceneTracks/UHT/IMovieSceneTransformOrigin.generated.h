// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/IMovieSceneTransformOrigin.h"

#ifdef MOVIESCENETRACKS_IMovieSceneTransformOrigin_generated_h
#error "IMovieSceneTransformOrigin.generated.h already included, missing '#pragma once' in IMovieSceneTransformOrigin.h"
#endif
#define MOVIESCENETRACKS_IMovieSceneTransformOrigin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneTransformOrigin *******************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMovieSceneTransformOrigin_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneTransformOrigin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTransformOrigin(UMovieSceneTransformOrigin&&) = delete; \
	UMovieSceneTransformOrigin(const UMovieSceneTransformOrigin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneTransformOrigin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTransformOrigin); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTransformOrigin) \
	virtual ~UMovieSceneTransformOrigin() = default;


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneTransformOrigin(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTransformOrigin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTransformOrigin, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTransformOrigin)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneTransformOrigin() {} \
public: \
	typedef UMovieSceneTransformOrigin UClassType; \
	typedef IMovieSceneTransformOrigin ThisClass; \
	MOVIESCENETRACKS_API static FTransform Execute_BP_GetTransformOrigin(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_11_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTransformOrigin;

// ********** End Interface UMovieSceneTransformOrigin *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
