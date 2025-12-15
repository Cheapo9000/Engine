// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSequence.h"

#ifdef MOVIESCENE_MovieSceneSequence_generated_h
#error "MovieSceneSequence.generated.h already included, missing '#pragma once' in MovieSceneSequence.h"
#endif
#define MOVIESCENE_MovieSceneSequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneObjectBindingID;
struct FMovieSceneTimecodeSource;

// ********** Begin Class UMovieSceneSequence ******************************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEarliestTimecodeSource); \
	DECLARE_FUNCTION(execFindBindingsByTag); \
	DECLARE_FUNCTION(execFindBindingByTag);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_78_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSequence, MOVIESCENE_API)


struct Z_Construct_UClass_UMovieSceneSequence_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequence(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSequence, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSequence_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSequence) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_78_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_78_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSequence(UMovieSceneSequence&&) = delete; \
	UMovieSceneSequence(const UMovieSceneSequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequence); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequence) \
	MOVIESCENE_API virtual ~UMovieSceneSequence();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_70_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_78_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSequence;

// ********** End Class UMovieSceneSequence ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
