// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequencerInstanceProxy.h"

#ifdef ANIMGRAPHRUNTIME_AnimSequencerInstanceProxy_generated_h
#error "AnimSequencerInstanceProxy.generated.h already included, missing '#pragma once' in AnimSequencerInstanceProxy.h"
#endif
#define ANIMGRAPHRUNTIME_AnimSequencerInstanceProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimSequencerInstanceProxy ***************************************
struct Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h_119_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FAnimSequencerInstanceProxy;
// ********** End ScriptStruct FAnimSequencerInstanceProxy *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h

// ********** Begin Enum ESwapRootBone *************************************************************
#define FOREACH_ENUM_ESWAPROOTBONE(op) \
	op(ESwapRootBone::SwapRootBone_Component) \
	op(ESwapRootBone::SwapRootBone_Actor) \
	op(ESwapRootBone::SwapRootBone_None) 

enum class ESwapRootBone : uint8;
template<> struct TIsUEnumClass<ESwapRootBone> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwapRootBone>();
// ********** End Enum ESwapRootBone ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
