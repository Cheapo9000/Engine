// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaViewportPostProcessManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEVIEWPORT_AvaViewportPostProcessManager_generated_h
#error "AvaViewportPostProcessManager.generated.h already included, missing '#pragma once' in AvaViewportPostProcessManager.h"
#endif
#define AVALANCHEVIEWPORT_AvaViewportPostProcessManager_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportPostProcessManager_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaViewportPostProcessInfo_Statics; \
	AVALANCHEVIEWPORT_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEVIEWPORT_API UScriptStruct* StaticStruct<struct FAvaViewportPostProcessInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportPostProcessManager_h


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
template<> AVALANCHEVIEWPORT_API UEnum* StaticEnum<EAvaViewportPostProcessType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
