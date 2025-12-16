// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h"

#ifdef SEQUENCERSCRIPTING_MovieScenePrimitiveMaterialTrackExtensions_generated_h
#error "MovieScenePrimitiveMaterialTrackExtensions.generated.h already included, missing '#pragma once' in MovieScenePrimitiveMaterialTrackExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieScenePrimitiveMaterialTrackExtensions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieScenePrimitiveMaterialTrack;
struct FComponentMaterialInfo;

// ********** Begin Class UMovieScenePrimitiveMaterialTrackExtensions ******************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialInfo); \
	DECLARE_FUNCTION(execSetMaterialInfo); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execSetMaterialIndex);


struct Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePrimitiveMaterialTrackExtensions(); \
	friend struct ::Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScenePrimitiveMaterialTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_NoRegister) \
	DECLARE_SERIALIZER(UMovieScenePrimitiveMaterialTrackExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePrimitiveMaterialTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScenePrimitiveMaterialTrackExtensions(UMovieScenePrimitiveMaterialTrackExtensions&&) = delete; \
	UMovieScenePrimitiveMaterialTrackExtensions(const UMovieScenePrimitiveMaterialTrackExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePrimitiveMaterialTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePrimitiveMaterialTrackExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePrimitiveMaterialTrackExtensions) \
	NO_API virtual ~UMovieScenePrimitiveMaterialTrackExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_16_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScenePrimitiveMaterialTrackExtensions;

// ********** End Class UMovieScenePrimitiveMaterialTrackExtensions ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
