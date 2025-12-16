// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneControlRigParameterTrack.h"

#ifdef CONTROLRIG_MovieSceneControlRigParameterTrack_generated_h
#error "MovieSceneControlRigParameterTrack.generated.h already included, missing '#pragma once' in MovieSceneControlRigParameterTrack.h"
#endif
#define CONTROLRIG_MovieSceneControlRigParameterTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlRotationOrder *********************************************
struct Z_Construct_UScriptStruct_FControlRotationOrder_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRotationOrder_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRotationOrder;
// ********** End ScriptStruct FControlRotationOrder ***********************************************

// ********** Begin Class UMovieSceneControlRigParameterTrack **************************************
struct Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneControlRigParameterTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneControlRigParameterTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneControlRigParameterTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneControlRigParameterTrack*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UMovieSceneControlRigParameterTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneControlRigParameterTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UMovieSceneControlRigParameterTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneControlRigParameterTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneControlRigParameterTrack(UMovieSceneControlRigParameterTrack&&) = delete; \
	UMovieSceneControlRigParameterTrack(const UMovieSceneControlRigParameterTrack&) = delete; \
	CONTROLRIG_API virtual ~UMovieSceneControlRigParameterTrack();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_42_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_50_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneControlRigParameterTrack;

// ********** End Class UMovieSceneControlRigParameterTrack ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
