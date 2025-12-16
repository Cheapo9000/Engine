// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendStack/AnimNode_BlendStack.h"

#ifdef BLENDSTACK_AnimNode_BlendStack_generated_h
#error "AnimNode_BlendStack.generated.h already included, missing '#pragma once' in AnimNode_BlendStack.h"
#endif
#define BLENDSTACK_AnimNode_BlendStack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlendStackAnimPlayer *********************************************
struct Z_Construct_UScriptStruct_FBlendStackAnimPlayer_Statics;
#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendStackAnimPlayer_Statics; \
	BLENDSTACK_API static class UScriptStruct* StaticStruct();


struct FBlendStackAnimPlayer;
// ********** End ScriptStruct FBlendStackAnimPlayer ***********************************************

// ********** Begin ScriptStruct FAnimNode_BlendStack_Standalone ***********************************
struct Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics;
#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics; \
	BLENDSTACK_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_AssetPlayerBase Super;


struct FAnimNode_BlendStack_Standalone;
// ********** End ScriptStruct FAnimNode_BlendStack_Standalone *************************************

// ********** Begin ScriptStruct FAnimNode_BlendStack **********************************************
struct Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics;
#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h_251_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics; \
	BLENDSTACK_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_BlendStack_Standalone Super;


struct FAnimNode_BlendStack;
// ********** End ScriptStruct FAnimNode_BlendStack ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h

// ********** Begin Enum EBlendStack_BlendspaceUpdateMode ******************************************
#define FOREACH_ENUM_EBLENDSTACK_BLENDSPACEUPDATEMODE(op) \
	op(EBlendStack_BlendspaceUpdateMode::InitialOnly) \
	op(EBlendStack_BlendspaceUpdateMode::UpdateActiveOnly) \
	op(EBlendStack_BlendspaceUpdateMode::UpdateAll) 

enum class EBlendStack_BlendspaceUpdateMode : uint8;
template<> struct TIsUEnumClass<EBlendStack_BlendspaceUpdateMode> { enum { Value = true }; };
template<> BLENDSTACK_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendStack_BlendspaceUpdateMode>();
// ********** End Enum EBlendStack_BlendspaceUpdateMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
