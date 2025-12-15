// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_BlendListBase.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_BlendListBase_generated_h
#error "AnimNode_BlendListBase.generated.h already included, missing '#pragma once' in AnimNode_BlendListBase.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_BlendListBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_BlendListBase *******************************************
struct Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_BlendListBase;
// ********** End ScriptStruct FAnimNode_BlendListBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h

// ********** Begin Enum EBlendListTransitionType **************************************************
#define FOREACH_ENUM_EBLENDLISTTRANSITIONTYPE(op) \
	op(EBlendListTransitionType::StandardBlend) \
	op(EBlendListTransitionType::Inertialization) 

enum class EBlendListTransitionType : uint8;
template<> struct TIsUEnumClass<EBlendListTransitionType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendListTransitionType>();
// ********** End Enum EBlendListTransitionType ****************************************************

// ********** Begin Enum EBlendListChildUpdateMode *************************************************
#define FOREACH_ENUM_EBLENDLISTCHILDUPDATEMODE(op) \
	op(EBlendListChildUpdateMode::Default) \
	op(EBlendListChildUpdateMode::ResetChildOnActivate) \
	op(EBlendListChildUpdateMode::AlwaysTickChildren) 

enum class EBlendListChildUpdateMode : uint8;
template<> struct TIsUEnumClass<EBlendListChildUpdateMode> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendListChildUpdateMode>();
// ********** End Enum EBlendListChildUpdateMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
