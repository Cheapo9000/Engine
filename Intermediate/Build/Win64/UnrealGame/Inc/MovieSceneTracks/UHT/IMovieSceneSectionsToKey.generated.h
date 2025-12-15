// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/IMovieSceneSectionsToKey.h"

#ifdef MOVIESCENETRACKS_IMovieSceneSectionsToKey_generated_h
#error "IMovieSceneSectionsToKey.generated.h already included, missing '#pragma once' in IMovieSceneSectionsToKey.h"
#endif
#define MOVIESCENETRACKS_IMovieSceneSectionsToKey_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneSectionsToKey *********************************************
struct Z_Construct_UClass_UMovieSceneSectionsToKey_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSectionsToKey_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneSectionsToKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSectionsToKey(UMovieSceneSectionsToKey&&) = delete; \
	UMovieSceneSectionsToKey(const UMovieSceneSectionsToKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSectionsToKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSectionsToKey); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSectionsToKey) \
	virtual ~UMovieSceneSectionsToKey() = default;


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneSectionsToKey(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSectionsToKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneSectionsToKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSectionsToKey, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneSectionsToKey_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSectionsToKey)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_21_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneSectionsToKey() {} \
public: \
	typedef UMovieSceneSectionsToKey UClassType; \
	typedef IMovieSceneSectionsToKey ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_17_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSectionsToKey;

// ********** End Interface UMovieSceneSectionsToKey ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
