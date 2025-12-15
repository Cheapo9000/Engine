// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_ScaleChainLength.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_ScaleChainLength_generated_h
#error "AnimNode_ScaleChainLength.generated.h already included, missing '#pragma once' in AnimNode_ScaleChainLength.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_ScaleChainLength_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_ScaleChainLength ****************************************
struct Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_ScaleChainLength;
// ********** End ScriptStruct FAnimNode_ScaleChainLength ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h

// ********** Begin Enum EScaleChainInitialLength **************************************************
#define FOREACH_ENUM_ESCALECHAININITIALLENGTH(op) \
	op(EScaleChainInitialLength::FixedDefaultLengthValue) \
	op(EScaleChainInitialLength::Distance) \
	op(EScaleChainInitialLength::ChainLength) 

enum class EScaleChainInitialLength : uint8;
template<> struct TIsUEnumClass<EScaleChainInitialLength> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EScaleChainInitialLength>();
// ********** End Enum EScaleChainInitialLength ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
