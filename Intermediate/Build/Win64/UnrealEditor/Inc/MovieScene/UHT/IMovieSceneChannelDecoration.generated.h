// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/IMovieSceneChannelDecoration.h"

#ifdef MOVIESCENE_IMovieSceneChannelDecoration_generated_h
#error "IMovieSceneChannelDecoration.generated.h already included, missing '#pragma once' in IMovieSceneChannelDecoration.h"
#endif
#define MOVIESCENE_IMovieSceneChannelDecoration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneChannelDecoration *****************************************
struct Z_Construct_UClass_UMovieSceneChannelDecoration_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelDecoration_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneChannelDecoration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneChannelDecoration(UMovieSceneChannelDecoration&&) = delete; \
	UMovieSceneChannelDecoration(const UMovieSceneChannelDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneChannelDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneChannelDecoration); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneChannelDecoration) \
	virtual ~UMovieSceneChannelDecoration() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneChannelDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneChannelDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneChannelDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneChannelDecoration, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneChannelDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneChannelDecoration)


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h_16_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneChannelDecoration() {} \
public: \
	typedef UMovieSceneChannelDecoration UClassType; \
	typedef IMovieSceneChannelDecoration ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h_12_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneChannelDecoration;

// ********** End Interface UMovieSceneChannelDecoration *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneChannelDecoration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
