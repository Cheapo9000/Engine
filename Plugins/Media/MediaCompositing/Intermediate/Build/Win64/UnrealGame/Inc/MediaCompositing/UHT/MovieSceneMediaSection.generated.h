// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneMediaSection.h"

#ifdef MEDIACOMPOSITING_MovieSceneMediaSection_generated_h
#error "MovieSceneMediaSection.generated.h already included, missing '#pragma once' in MovieSceneMediaSection.h"
#endif
#define MEDIACOMPOSITING_MovieSceneMediaSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneMediaSection **************************************************
struct Z_Construct_UClass_UMovieSceneMediaSection_Statics;
MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaSection_NoRegister();

#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneMediaSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneMediaSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIACOMPOSITING_API UClass* ::Z_Construct_UClass_UMovieSceneMediaSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneMediaSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaCompositing"), Z_Construct_UClass_UMovieSceneMediaSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneMediaSection)


#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneMediaSection(UMovieSceneMediaSection&&) = delete; \
	UMovieSceneMediaSection(const UMovieSceneMediaSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIACOMPOSITING_API, UMovieSceneMediaSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMediaSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMediaSection) \
	MEDIACOMPOSITING_API virtual ~UMovieSceneMediaSection();


#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_26_PROLOG
#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneMediaSection;

// ********** End Class UMovieSceneMediaSection ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
