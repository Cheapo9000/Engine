// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneTextPropertySystem.h"

#ifdef MOVIESCENETRACKS_MovieSceneTextPropertySystem_generated_h
#error "MovieSceneTextPropertySystem.generated.h already included, missing '#pragma once' in MovieSceneTextPropertySystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneTextPropertySystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTextPropertySystem ********************************************
struct Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTextPropertySystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTextPropertySystem_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTextPropertySystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneTextPropertySystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTextPropertySystem, UMovieScenePropertySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneTextPropertySystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTextPropertySystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTextPropertySystem_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTextPropertySystem(UMovieSceneTextPropertySystem&&) = delete; \
	UMovieSceneTextPropertySystem(const UMovieSceneTextPropertySystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneTextPropertySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTextPropertySystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTextPropertySystem) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneTextPropertySystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTextPropertySystem_h_8_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTextPropertySystem_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTextPropertySystem_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTextPropertySystem_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTextPropertySystem;

// ********** End Class UMovieSceneTextPropertySystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTextPropertySystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
