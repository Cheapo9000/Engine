// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneAnimMixerSettings.h"

#ifdef MOVIESCENEANIMMIXER_MovieSceneAnimMixerSettings_generated_h
#error "MovieSceneAnimMixerSettings.generated.h already included, missing '#pragma once' in MovieSceneAnimMixerSettings.h"
#endif
#define MOVIESCENEANIMMIXER_MovieSceneAnimMixerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneAnimMixerSettings *********************************************
struct Z_Construct_UClass_UMovieSceneAnimMixerSettings_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneAnimMixerSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_MovieSceneAnimMixerSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimMixerSettings(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimMixerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneAnimMixerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimMixerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneAnimMixerSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimMixerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_MovieSceneAnimMixerSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENEANIMMIXER_API UMovieSceneAnimMixerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimMixerSettings(UMovieSceneAnimMixerSettings&&) = delete; \
	UMovieSceneAnimMixerSettings(const UMovieSceneAnimMixerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneAnimMixerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimMixerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimMixerSettings) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneAnimMixerSettings();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_MovieSceneAnimMixerSettings_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_MovieSceneAnimMixerSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_MovieSceneAnimMixerSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_MovieSceneAnimMixerSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimMixerSettings;

// ********** End Class UMovieSceneAnimMixerSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_MovieSceneAnimMixerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
