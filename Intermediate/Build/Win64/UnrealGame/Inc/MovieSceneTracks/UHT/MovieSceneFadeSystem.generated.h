// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneFadeSystem.h"

#ifdef MOVIESCENETRACKS_MovieSceneFadeSystem_generated_h
#error "MovieSceneFadeSystem.generated.h already included, missing '#pragma once' in MovieSceneFadeSystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneFadeSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneFadeSystem ****************************************************
struct Z_Construct_UClass_UMovieSceneFadeSystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFadeSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneFadeSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneFadeSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneFadeSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneFadeSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneFadeSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneFadeSystem(UMovieSceneFadeSystem&&) = delete; \
	UMovieSceneFadeSystem(const UMovieSceneFadeSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFadeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFadeSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFadeSystem) \
	NO_API virtual ~UMovieSceneFadeSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneFadeSystem;

// ********** End Class UMovieSceneFadeSystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
