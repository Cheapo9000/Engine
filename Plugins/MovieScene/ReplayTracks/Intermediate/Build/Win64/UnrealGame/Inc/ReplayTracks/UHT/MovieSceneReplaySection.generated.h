// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneReplaySection.h"

#ifdef REPLAYTRACKS_MovieSceneReplaySection_generated_h
#error "MovieSceneReplaySection.generated.h already included, missing '#pragma once' in MovieSceneReplaySection.h"
#endif
#define REPLAYTRACKS_MovieSceneReplaySection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneReplaySection *************************************************
struct Z_Construct_UClass_UMovieSceneReplaySection_Statics;
REPLAYTRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaySection_NoRegister();

#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneReplaySection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneReplaySection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYTRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneReplaySection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneReplaySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplayTracks"), Z_Construct_UClass_UMovieSceneReplaySection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneReplaySection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneReplaySection*>(this); }


#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneReplaySection(UMovieSceneReplaySection&&) = delete; \
	UMovieSceneReplaySection(const UMovieSceneReplaySection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLAYTRACKS_API, UMovieSceneReplaySection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneReplaySection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneReplaySection) \
	REPLAYTRACKS_API virtual ~UMovieSceneReplaySection();


#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneReplaySection;

// ********** End Class UMovieSceneReplaySection ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
