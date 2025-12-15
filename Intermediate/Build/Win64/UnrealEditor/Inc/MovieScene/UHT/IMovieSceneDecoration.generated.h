// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/IMovieSceneDecoration.h"

#ifdef MOVIESCENE_IMovieSceneDecoration_generated_h
#error "IMovieSceneDecoration.generated.h already included, missing '#pragma once' in IMovieSceneDecoration.h"
#endif
#define MOVIESCENE_IMovieSceneDecoration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneDecoration ************************************************
struct Z_Construct_UClass_UMovieSceneDecoration_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneDecoration_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneDecoration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDecoration(UMovieSceneDecoration&&) = delete; \
	UMovieSceneDecoration(const UMovieSceneDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDecoration); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDecoration) \
	virtual ~UMovieSceneDecoration() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDecoration, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDecoration)


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneDecoration() {} \
public: \
	typedef UMovieSceneDecoration UClassType; \
	typedef IMovieSceneDecoration ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h_11_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDecoration;

// ********** End Interface UMovieSceneDecoration **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneDecoration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
