// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneAnimMixerSystem.h"

#ifdef MOVIESCENEANIMMIXER_MovieSceneAnimMixerSystem_generated_h
#error "MovieSceneAnimMixerSystem.generated.h already included, missing '#pragma once' in MovieSceneAnimMixerSystem.h"
#endif
#define MOVIESCENEANIMMIXER_MovieSceneAnimMixerSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneAccumulateAbsoluteBlendTask ****************************
struct Z_Construct_UScriptStruct_FMovieSceneAccumulateAbsoluteBlendTask_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimMixerSystem_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneAccumulateAbsoluteBlendTask_Statics; \
	MOVIESCENEANIMMIXER_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextEvaluationTask Super;


struct FMovieSceneAccumulateAbsoluteBlendTask;
// ********** End ScriptStruct FMovieSceneAccumulateAbsoluteBlendTask ******************************

// ********** Begin ScriptStruct FAnimNextBlendTwoKeyframesPreserveRootMotionTask ******************
struct Z_Construct_UScriptStruct_FAnimNextBlendTwoKeyframesPreserveRootMotionTask_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimMixerSystem_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextBlendTwoKeyframesPreserveRootMotionTask_Statics; \
	MOVIESCENEANIMMIXER_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextBlendTwoKeyframesTask Super;


struct FAnimNextBlendTwoKeyframesPreserveRootMotionTask;
// ********** End ScriptStruct FAnimNextBlendTwoKeyframesPreserveRootMotionTask ********************

// ********** Begin Class UMovieSceneAnimMixerSystem ***********************************************
struct Z_Construct_UClass_UMovieSceneAnimMixerSystem_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneAnimMixerSystem_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimMixerSystem_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimMixerSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimMixerSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneAnimMixerSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimMixerSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneAnimMixerSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimMixerSystem)


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimMixerSystem_h_144_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimMixerSystem(UMovieSceneAnimMixerSystem&&) = delete; \
	UMovieSceneAnimMixerSystem(const UMovieSceneAnimMixerSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneAnimMixerSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimMixerSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimMixerSystem) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneAnimMixerSystem();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimMixerSystem_h_138_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimMixerSystem_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimMixerSystem_h_144_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimMixerSystem_h_144_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimMixerSystem;

// ********** End Class UMovieSceneAnimMixerSystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimMixerSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
