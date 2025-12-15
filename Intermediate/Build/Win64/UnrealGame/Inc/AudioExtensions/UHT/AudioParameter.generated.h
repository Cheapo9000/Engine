// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioParameter.h"

#ifdef AUDIOEXTENSIONS_AudioParameter_generated_h
#error "AudioParameter.generated.h already included, missing '#pragma once' in AudioParameter.h"
#endif
#define AUDIOEXTENSIONS_AudioParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAudioParameter ***************************************************
struct Z_Construct_UScriptStruct_FAudioParameter_Statics;
#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioParameter_Statics; \
	AUDIOEXTENSIONS_API static class UScriptStruct* StaticStruct();


struct FAudioParameter;
// ********** End ScriptStruct FAudioParameter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h

// ********** Begin Enum EAudioParameterType *******************************************************
#define FOREACH_ENUM_EAUDIOPARAMETERTYPE(op) \
	op(EAudioParameterType::None) \
	op(EAudioParameterType::Boolean) \
	op(EAudioParameterType::Integer) \
	op(EAudioParameterType::Float) \
	op(EAudioParameterType::String) \
	op(EAudioParameterType::Object) \
	op(EAudioParameterType::NoneArray) \
	op(EAudioParameterType::BooleanArray) \
	op(EAudioParameterType::IntegerArray) \
	op(EAudioParameterType::FloatArray) \
	op(EAudioParameterType::StringArray) \
	op(EAudioParameterType::ObjectArray) \
	op(EAudioParameterType::Trigger) \
	op(EAudioParameterType::COUNT) 

enum class EAudioParameterType : uint8;
template<> struct TIsUEnumClass<EAudioParameterType> { enum { Value = true }; };
template<> AUDIOEXTENSIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioParameterType>();
// ********** End Enum EAudioParameterType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
