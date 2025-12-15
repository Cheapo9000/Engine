// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/IMovieSceneTrackDecoration.h"

#ifdef MOVIESCENE_IMovieSceneTrackDecoration_generated_h
#error "IMovieSceneTrackDecoration.generated.h already included, missing '#pragma once' in IMovieSceneTrackDecoration.h"
#endif
#define MOVIESCENE_IMovieSceneTrackDecoration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneTrackDecoration *******************************************
struct Z_Construct_UClass_UMovieSceneTrackDecoration_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackDecoration_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneTrackDecoration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTrackDecoration(UMovieSceneTrackDecoration&&) = delete; \
	UMovieSceneTrackDecoration(const UMovieSceneTrackDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrackDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackDecoration); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackDecoration) \
	virtual ~UMovieSceneTrackDecoration() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneTrackDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTrackDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTrackDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTrackDecoration, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTrackDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTrackDecoration)


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneTrackDecoration() {} \
public: \
	typedef UMovieSceneTrackDecoration UClassType; \
	typedef IMovieSceneTrackDecoration ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h_11_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTrackDecoration;

// ********** End Interface UMovieSceneTrackDecoration *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneTrackDecoration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
