// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneDataLayerSystem.h"

#ifdef MOVIESCENETRACKS_MovieSceneDataLayerSystem_generated_h
#error "MovieSceneDataLayerSystem.generated.h already included, missing '#pragma once' in MovieSceneDataLayerSystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneDataLayerSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneDataLayerSystem ***********************************************
struct Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDataLayerSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneDataLayerSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDataLayerSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneDataLayerSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDataLayerSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDataLayerSystem(UMovieSceneDataLayerSystem&&) = delete; \
	UMovieSceneDataLayerSystem(const UMovieSceneDataLayerSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneDataLayerSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDataLayerSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDataLayerSystem) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneDataLayerSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_29_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_35_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDataLayerSystem;

// ********** End Class UMovieSceneDataLayerSystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
