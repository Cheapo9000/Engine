// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSequenceTickManager.h"

#ifdef MOVIESCENE_MovieSceneSequenceTickManager_generated_h
#error "MovieSceneSequenceTickManager.generated.h already included, missing '#pragma once' in MovieSceneSequenceTickManager.h"
#endif
#define MOVIESCENE_MovieSceneSequenceTickManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneSequenceTickManager *******************************************
struct Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequenceTickManager(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSequenceTickManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSequenceTickManager)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSequenceTickManager(UMovieSceneSequenceTickManager&&) = delete; \
	UMovieSceneSequenceTickManager(const UMovieSceneSequenceTickManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequenceTickManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequenceTickManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequenceTickManager) \
	MOVIESCENE_API virtual ~UMovieSceneSequenceTickManager();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_28_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSequenceTickManager;

// ********** End Class UMovieSceneSequenceTickManager *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
