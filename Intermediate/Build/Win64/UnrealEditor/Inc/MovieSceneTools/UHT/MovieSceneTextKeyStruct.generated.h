// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeyStructTypes/MovieSceneTextKeyStruct.h"

#ifdef MOVIESCENETOOLS_MovieSceneTextKeyStruct_generated_h
#error "MovieSceneTextKeyStruct.generated.h already included, missing '#pragma once' in MovieSceneTextKeyStruct.h"
#endif
#define MOVIESCENETOOLS_MovieSceneTextKeyStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTextKeyStruct *************************************************
struct Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneTextKeyStruct_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Public_KeyStructTypes_MovieSceneTextKeyStruct_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTextKeyStruct(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_UMovieSceneTextKeyStruct_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTextKeyStruct, UMovieSceneKeyStructType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_UMovieSceneTextKeyStruct_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTextKeyStruct)


#define FID_Engine_Source_Editor_MovieSceneTools_Public_KeyStructTypes_MovieSceneTextKeyStruct_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETOOLS_API UMovieSceneTextKeyStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTextKeyStruct(UMovieSceneTextKeyStruct&&) = delete; \
	UMovieSceneTextKeyStruct(const UMovieSceneTextKeyStruct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETOOLS_API, UMovieSceneTextKeyStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTextKeyStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTextKeyStruct) \
	MOVIESCENETOOLS_API virtual ~UMovieSceneTextKeyStruct();


#define FID_Engine_Source_Editor_MovieSceneTools_Public_KeyStructTypes_MovieSceneTextKeyStruct_h_13_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Public_KeyStructTypes_MovieSceneTextKeyStruct_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Public_KeyStructTypes_MovieSceneTextKeyStruct_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Public_KeyStructTypes_MovieSceneTextKeyStruct_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTextKeyStruct;

// ********** End Class UMovieSceneTextKeyStruct ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Public_KeyStructTypes_MovieSceneTextKeyStruct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
