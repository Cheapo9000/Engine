// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieScenePropertyTrackExtensions.h"

#ifdef SEQUENCERSCRIPTING_MovieScenePropertyTrackExtensions_generated_h
#error "MovieScenePropertyTrackExtensions.generated.h already included, missing '#pragma once' in MovieScenePropertyTrackExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieScenePropertyTrackExtensions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UEnum;
class UMovieSceneByteTrack;
class UMovieSceneObjectPropertyTrack;
class UMovieScenePropertyTrack;
class UObject;

// ********** Begin Class UMovieScenePropertyTrackExtensions ***************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetByteTrackEnum); \
	DECLARE_FUNCTION(execSetByteTrackEnum); \
	DECLARE_FUNCTION(execGetObjectPropertyClass); \
	DECLARE_FUNCTION(execSetObjectPropertyClass); \
	DECLARE_FUNCTION(execGetUniqueTrackName); \
	DECLARE_FUNCTION(execGetPropertyPath); \
	DECLARE_FUNCTION(execGetPropertyName); \
	DECLARE_FUNCTION(execSetPropertyNameAndPath);


struct Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieScenePropertyTrackExtensions_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePropertyTrackExtensions(); \
	friend struct ::Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieScenePropertyTrackExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScenePropertyTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieScenePropertyTrackExtensions_NoRegister) \
	DECLARE_SERIALIZER(UMovieScenePropertyTrackExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePropertyTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScenePropertyTrackExtensions(UMovieScenePropertyTrackExtensions&&) = delete; \
	UMovieScenePropertyTrackExtensions(const UMovieScenePropertyTrackExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePropertyTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePropertyTrackExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePropertyTrackExtensions) \
	NO_API virtual ~UMovieScenePropertyTrackExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_18_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScenePropertyTrackExtensions;

// ********** End Class UMovieScenePropertyTrackExtensions *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
