// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneAnimNextTargetSystem.h"

#ifdef MOVIESCENEANIMMIXER_MovieSceneAnimNextTargetSystem_generated_h
#error "MovieSceneAnimNextTargetSystem.generated.h already included, missing '#pragma once' in MovieSceneAnimNextTargetSystem.h"
#endif
#define MOVIESCENEANIMMIXER_MovieSceneAnimNextTargetSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneAnimNextInjectionTarget ********************************
struct Z_Construct_UScriptStruct_FMovieSceneAnimNextInjectionTarget_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimNextTargetSystem_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneAnimNextInjectionTarget_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneMixedAnimationTarget Super;


struct FMovieSceneAnimNextInjectionTarget;
// ********** End ScriptStruct FMovieSceneAnimNextInjectionTarget **********************************

// ********** Begin Class UMovieSceneAnimNextTargetSystem ******************************************
struct Z_Construct_UClass_UMovieSceneAnimNextTargetSystem_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneAnimNextTargetSystem_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimNextTargetSystem_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimNextTargetSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimNextTargetSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneAnimNextTargetSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimNextTargetSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneAnimNextTargetSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimNextTargetSystem)


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimNextTargetSystem_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimNextTargetSystem(UMovieSceneAnimNextTargetSystem&&) = delete; \
	UMovieSceneAnimNextTargetSystem(const UMovieSceneAnimNextTargetSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneAnimNextTargetSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimNextTargetSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimNextTargetSystem) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneAnimNextTargetSystem();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimNextTargetSystem_h_67_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimNextTargetSystem_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimNextTargetSystem_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimNextTargetSystem_h_73_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimNextTargetSystem;

// ********** End Class UMovieSceneAnimNextTargetSystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimNextTargetSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
