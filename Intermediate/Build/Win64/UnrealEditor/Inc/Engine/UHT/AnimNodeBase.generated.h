// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNodeBase.h"

#ifdef ENGINE_AnimNodeBase_generated_h
#error "AnimNodeBase.generated.h already included, missing '#pragma once' in AnimNodeBase.h"
#endif
#define ENGINE_AnimNodeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPoseLinkBase *****************************************************
struct Z_Construct_UScriptStruct_FPoseLinkBase_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_751_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPoseLinkBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPoseLinkBase;
// ********** End ScriptStruct FPoseLinkBase *******************************************************

// ********** Begin ScriptStruct FPoseLink *********************************************************
struct Z_Construct_UScriptStruct_FPoseLink_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_820_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPoseLink_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


struct FPoseLink;
// ********** End ScriptStruct FPoseLink ***********************************************************

// ********** Begin ScriptStruct FComponentSpacePoseLink *******************************************
struct Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_837_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


struct FComponentSpacePoseLink;
// ********** End ScriptStruct FComponentSpacePoseLink *********************************************

// ********** Begin ScriptStruct FAnimNode_Base ****************************************************
struct Z_Construct_UScriptStruct_FAnimNode_Base_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_854_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_Base_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimNode_Base;
// ********** End ScriptStruct FAnimNode_Base ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h

// ********** Begin Enum EPinHidingMode ************************************************************
#define FOREACH_ENUM_EPINHIDINGMODE(op) \
	op(EPinHidingMode::NeverAsPin) \
	op(EPinHidingMode::PinHiddenByDefault) \
	op(EPinHidingMode::PinShownByDefault) \
	op(EPinHidingMode::AlwaysAsPin) 

namespace EPinHidingMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPinHidingMode::Type>();
// ********** End Enum EPinHidingMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
