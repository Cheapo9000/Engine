// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/IMovieSceneSectionDecoration.h"

#ifdef MOVIESCENE_IMovieSceneSectionDecoration_generated_h
#error "IMovieSceneSectionDecoration.generated.h already included, missing '#pragma once' in IMovieSceneSectionDecoration.h"
#endif
#define MOVIESCENE_IMovieSceneSectionDecoration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneSectionDecoration *****************************************
struct Z_Construct_UClass_UMovieSceneSectionDecoration_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSectionDecoration_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSectionDecoration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSectionDecoration(UMovieSceneSectionDecoration&&) = delete; \
	UMovieSceneSectionDecoration(const UMovieSceneSectionDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSectionDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSectionDecoration); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSectionDecoration) \
	virtual ~UMovieSceneSectionDecoration() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneSectionDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSectionDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSectionDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSectionDecoration, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSectionDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSectionDecoration)


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneSectionDecoration() {} \
public: \
	typedef UMovieSceneSectionDecoration UClassType; \
	typedef IMovieSceneSectionDecoration ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h_11_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSectionDecoration;

// ********** End Interface UMovieSceneSectionDecoration *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_IMovieSceneSectionDecoration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
