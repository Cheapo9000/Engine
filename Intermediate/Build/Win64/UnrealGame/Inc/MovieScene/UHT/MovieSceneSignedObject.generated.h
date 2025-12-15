// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSignedObject.h"

#ifdef MOVIESCENE_MovieSceneSignedObject_generated_h
#error "MovieSceneSignedObject.generated.h already included, missing '#pragma once' in MovieSceneSignedObject.h"
#endif
#define MOVIESCENE_MovieSceneSignedObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneSignedObject **************************************************
struct Z_Construct_UClass_UMovieSceneSignedObject_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSignedObject(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSignedObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSignedObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSignedObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSignedObject_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSignedObject)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_74_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSignedObject(UMovieSceneSignedObject&&) = delete; \
	UMovieSceneSignedObject(const UMovieSceneSignedObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSignedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSignedObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSignedObject) \
	MOVIESCENE_API virtual ~UMovieSceneSignedObject();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_70_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_74_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSignedObject;

// ********** End Class UMovieSceneSignedObject ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
