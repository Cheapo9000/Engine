// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSpawnable.h"

#ifdef MOVIESCENE_MovieSceneSpawnable_generated_h
#error "MovieSceneSpawnable.generated.h already included, missing '#pragma once' in MovieSceneSpawnable.h"
#endif
#define MOVIESCENE_MovieSceneSpawnable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneSpawnable **********************************************
struct Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSpawnable;
// ********** End ScriptStruct FMovieSceneSpawnable ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h

// ********** Begin Enum ESpawnOwnership ***********************************************************
#define FOREACH_ENUM_ESPAWNOWNERSHIP(op) \
	op(ESpawnOwnership::InnerSequence) \
	op(ESpawnOwnership::RootSequence) \
	op(ESpawnOwnership::External) 

enum class ESpawnOwnership : uint8;
template<> struct TIsUEnumClass<ESpawnOwnership> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpawnOwnership>();
// ********** End Enum ESpawnOwnership *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
