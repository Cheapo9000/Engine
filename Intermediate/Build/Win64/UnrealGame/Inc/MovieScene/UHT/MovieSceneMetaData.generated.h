// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneMetaData.h"

#ifdef MOVIESCENE_MovieSceneMetaData_generated_h
#error "MovieSceneMetaData.generated.h already included, missing '#pragma once' in MovieSceneMetaData.h"
#endif
#define MOVIESCENE_MovieSceneMetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;

// ********** Begin Class UMovieSceneMetaData ******************************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNotes); \
	DECLARE_FUNCTION(execSetCreated); \
	DECLARE_FUNCTION(execSetAuthor); \
	DECLARE_FUNCTION(execGetNotes); \
	DECLARE_FUNCTION(execGetCreated); \
	DECLARE_FUNCTION(execGetAuthor);


struct Z_Construct_UClass_UMovieSceneMetaData_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneMetaData_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneMetaData(); \
	friend struct ::Z_Construct_UClass_UMovieSceneMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneMetaData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneMetaData_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneMetaData) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneMetaData*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneMetaData(UMovieSceneMetaData&&) = delete; \
	UMovieSceneMetaData(const UMovieSceneMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMetaData) \
	MOVIESCENE_API virtual ~UMovieSceneMetaData();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneMetaData;

// ********** End Class UMovieSceneMetaData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
