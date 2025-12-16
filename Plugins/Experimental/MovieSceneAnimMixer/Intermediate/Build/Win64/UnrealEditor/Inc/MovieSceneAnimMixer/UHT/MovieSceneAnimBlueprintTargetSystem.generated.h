// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneAnimBlueprintTargetSystem.h"

#ifdef MOVIESCENEANIMMIXER_MovieSceneAnimBlueprintTargetSystem_generated_h
#error "MovieSceneAnimBlueprintTargetSystem.generated.h already included, missing '#pragma once' in MovieSceneAnimBlueprintTargetSystem.h"
#endif
#define MOVIESCENEANIMMIXER_MovieSceneAnimBlueprintTargetSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneAnimBlueprintTarget ************************************
struct Z_Construct_UScriptStruct_FMovieSceneAnimBlueprintTarget_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimBlueprintTargetSystem_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneAnimBlueprintTarget_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneMixedAnimationTarget Super;


struct FMovieSceneAnimBlueprintTarget;
// ********** End ScriptStruct FMovieSceneAnimBlueprintTarget **************************************

// ********** Begin Class UMovieSceneAnimBlueprintTargetSystem *************************************
struct Z_Construct_UClass_UMovieSceneAnimBlueprintTargetSystem_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneAnimBlueprintTargetSystem_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimBlueprintTargetSystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimBlueprintTargetSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimBlueprintTargetSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneAnimBlueprintTargetSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimBlueprintTargetSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneAnimBlueprintTargetSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimBlueprintTargetSystem)


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimBlueprintTargetSystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimBlueprintTargetSystem(UMovieSceneAnimBlueprintTargetSystem&&) = delete; \
	UMovieSceneAnimBlueprintTargetSystem(const UMovieSceneAnimBlueprintTargetSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneAnimBlueprintTargetSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimBlueprintTargetSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimBlueprintTargetSystem) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneAnimBlueprintTargetSystem();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimBlueprintTargetSystem_h_35_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimBlueprintTargetSystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimBlueprintTargetSystem_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimBlueprintTargetSystem_h_40_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimBlueprintTargetSystem;

// ********** End Class UMovieSceneAnimBlueprintTargetSystem ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimBlueprintTargetSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
