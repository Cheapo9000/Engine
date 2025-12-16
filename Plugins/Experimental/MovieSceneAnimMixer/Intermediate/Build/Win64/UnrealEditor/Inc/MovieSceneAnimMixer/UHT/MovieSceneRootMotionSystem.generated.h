// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneRootMotionSystem.h"

#ifdef MOVIESCENEANIMMIXER_MovieSceneRootMotionSystem_generated_h
#error "MovieSceneRootMotionSystem.generated.h already included, missing '#pragma once' in MovieSceneRootMotionSystem.h"
#endif
#define MOVIESCENEANIMMIXER_MovieSceneRootMotionSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSkeletalAnimationRootMotionOverride ******************************
struct Z_Construct_UScriptStruct_FSkeletalAnimationRootMotionOverride_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkeletalAnimationRootMotionOverride_Statics; \
	MOVIESCENEANIMMIXER_API static class UScriptStruct* StaticStruct();


struct FSkeletalAnimationRootMotionOverride;
// ********** End ScriptStruct FSkeletalAnimationRootMotionOverride ********************************

// ********** Begin ScriptStruct FAnimNextConvertRootMotionToWorldSpaceTask ************************
struct Z_Construct_UScriptStruct_FAnimNextConvertRootMotionToWorldSpaceTask_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextConvertRootMotionToWorldSpaceTask_Statics; \
	MOVIESCENEANIMMIXER_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextEvaluationTask Super;


struct FAnimNextConvertRootMotionToWorldSpaceTask;
// ********** End ScriptStruct FAnimNextConvertRootMotionToWorldSpaceTask **************************

// ********** Begin ScriptStruct FAnimNextStoreRootTransformTask ***********************************
struct Z_Construct_UScriptStruct_FAnimNextStoreRootTransformTask_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextStoreRootTransformTask_Statics; \
	MOVIESCENEANIMMIXER_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextEvaluationTask Super;


struct FAnimNextStoreRootTransformTask;
// ********** End ScriptStruct FAnimNextStoreRootTransformTask *************************************

// ********** Begin Class UMovieSceneRootMotionSystem **********************************************
struct Z_Construct_UClass_UMovieSceneRootMotionSystem_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneRootMotionSystem_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneRootMotionSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneRootMotionSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneRootMotionSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneRootMotionSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneRootMotionSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneRootMotionSystem)


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h_174_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneRootMotionSystem(UMovieSceneRootMotionSystem&&) = delete; \
	UMovieSceneRootMotionSystem(const UMovieSceneRootMotionSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneRootMotionSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneRootMotionSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneRootMotionSystem) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneRootMotionSystem();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h_168_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h_174_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h_174_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneRootMotionSystem;

// ********** End Class UMovieSceneRootMotionSystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneRootMotionSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
