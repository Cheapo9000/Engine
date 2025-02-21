// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Viewport/Interaction/AvaViewportPostProcessInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHE_AvaViewportPostProcessInfo_generated_h
#error "AvaViewportPostProcessInfo.generated.h already included, missing '#pragma once' in AvaViewportPostProcessInfo.h"
#endif
#define AVALANCHE_AvaViewportPostProcessInfo_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_AvaViewportPostProcessInfo_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaViewportPostProcessInfo_Deprecated_Statics; \
	AVALANCHE_API static class UScriptStruct* StaticStruct();


template<> AVALANCHE_API UScriptStruct* StaticStruct<struct FAvaViewportPostProcessInfo_Deprecated>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_AvaViewportPostProcessInfo_h


#define FOREACH_ENUM_EAVAVIEWPORTPOSTPROCESSTYPE_DEPRECATED(op) \
	op(EAvaViewportPostProcessType_Deprecated::None) \
	op(EAvaViewportPostProcessType_Deprecated::Background) \
	op(EAvaViewportPostProcessType_Deprecated::RedChannel) \
	op(EAvaViewportPostProcessType_Deprecated::GreenChannel) \
	op(EAvaViewportPostProcessType_Deprecated::BlueChannel) \
	op(EAvaViewportPostProcessType_Deprecated::AlphaChannel) 

enum class EAvaViewportPostProcessType_Deprecated : uint8;
template<> struct TIsUEnumClass<EAvaViewportPostProcessType_Deprecated> { enum { Value = true }; };
template<> AVALANCHE_API UEnum* StaticEnum<EAvaViewportPostProcessType_Deprecated>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
