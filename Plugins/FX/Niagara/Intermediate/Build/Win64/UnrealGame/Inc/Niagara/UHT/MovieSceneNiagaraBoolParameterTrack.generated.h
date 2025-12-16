// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/Parameters/MovieSceneNiagaraBoolParameterTrack.h"

#ifdef NIAGARA_MovieSceneNiagaraBoolParameterTrack_generated_h
#error "MovieSceneNiagaraBoolParameterTrack.generated.h already included, missing '#pragma once' in MovieSceneNiagaraBoolParameterTrack.h"
#endif
#define NIAGARA_MovieSceneNiagaraBoolParameterTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneNiagaraBoolParameterTrack *************************************
struct Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraBoolParameterTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNiagaraBoolParameterTrack, UMovieSceneNiagaraParameterTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraBoolParameterTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneNiagaraBoolParameterTrack*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UMovieSceneNiagaraBoolParameterTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraBoolParameterTrack(UMovieSceneNiagaraBoolParameterTrack&&) = delete; \
	UMovieSceneNiagaraBoolParameterTrack(const UMovieSceneNiagaraBoolParameterTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UMovieSceneNiagaraBoolParameterTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraBoolParameterTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNiagaraBoolParameterTrack) \
	NIAGARA_API virtual ~UMovieSceneNiagaraBoolParameterTrack();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_10_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNiagaraBoolParameterTrack;

// ********** End Class UMovieSceneNiagaraBoolParameterTrack ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
