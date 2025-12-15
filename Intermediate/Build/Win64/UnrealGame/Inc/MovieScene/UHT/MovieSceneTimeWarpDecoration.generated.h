// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/MovieSceneTimeWarpDecoration.h"

#ifdef MOVIESCENE_MovieSceneTimeWarpDecoration_generated_h
#error "MovieSceneTimeWarpDecoration.generated.h already included, missing '#pragma once' in MovieSceneTimeWarpDecoration.h"
#endif
#define MOVIESCENE_MovieSceneTimeWarpDecoration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneTimeWarpSource ********************************************
struct Z_Construct_UClass_UMovieSceneTimeWarpSource_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpSource_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneTimeWarpSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTimeWarpSource(UMovieSceneTimeWarpSource&&) = delete; \
	UMovieSceneTimeWarpSource(const UMovieSceneTimeWarpSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTimeWarpSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTimeWarpSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTimeWarpSource) \
	virtual ~UMovieSceneTimeWarpSource() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneTimeWarpSource(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTimeWarpSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTimeWarpSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTimeWarpSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTimeWarpSource_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTimeWarpSource)


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_19_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneTimeWarpSource() {} \
public: \
	typedef UMovieSceneTimeWarpSource UClassType; \
	typedef IMovieSceneTimeWarpSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTimeWarpSource;

// ********** End Interface UMovieSceneTimeWarpSource **********************************************

// ********** Begin Class UMovieSceneTimeWarpDecoration ********************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_44_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTimeWarpDecoration, MOVIESCENE_API)


struct Z_Construct_UClass_UMovieSceneTimeWarpDecoration_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTimeWarpDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTimeWarpDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTimeWarpDecoration, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTimeWarpDecoration) \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_44_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneTimeWarpDecoration*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneTimeWarpDecoration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTimeWarpDecoration(UMovieSceneTimeWarpDecoration&&) = delete; \
	UMovieSceneTimeWarpDecoration(const UMovieSceneTimeWarpDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTimeWarpDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTimeWarpDecoration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTimeWarpDecoration) \
	MOVIESCENE_API virtual ~UMovieSceneTimeWarpDecoration();


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_37_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h_44_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTimeWarpDecoration;

// ********** End Class UMovieSceneTimeWarpDecoration **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
