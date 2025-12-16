// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorSequencePlayer.h"

#ifdef ACTORSEQUENCE_ActorSequencePlayer_generated_h
#error "ActorSequencePlayer.generated.h already included, missing '#pragma once' in ActorSequencePlayer.h"
#endif
#define ACTORSEQUENCE_ActorSequencePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorSequencePlayer *****************************************************
struct Z_Construct_UClass_UActorSequencePlayer_Statics;
ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister();

#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSequencePlayer(); \
	friend struct ::Z_Construct_UClass_UActorSequencePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORSEQUENCE_API UClass* ::Z_Construct_UClass_UActorSequencePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorSequence"), Z_Construct_UClass_UActorSequencePlayer_NoRegister) \
	DECLARE_SERIALIZER(UActorSequencePlayer)


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORSEQUENCE_API UActorSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorSequencePlayer(UActorSequencePlayer&&) = delete; \
	UActorSequencePlayer(const UActorSequencePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORSEQUENCE_API, UActorSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSequencePlayer) \
	ACTORSEQUENCE_API virtual ~UActorSequencePlayer();


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_15_PROLOG
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorSequencePlayer;

// ********** End Class UActorSequencePlayer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
