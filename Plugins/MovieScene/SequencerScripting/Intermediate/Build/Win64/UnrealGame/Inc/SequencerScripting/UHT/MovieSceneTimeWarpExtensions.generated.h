// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieSceneTimeWarpExtensions.h"

#ifdef SEQUENCERSCRIPTING_MovieSceneTimeWarpExtensions_generated_h
#error "MovieSceneTimeWarpExtensions.generated.h already included, missing '#pragma once' in MovieSceneTimeWarpExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneTimeWarpExtensions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneTimeWarpVariant;

// ********** Begin Class UMovieSceneTimeWarpExtensions ********************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeTimeWarp); \
	DECLARE_FUNCTION(execBreakTimeWarp); \
	DECLARE_FUNCTION(execSetFixedPlayRate); \
	DECLARE_FUNCTION(execToFixedPlayRate); \
	DECLARE_FUNCTION(execConv_PlayRateToTimeWarpVariant); \
	DECLARE_FUNCTION(execConv_TimeWarpVariantToPlayRate);


struct Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpExtensions_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTimeWarpExtensions(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneTimeWarpExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTimeWarpExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneTimeWarpExtensions_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTimeWarpExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneTimeWarpExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTimeWarpExtensions(UMovieSceneTimeWarpExtensions&&) = delete; \
	UMovieSceneTimeWarpExtensions(const UMovieSceneTimeWarpExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneTimeWarpExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTimeWarpExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTimeWarpExtensions) \
	NO_API virtual ~UMovieSceneTimeWarpExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_15_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTimeWarpExtensions;

// ********** End Class UMovieSceneTimeWarpExtensions **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
