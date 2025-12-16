// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorSequence.h"

#ifdef ACTORSEQUENCE_ActorSequence_generated_h
#error "ActorSequence.generated.h already included, missing '#pragma once' in ActorSequence.h"
#endif
#define ACTORSEQUENCE_ActorSequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorSequence ***********************************************************
struct Z_Construct_UClass_UActorSequence_Statics;
ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequence_NoRegister();

#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSequence(); \
	friend struct ::Z_Construct_UClass_UActorSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORSEQUENCE_API UClass* ::Z_Construct_UClass_UActorSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorSequence"), Z_Construct_UClass_UActorSequence_NoRegister) \
	DECLARE_SERIALIZER(UActorSequence)


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorSequence(UActorSequence&&) = delete; \
	UActorSequence(const UActorSequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORSEQUENCE_API, UActorSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSequence) \
	ACTORSEQUENCE_API virtual ~UActorSequence();


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_15_PROLOG
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorSequence;

// ********** End Class UActorSequence *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
