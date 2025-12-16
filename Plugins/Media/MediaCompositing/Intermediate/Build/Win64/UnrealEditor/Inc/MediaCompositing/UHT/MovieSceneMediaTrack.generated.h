// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneMediaTrack.h"

#ifdef MEDIACOMPOSITING_MovieSceneMediaTrack_generated_h
#error "MovieSceneMediaTrack.generated.h already included, missing '#pragma once' in MovieSceneMediaTrack.h"
#endif
#define MEDIACOMPOSITING_MovieSceneMediaTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneMediaTrack ****************************************************
struct Z_Construct_UClass_UMovieSceneMediaTrack_Statics;
MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister();

#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneMediaTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneMediaTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIACOMPOSITING_API UClass* ::Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneMediaTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaCompositing"), Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneMediaTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneMediaTrack*>(this); }


#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneMediaTrack(UMovieSceneMediaTrack&&) = delete; \
	UMovieSceneMediaTrack(const UMovieSceneMediaTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIACOMPOSITING_API, UMovieSceneMediaTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMediaTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMediaTrack) \
	MEDIACOMPOSITING_API virtual ~UMovieSceneMediaTrack();


#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_25_PROLOG
#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneMediaTrack;

// ********** End Class UMovieSceneMediaTrack ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
