// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/MovieSceneComposurePostMoveSettingsSection.h"

#ifdef COMPOSURE_MovieSceneComposurePostMoveSettingsSection_generated_h
#error "MovieSceneComposurePostMoveSettingsSection.generated.h already included, missing '#pragma once' in MovieSceneComposurePostMoveSettingsSection.h"
#endif
#define COMPOSURE_MovieSceneComposurePostMoveSettingsSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneComposurePostMoveSettingsSection ******************************
struct Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneComposurePostMoveSettingsSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneComposurePostMoveSettingsSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneComposurePostMoveSettingsSection)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSURE_API UMovieSceneComposurePostMoveSettingsSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComposurePostMoveSettingsSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UMovieSceneComposurePostMoveSettingsSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComposurePostMoveSettingsSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneComposurePostMoveSettingsSection(UMovieSceneComposurePostMoveSettingsSection&&) = delete; \
	UMovieSceneComposurePostMoveSettingsSection(const UMovieSceneComposurePostMoveSettingsSection&) = delete; \
	COMPOSURE_API virtual ~UMovieSceneComposurePostMoveSettingsSection();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_12_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_16_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneComposurePostMoveSettingsSection;

// ********** End Class UMovieSceneComposurePostMoveSettingsSection ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
