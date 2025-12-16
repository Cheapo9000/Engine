// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneControlRigSpaceChannel.h"

#ifdef CONTROLRIG_MovieSceneControlRigSpaceChannel_generated_h
#error "MovieSceneControlRigSpaceChannel.generated.h already included, missing '#pragma once' in MovieSceneControlRigSpaceChannel.h"
#endif
#define CONTROLRIG_MovieSceneControlRigSpaceChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneControlRigSpaceBaseKey *********************************
struct Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FMovieSceneControlRigSpaceBaseKey;
// ********** End ScriptStruct FMovieSceneControlRigSpaceBaseKey ***********************************

// ********** Begin ScriptStruct FMovieSceneControlRigSpaceChannel *********************************
struct Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneChannel Super;


struct FMovieSceneControlRigSpaceChannel;
// ********** End ScriptStruct FMovieSceneControlRigSpaceChannel ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h

// ********** Begin Enum EMovieSceneControlRigSpaceType ********************************************
#define FOREACH_ENUM_EMOVIESCENECONTROLRIGSPACETYPE(op) \
	op(EMovieSceneControlRigSpaceType::Parent) \
	op(EMovieSceneControlRigSpaceType::World) \
	op(EMovieSceneControlRigSpaceType::ControlRig) 

enum class EMovieSceneControlRigSpaceType : uint8;
template<> struct TIsUEnumClass<EMovieSceneControlRigSpaceType> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneControlRigSpaceType>();
// ********** End Enum EMovieSceneControlRigSpaceType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
