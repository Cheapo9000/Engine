// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaData/MovieSceneShotMetaData.h"

#ifdef MOVIESCENE_MovieSceneShotMetaData_generated_h
#error "MovieSceneShotMetaData.generated.h already included, missing '#pragma once' in MovieSceneShotMetaData.h"
#endif
#define MOVIESCENE_MovieSceneShotMetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneShotMetaData **************************************************
struct Z_Construct_UClass_UMovieSceneShotMetaData_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneShotMetaData_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneShotMetaData(); \
	friend struct ::Z_Construct_UClass_UMovieSceneShotMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneShotMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneShotMetaData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneShotMetaData_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneShotMetaData) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneShotMetaData*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneShotMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneShotMetaData(UMovieSceneShotMetaData&&) = delete; \
	UMovieSceneShotMetaData(const UMovieSceneShotMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneShotMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneShotMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneShotMetaData) \
	MOVIESCENE_API virtual ~UMovieSceneShotMetaData();


#define FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneShotMetaData;

// ********** End Class UMovieSceneShotMetaData ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
