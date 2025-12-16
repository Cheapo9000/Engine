// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaViewportGuideInfo.h"

#ifdef AVALANCHEVIEWPORT_AvaViewportGuideInfo_generated_h
#error "AvaViewportGuideInfo.generated.h already included, missing '#pragma once' in AvaViewportGuideInfo.h"
#endif
#define AVALANCHEVIEWPORT_AvaViewportGuideInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaViewportGuideInfo *********************************************
struct Z_Construct_UScriptStruct_FAvaViewportGuideInfo_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportGuideInfo_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaViewportGuideInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAvaViewportGuideInfo;
// ********** End ScriptStruct FAvaViewportGuideInfo ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportGuideInfo_h

// ********** Begin Enum EAvaViewportGuideState ****************************************************
#define FOREACH_ENUM_EAVAVIEWPORTGUIDESTATE(op) \
	op(EAvaViewportGuideState::Disabled) \
	op(EAvaViewportGuideState::Enabled) \
	op(EAvaViewportGuideState::SnappedTo) 

enum class EAvaViewportGuideState : uint8;
template<> struct TIsUEnumClass<EAvaViewportGuideState> { enum { Value = true }; };
template<> AVALANCHEVIEWPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaViewportGuideState>();
// ********** End Enum EAvaViewportGuideState ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
