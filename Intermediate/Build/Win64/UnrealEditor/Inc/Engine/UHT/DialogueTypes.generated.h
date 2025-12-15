// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/DialogueTypes.h"

#ifdef ENGINE_DialogueTypes_generated_h
#error "DialogueTypes.generated.h already included, missing '#pragma once' in DialogueTypes.h"
#endif
#define ENGINE_DialogueTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDialogueContext **************************************************
struct Z_Construct_UScriptStruct_FDialogueContext_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDialogueContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDialogueContext;
// ********** End ScriptStruct FDialogueContext ****************************************************

// ********** Begin ScriptStruct FDialogueWaveParameter ********************************************
struct Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDialogueWaveParameter;
// ********** End ScriptStruct FDialogueWaveParameter **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h

// ********** Begin Enum EGrammaticalGender ********************************************************
#define FOREACH_ENUM_EGRAMMATICALGENDER(op) \
	op(EGrammaticalGender::Neuter) \
	op(EGrammaticalGender::Masculine) \
	op(EGrammaticalGender::Feminine) \
	op(EGrammaticalGender::Mixed) 

namespace EGrammaticalGender { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGrammaticalGender::Type>();
// ********** End Enum EGrammaticalGender **********************************************************

// ********** Begin Enum EGrammaticalNumber ********************************************************
#define FOREACH_ENUM_EGRAMMATICALNUMBER(op) \
	op(EGrammaticalNumber::Singular) \
	op(EGrammaticalNumber::Plural) 

namespace EGrammaticalNumber { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGrammaticalNumber::Type>();
// ********** End Enum EGrammaticalNumber **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
