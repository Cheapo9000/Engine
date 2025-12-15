// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/IMovieSceneLifetimeDecoration.h"

#ifdef MOVIESCENE_IMovieSceneLifetimeDecoration_generated_h
#error "IMovieSceneLifetimeDecoration.generated.h already included, missing '#pragma once' in IMovieSceneLifetimeDecoration.h"
#endif
#define MOVIESCENE_IMovieSceneLifetimeDecoration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneLifetimeDecoration ****************************************
struct Z_Construct_UClass_UMovieSceneLifetimeDecoration_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneLifetimeDecoration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneLifetimeDecoration(UMovieSceneLifetimeDecoration&&) = delete; \
	UMovieSceneLifetimeDecoration(const UMovieSceneLifetimeDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneLifetimeDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLifetimeDecoration); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLifetimeDecoration) \
	virtual ~UMovieSceneLifetimeDecoration() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneLifetimeDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneLifetimeDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneLifetimeDecoration, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneLifetimeDecoration)


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneLifetimeDecoration() {} \
public: \
	typedef UMovieSceneLifetimeDecoration UClassType; \
	typedef IMovieSceneLifetimeDecoration ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h_11_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneLifetimeDecoration;

// ********** End Interface UMovieSceneLifetimeDecoration ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneLifetimeDecoration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
