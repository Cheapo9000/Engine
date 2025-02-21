// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNode_ChooserPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_AnimNode_ChooserPlayer_generated_h
#error "AnimNode_ChooserPlayer.generated.h already included, missing '#pragma once' in AnimNode_ChooserPlayer.h"
#endif
#define CHOOSER_AnimNode_ChooserPlayer_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_AnimNode_ChooserPlayer_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimCurveOverride_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FAnimCurveOverride>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_AnimNode_ChooserPlayer_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimCurveOverrideList_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FAnimCurveOverrideList>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_AnimNode_ChooserPlayer_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserPlayerSettings_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserPlayerSettings>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_AnimNode_ChooserPlayer_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_BlendStack_Standalone Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FAnimNode_ChooserPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_AnimNode_ChooserPlayer_h


#define FOREACH_ENUM_ECHOOSEREVALUATIONFREQUENCY(op) \
	op(EChooserEvaluationFrequency::OnInitialUpdate) \
	op(EChooserEvaluationFrequency::OnBecomeRelevant) \
	op(EChooserEvaluationFrequency::OnLoop) \
	op(EChooserEvaluationFrequency::OnUpdate) 

enum class EChooserEvaluationFrequency;
template<> struct TIsUEnumClass<EChooserEvaluationFrequency> { enum { Value = true }; };
template<> CHOOSER_API UEnum* StaticEnum<EChooserEvaluationFrequency>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
