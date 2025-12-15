// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/BoneControllerTypes.h"

#ifdef ANIMGRAPHRUNTIME_BoneControllerTypes_generated_h
#error "BoneControllerTypes.generated.h already included, missing '#pragma once' in BoneControllerTypes.h"
#endif
#define ANIMGRAPHRUNTIME_BoneControllerTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWarpingVectorValue ***********************************************
struct Z_Construct_UScriptStruct_FWarpingVectorValue_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWarpingVectorValue_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FWarpingVectorValue;
// ********** End ScriptStruct FWarpingVectorValue *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h

// ********** Begin Enum EWarpingEvaluationMode ****************************************************
#define FOREACH_ENUM_EWARPINGEVALUATIONMODE(op) \
	op(EWarpingEvaluationMode::Manual) \
	op(EWarpingEvaluationMode::Graph) 

enum class EWarpingEvaluationMode : uint8;
template<> struct TIsUEnumClass<EWarpingEvaluationMode> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarpingEvaluationMode>();
// ********** End Enum EWarpingEvaluationMode ******************************************************

// ********** Begin Enum EWarpingVectorMode ********************************************************
#define FOREACH_ENUM_EWARPINGVECTORMODE(op) \
	op(EWarpingVectorMode::ComponentSpaceVector) \
	op(EWarpingVectorMode::ActorSpaceVector) \
	op(EWarpingVectorMode::WorldSpaceVector) \
	op(EWarpingVectorMode::IKFootRootLocalSpaceVector) 

enum class EWarpingVectorMode : uint8;
template<> struct TIsUEnumClass<EWarpingVectorMode> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarpingVectorMode>();
// ********** End Enum EWarpingVectorMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
