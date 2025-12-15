// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Constraints/MovieSceneConstraintChannelHelper.h"

#ifdef MOVIESCENETOOLS_MovieSceneConstraintChannelHelper_generated_h
#error "MovieSceneConstraintChannelHelper.generated.h already included, missing '#pragma once' in MovieSceneConstraintChannelHelper.h"
#endif
#define MOVIESCENETOOLS_MovieSceneConstraintChannelHelper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSequencerCreationOptions *****************************************
struct Z_Construct_UScriptStruct_FSequencerCreationOptions_Statics;
#define FID_Engine_Source_Editor_MovieSceneTools_Public_Constraints_MovieSceneConstraintChannelHelper_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencerCreationOptions_Statics; \
	MOVIESCENETOOLS_API static class UScriptStruct* StaticStruct();


struct FSequencerCreationOptions;
// ********** End ScriptStruct FSequencerCreationOptions *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Public_Constraints_MovieSceneConstraintChannelHelper_h

// ********** Begin Enum ECreationTime *************************************************************
#define FOREACH_ENUM_ECREATIONTIME(op) \
	op(ECreationTime::CurrentFrame) \
	op(ECreationTime::FromStart) \
	op(ECreationTime::Infinite) 

enum class ECreationTime : uint8;
template<> struct TIsUEnumClass<ECreationTime> { enum { Value = true }; };
template<> MOVIESCENETOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECreationTime>();
// ********** End Enum ECreationTime ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
