// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGroomCacheTrack.h"

#ifdef HAIRSTRANDSCORE_MovieSceneGroomCacheTrack_generated_h
#error "MovieSceneGroomCacheTrack.generated.h already included, missing '#pragma once' in MovieSceneGroomCacheTrack.h"
#endif
#define HAIRSTRANDSCORE_MovieSceneGroomCacheTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneGroomCacheTrack ***********************************************
struct Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheTrack_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGroomCacheTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UMovieSceneGroomCacheTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneGroomCacheTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UMovieSceneGroomCacheTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneGroomCacheTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneGroomCacheTrack*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UMovieSceneGroomCacheTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGroomCacheTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UMovieSceneGroomCacheTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGroomCacheTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneGroomCacheTrack(UMovieSceneGroomCacheTrack&&) = delete; \
	UMovieSceneGroomCacheTrack(const UMovieSceneGroomCacheTrack&) = delete; \
	HAIRSTRANDSCORE_API virtual ~UMovieSceneGroomCacheTrack();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneGroomCacheTrack;

// ********** End Class UMovieSceneGroomCacheTrack *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
