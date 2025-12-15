// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationRecorder.h"

#ifdef SEQUENCERECORDER_AnimationRecorder_generated_h
#error "AnimationRecorder.generated.h already included, missing '#pragma once' in AnimationRecorder.h"
#endif
#define SEQUENCERECORDER_AnimationRecorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTimecodeBoneMethod ***********************************************
struct Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics;
#define FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics; \
	SEQUENCERECORDER_API static class UScriptStruct* StaticStruct();


struct FTimecodeBoneMethod;
// ********** End ScriptStruct FTimecodeBoneMethod *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h

// ********** Begin Enum ETimecodeBoneMode *********************************************************
#define FOREACH_ENUM_ETIMECODEBONEMODE(op) \
	op(ETimecodeBoneMode::All) \
	op(ETimecodeBoneMode::Root) \
	op(ETimecodeBoneMode::UserDefined) 

enum class ETimecodeBoneMode : uint8;
template<> struct TIsUEnumClass<ETimecodeBoneMode> { enum { Value = true }; };
template<> SEQUENCERECORDER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimecodeBoneMode>();
// ********** End Enum ETimecodeBoneMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
