// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieSceneEventTrackExtensions.h"

#ifdef SEQUENCERSCRIPTING_MovieSceneEventTrackExtensions_generated_h
#error "MovieSceneEventTrackExtensions.generated.h already included, missing '#pragma once' in MovieSceneEventTrackExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneEventTrackExtensions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMovieSceneEventRepeaterSection;
class UMovieSceneEventTrack;
class UMovieSceneEventTriggerSection;
class UObject;
struct FMovieSceneEvent;

// ********** Begin Class UMovieSceneEventTrackExtensions ******************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBoundObjectPropertyClass); \
	DECLARE_FUNCTION(execAddEventTriggerSection); \
	DECLARE_FUNCTION(execAddEventRepeaterSection);


struct Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneEventTrackExtensions_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventTrackExtensions(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneEventTrackExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEventTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneEventTrackExtensions_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEventTrackExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEventTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEventTrackExtensions(UMovieSceneEventTrackExtensions&&) = delete; \
	UMovieSceneEventTrackExtensions(const UMovieSceneEventTrackExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEventTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventTrackExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventTrackExtensions) \
	NO_API virtual ~UMovieSceneEventTrackExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_19_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEventTrackExtensions;

// ********** End Class UMovieSceneEventTrackExtensions ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
