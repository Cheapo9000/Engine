// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaViewportPostProcessManager.h"

#ifdef AVALANCHEVIEWPORT_AvaViewportPostProcessManager_generated_h
#error "AvaViewportPostProcessManager.generated.h already included, missing '#pragma once' in AvaViewportPostProcessManager.h"
#endif
#define AVALANCHEVIEWPORT_AvaViewportPostProcessManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaViewportPostProcessInfo ***************************************
struct Z_Construct_UScriptStruct_FAvaViewportPostProcessInfo_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportPostProcessManager_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaViewportPostProcessInfo_Statics; \
	AVALANCHEVIEWPORT_API static class UScriptStruct* StaticStruct();


struct FAvaViewportPostProcessInfo;
// ********** End ScriptStruct FAvaViewportPostProcessInfo *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportPostProcessManager_h

// ********** Begin Enum EAvaViewportPostProcessType ***********************************************
#define FOREACH_ENUM_EAVAVIEWPORTPOSTPROCESSTYPE(op) \
	op(EAvaViewportPostProcessType::None) \
	op(EAvaViewportPostProcessType::Background) \
	op(EAvaViewportPostProcessType::RedChannel) \
	op(EAvaViewportPostProcessType::GreenChannel) \
	op(EAvaViewportPostProcessType::BlueChannel) \
	op(EAvaViewportPostProcessType::AlphaChannel) \
	op(EAvaViewportPostProcessType::Checkerboard) 

enum class EAvaViewportPostProcessType : uint8;
template<> struct TIsUEnumClass<EAvaViewportPostProcessType> { enum { Value = true }; };
template<> AVALANCHEVIEWPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaViewportPostProcessType>();
// ********** End Enum EAvaViewportPostProcessType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
