// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendStack/AnimNode_BlendStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLENDSTACK_AnimNode_BlendStack_generated_h
#error "AnimNode_BlendStack.generated.h already included, missing '#pragma once' in AnimNode_BlendStack.h"
#endif
#define BLENDSTACK_AnimNode_BlendStack_generated_h

#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendStackAnimPlayer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BLENDSTACK_API UScriptStruct* StaticStruct<struct FBlendStackAnimPlayer>();

#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_AssetPlayerBase Super;


template<> BLENDSTACK_API UScriptStruct* StaticStruct<struct FAnimNode_BlendStack_Standalone>();

#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_BlendStack_Standalone Super;


template<> BLENDSTACK_API UScriptStruct* StaticStruct<struct FAnimNode_BlendStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h


#define FOREACH_ENUM_EBLENDSTACK_BLENDSPACEUPDATEMODE(op) \
	op(EBlendStack_BlendspaceUpdateMode::InitialOnly) \
	op(EBlendStack_BlendspaceUpdateMode::UpdateActiveOnly) \
	op(EBlendStack_BlendspaceUpdateMode::UpdateAll) 

enum class EBlendStack_BlendspaceUpdateMode : uint8;
template<> struct TIsUEnumClass<EBlendStack_BlendspaceUpdateMode> { enum { Value = true }; };
template<> BLENDSTACK_API UEnum* StaticEnum<EBlendStack_BlendspaceUpdateMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
