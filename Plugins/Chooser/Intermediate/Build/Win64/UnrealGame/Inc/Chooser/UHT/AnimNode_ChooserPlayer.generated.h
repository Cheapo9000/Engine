// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNode_ChooserPlayer.h"

#ifdef CHOOSER_AnimNode_ChooserPlayer_generated_h
#error "AnimNode_ChooserPlayer.generated.h already included, missing '#pragma once' in AnimNode_ChooserPlayer.h"
#endif
#define CHOOSER_AnimNode_ChooserPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_ChooserPlayer *******************************************
struct Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_AnimNode_ChooserPlayer_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_BlendStack_Standalone Super;


struct FAnimNode_ChooserPlayer;
// ********** End ScriptStruct FAnimNode_ChooserPlayer *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_AnimNode_ChooserPlayer_h

// ********** Begin Enum EChooserEvaluationFrequency ***********************************************
#define FOREACH_ENUM_ECHOOSEREVALUATIONFREQUENCY(op) \
	op(EChooserEvaluationFrequency::OnInitialUpdate) \
	op(EChooserEvaluationFrequency::OnBecomeRelevant) \
	op(EChooserEvaluationFrequency::OnLoop) \
	op(EChooserEvaluationFrequency::OnUpdate) 

enum class EChooserEvaluationFrequency;
template<> struct TIsUEnumClass<EChooserEvaluationFrequency> { enum { Value = true }; };
template<> CHOOSER_NON_ATTRIBUTED_API UEnum* StaticEnum<EChooserEvaluationFrequency>();
// ********** End Enum EChooserEvaluationFrequency *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
