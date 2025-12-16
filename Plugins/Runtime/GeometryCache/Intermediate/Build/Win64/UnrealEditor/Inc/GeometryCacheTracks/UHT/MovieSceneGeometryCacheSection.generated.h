// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGeometryCacheSection.h"

#ifdef GEOMETRYCACHETRACKS_MovieSceneGeometryCacheSection_generated_h
#error "MovieSceneGeometryCacheSection.generated.h already included, missing '#pragma once' in MovieSceneGeometryCacheSection.h"
#endif
#define GEOMETRYCACHETRACKS_MovieSceneGeometryCacheSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneGeometryCacheParams ************************************
struct Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics;
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics; \
	GEOMETRYCACHETRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneGeometryCacheParams;
// ********** End ScriptStruct FMovieSceneGeometryCacheParams **************************************

// ********** Begin Class UMovieSceneGeometryCacheSection ******************************************
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_63_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneGeometryCacheSection, GEOMETRYCACHETRACKS_API)


struct Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics;
GEOMETRYCACHETRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCacheSection_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGeometryCacheSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneGeometryCacheSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneGeometryCacheSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCacheTracks"), Z_Construct_UClass_UMovieSceneGeometryCacheSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneGeometryCacheSection) \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_63_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHETRACKS_API UMovieSceneGeometryCacheSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGeometryCacheSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHETRACKS_API, UMovieSceneGeometryCacheSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGeometryCacheSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneGeometryCacheSection(UMovieSceneGeometryCacheSection&&) = delete; \
	UMovieSceneGeometryCacheSection(const UMovieSceneGeometryCacheSection&) = delete; \
	GEOMETRYCACHETRACKS_API virtual ~UMovieSceneGeometryCacheSection();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_59_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_63_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneGeometryCacheSection;

// ********** End Class UMovieSceneGeometryCacheSection ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
