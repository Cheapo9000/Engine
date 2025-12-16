// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneMixedSkeletalAnimationSystem.h"

#ifdef MOVIESCENEANIMMIXER_MovieSceneMixedSkeletalAnimationSystem_generated_h
#error "MovieSceneMixedSkeletalAnimationSystem.generated.h already included, missing '#pragma once' in MovieSceneMixedSkeletalAnimationSystem.h"
#endif
#define MOVIESCENEANIMMIXER_MovieSceneMixedSkeletalAnimationSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMixedAnimSkeletalAnimationData ***********************************
struct Z_Construct_UScriptStruct_FMixedAnimSkeletalAnimationData_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneMixedSkeletalAnimationSystem_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMixedAnimSkeletalAnimationData_Statics; \
	MOVIESCENEANIMMIXER_API static class UScriptStruct* StaticStruct();


struct FMixedAnimSkeletalAnimationData;
// ********** End ScriptStruct FMixedAnimSkeletalAnimationData *************************************

// ********** Begin ScriptStruct FMovieSceneSkeletalAnimationEvaluationTask ************************
struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationEvaluationTask_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneMixedSkeletalAnimationSystem_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationEvaluationTask_Statics; \
	MOVIESCENEANIMMIXER_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextEvaluationTask Super;


struct FMovieSceneSkeletalAnimationEvaluationTask;
// ********** End ScriptStruct FMovieSceneSkeletalAnimationEvaluationTask **************************

// ********** Begin Class UMovieSceneMixedSkeletalAnimationSystem **********************************
struct Z_Construct_UClass_UMovieSceneMixedSkeletalAnimationSystem_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneMixedSkeletalAnimationSystem_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneMixedSkeletalAnimationSystem_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneMixedSkeletalAnimationSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneMixedSkeletalAnimationSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneMixedSkeletalAnimationSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneMixedSkeletalAnimationSystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneMixedSkeletalAnimationSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneMixedSkeletalAnimationSystem)


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneMixedSkeletalAnimationSystem_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneMixedSkeletalAnimationSystem(UMovieSceneMixedSkeletalAnimationSystem&&) = delete; \
	UMovieSceneMixedSkeletalAnimationSystem(const UMovieSceneMixedSkeletalAnimationSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneMixedSkeletalAnimationSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMixedSkeletalAnimationSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMixedSkeletalAnimationSystem) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneMixedSkeletalAnimationSystem();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneMixedSkeletalAnimationSystem_h_58_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneMixedSkeletalAnimationSystem_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneMixedSkeletalAnimationSystem_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneMixedSkeletalAnimationSystem_h_64_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneMixedSkeletalAnimationSystem;

// ********** End Class UMovieSceneMixedSkeletalAnimationSystem ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneMixedSkeletalAnimationSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
