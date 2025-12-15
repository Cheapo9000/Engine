// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePlayerSettings.h"

#ifdef MOVIEPLAYER_MoviePlayerSettings_generated_h
#error "MoviePlayerSettings.generated.h already included, missing '#pragma once' in MoviePlayerSettings.h"
#endif
#define MOVIEPLAYER_MoviePlayerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePlayerSettings *****************************************************
struct Z_Construct_UClass_UMoviePlayerSettings_Statics;
MOVIEPLAYER_API UClass* Z_Construct_UClass_UMoviePlayerSettings_NoRegister();

#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePlayerSettings(); \
	friend struct ::Z_Construct_UClass_UMoviePlayerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIEPLAYER_API UClass* ::Z_Construct_UClass_UMoviePlayerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePlayerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoviePlayer"), Z_Construct_UClass_UMoviePlayerSettings_NoRegister) \
	DECLARE_SERIALIZER(UMoviePlayerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIEPLAYER_API UMoviePlayerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePlayerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIEPLAYER_API, UMoviePlayerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePlayerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePlayerSettings(UMoviePlayerSettings&&) = delete; \
	UMoviePlayerSettings(const UMoviePlayerSettings&) = delete; \
	MOVIEPLAYER_API virtual ~UMoviePlayerSettings();


#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_18_PROLOG
#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_INCLASS \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePlayerSettings;

// ********** End Class UMoviePlayerSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
