// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneTracksSettings.h"

#ifdef MOVIESCENETRACKS_MovieSceneTracksSettings_generated_h
#error "MovieSceneTracksSettings.generated.h already included, missing '#pragma once' in MovieSceneTracksSettings.h"
#endif
#define MOVIESCENETRACKS_MovieSceneTracksSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTracksSettings ************************************************
struct Z_Construct_UClass_UMovieSceneTracksSettings_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTracksSettings_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTracksSettings(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTracksSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneTracksSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTracksSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneTracksSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTracksSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTracksSettings(UMovieSceneTracksSettings&&) = delete; \
	UMovieSceneTracksSettings(const UMovieSceneTracksSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneTracksSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTracksSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTracksSettings) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneTracksSettings();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksSettings_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTracksSettings;

// ********** End Class UMovieSceneTracksSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
