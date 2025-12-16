// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneAnimInstanceTargetSystem.h"

#ifdef MOVIESCENEANIMMIXER_MovieSceneAnimInstanceTargetSystem_generated_h
#error "MovieSceneAnimInstanceTargetSystem.generated.h already included, missing '#pragma once' in MovieSceneAnimInstanceTargetSystem.h"
#endif
#define MOVIESCENEANIMMIXER_MovieSceneAnimInstanceTargetSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneAnimInstanceTarget *************************************
struct Z_Construct_UScriptStruct_FMovieSceneAnimInstanceTarget_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneAnimInstanceTarget_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneMixedAnimationTarget Super;


struct FMovieSceneAnimInstanceTarget;
// ********** End ScriptStruct FMovieSceneAnimInstanceTarget ***************************************

// ********** Begin Class USequencerMixedAnimInstance **********************************************
struct Z_Construct_UClass_USequencerMixedAnimInstance_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_USequencerMixedAnimInstance_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerMixedAnimInstance(); \
	friend struct ::Z_Construct_UClass_USequencerMixedAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_USequencerMixedAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerMixedAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_USequencerMixedAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(USequencerMixedAnimInstance) \
	virtual UObject* _getUObject() const override { return const_cast<USequencerMixedAnimInstance*>(this); }


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerMixedAnimInstance(USequencerMixedAnimInstance&&) = delete; \
	USequencerMixedAnimInstance(const USequencerMixedAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, USequencerMixedAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerMixedAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerMixedAnimInstance) \
	MOVIESCENEANIMMIXER_API virtual ~USequencerMixedAnimInstance();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerMixedAnimInstance;

// ********** End Class USequencerMixedAnimInstance ************************************************

// ********** Begin ScriptStruct FSequencerMixedAnimInstanceProxy **********************************
struct Z_Construct_UScriptStruct_FSequencerMixedAnimInstanceProxy_Statics;
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencerMixedAnimInstanceProxy_Statics; \
	MOVIESCENEANIMMIXER_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FSequencerMixedAnimInstanceProxy;
// ********** End ScriptStruct FSequencerMixedAnimInstanceProxy ************************************

// ********** Begin Class UMovieSceneAnimInstanceTargetSystem **************************************
struct Z_Construct_UClass_UMovieSceneAnimInstanceTargetSystem_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneAnimInstanceTargetSystem_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimInstanceTargetSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimInstanceTargetSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneAnimInstanceTargetSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimInstanceTargetSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneAnimInstanceTargetSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimInstanceTargetSystem)


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_119_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimInstanceTargetSystem(UMovieSceneAnimInstanceTargetSystem&&) = delete; \
	UMovieSceneAnimInstanceTargetSystem(const UMovieSceneAnimInstanceTargetSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneAnimInstanceTargetSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimInstanceTargetSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimInstanceTargetSystem)


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_113_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h_119_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimInstanceTargetSystem;

// ********** End Class UMovieSceneAnimInstanceTargetSystem ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Public_Systems_MovieSceneAnimInstanceTargetSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
