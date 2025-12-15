// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Channels/MovieSceneChannelOverrideContainer.h"

#ifdef MOVIESCENE_MovieSceneChannelOverrideContainer_generated_h
#error "MovieSceneChannelOverrideContainer.generated.h already included, missing '#pragma once' in MovieSceneChannelOverrideContainer.h"
#endif
#define MOVIESCENE_MovieSceneChannelOverrideContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneChannelOverrideContainer **************************************
struct Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideContainer_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneChannelOverrideContainer(); \
	friend struct ::Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneChannelOverrideContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneChannelOverrideContainer, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneChannelOverrideContainer_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneChannelOverrideContainer)


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneChannelOverrideContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneChannelOverrideContainer(UMovieSceneChannelOverrideContainer&&) = delete; \
	UMovieSceneChannelOverrideContainer(const UMovieSceneChannelOverrideContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneChannelOverrideContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneChannelOverrideContainer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneChannelOverrideContainer) \
	MOVIESCENE_API virtual ~UMovieSceneChannelOverrideContainer();


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_44_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneChannelOverrideContainer;

// ********** End Class UMovieSceneChannelOverrideContainer ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
