// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h"

#ifdef NIAGARAEDITOR_MovieSceneNiagaraEmitterTrack_generated_h
#error "MovieSceneNiagaraEmitterTrack.generated.h already included, missing '#pragma once' in MovieSceneNiagaraEmitterTrack.h"
#endif
#define NIAGARAEDITOR_MovieSceneNiagaraEmitterTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneNiagaraEmitterSectionBase *************************************
struct Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraEmitterSectionBase(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNiagaraEmitterSectionBase, UMovieSceneSection, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraEmitterSectionBase)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UMovieSceneNiagaraEmitterSectionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraEmitterSectionBase(UMovieSceneNiagaraEmitterSectionBase&&) = delete; \
	UMovieSceneNiagaraEmitterSectionBase(const UMovieSceneNiagaraEmitterSectionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UMovieSceneNiagaraEmitterSectionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraEmitterSectionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNiagaraEmitterSectionBase) \
	NIAGARAEDITOR_API virtual ~UMovieSceneNiagaraEmitterSectionBase();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_16_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNiagaraEmitterSectionBase;

// ********** End Class UMovieSceneNiagaraEmitterSectionBase ***************************************

// ********** Begin Class UMovieSceneNiagaraEmitterTrack *******************************************
struct Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraEmitterTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNiagaraEmitterTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraEmitterTrack)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UMovieSceneNiagaraEmitterTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNiagaraEmitterTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UMovieSceneNiagaraEmitterTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraEmitterTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraEmitterTrack(UMovieSceneNiagaraEmitterTrack&&) = delete; \
	UMovieSceneNiagaraEmitterTrack(const UMovieSceneNiagaraEmitterTrack&) = delete;


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_53_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_57_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNiagaraEmitterTrack;

// ********** End Class UMovieSceneNiagaraEmitterTrack *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
