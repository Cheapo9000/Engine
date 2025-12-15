// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/MovieSceneDecorationContainer.h"

#ifdef MOVIESCENE_MovieSceneDecorationContainer_generated_h
#error "MovieSceneDecorationContainer.generated.h already included, missing '#pragma once' in MovieSceneDecorationContainer.h"
#endif
#define MOVIESCENE_MovieSceneDecorationContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneDecorationContainer ************************************
struct Z_Construct_UScriptStruct_FMovieSceneDecorationContainer_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDecorationContainer_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneDecorationContainer;
// ********** End ScriptStruct FMovieSceneDecorationContainer **************************************

// ********** Begin Class UMovieSceneDecorationContainerObject *************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h_111_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneDecorationContainerObject, MOVIESCENE_API)


struct Z_Construct_UClass_UMovieSceneDecorationContainerObject_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneDecorationContainerObject_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDecorationContainerObject(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDecorationContainerObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneDecorationContainerObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDecorationContainerObject, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneDecorationContainerObject_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDecorationContainerObject) \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h_111_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneDecorationContainerObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDecorationContainerObject(UMovieSceneDecorationContainerObject&&) = delete; \
	UMovieSceneDecorationContainerObject(const UMovieSceneDecorationContainerObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneDecorationContainerObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDecorationContainerObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDecorationContainerObject) \
	MOVIESCENE_API virtual ~UMovieSceneDecorationContainerObject();


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h_107_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDecorationContainerObject;

// ********** End Class UMovieSceneDecorationContainerObject ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
