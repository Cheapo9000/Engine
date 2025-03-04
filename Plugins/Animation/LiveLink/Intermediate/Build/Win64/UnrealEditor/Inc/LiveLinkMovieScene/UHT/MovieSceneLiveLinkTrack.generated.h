// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/MovieSceneLiveLinkTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKMOVIESCENE_MovieSceneLiveLinkTrack_generated_h
#error "MovieSceneLiveLinkTrack.generated.h already included, missing '#pragma once' in MovieSceneLiveLinkTrack.h"
#endif
#define LIVELINKMOVIESCENE_MovieSceneLiveLinkTrack_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneLiveLinkTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneLiveLinkTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkMovieScene"), LIVELINKMOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneLiveLinkTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneLiveLinkTrack*>(this); }


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneLiveLinkTrack(UMovieSceneLiveLinkTrack&&); \
	UMovieSceneLiveLinkTrack(const UMovieSceneLiveLinkTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKMOVIESCENE_API, UMovieSceneLiveLinkTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLiveLinkTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLiveLinkTrack) \
	LIVELINKMOVIESCENE_API virtual ~UMovieSceneLiveLinkTrack();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_14_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKMOVIESCENE_API UClass* StaticClass<class UMovieSceneLiveLinkTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
