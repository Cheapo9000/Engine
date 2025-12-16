// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_RenderModeManager.h"

#ifdef TEXTUREGRAPHEDITOR_TG_RenderModeManager_generated_h
#error "TG_RenderModeManager.generated.h already included, missing '#pragma once' in TG_RenderModeManager.h"
#endif
#define TEXTUREGRAPHEDITOR_TG_RenderModeManager_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_RenderModeManager_h

// ********** Begin Enum ERenderModes **************************************************************
#define FOREACH_ENUM_ERENDERMODES(op) \
	op(ERenderModes::PBRMetalness) \
	op(ERenderModes::Albedo) \
	op(ERenderModes::Normal) \
	op(ERenderModes::Displacement) \
	op(ERenderModes::Roughness) \
	op(ERenderModes::Specular) \
	op(ERenderModes::Metalness) \
	op(ERenderModes::LayerMask) \
	op(ERenderModes::ActiveMask) \
	op(ERenderModes::UV) \
	op(ERenderModes::WorldNormals) \
	op(ERenderModes::WorldTangents) \
	op(ERenderModes::WorldPosition) \
	op(ERenderModes::WorldUVMask) \
	op(ERenderModes::Default) 

enum class ERenderModes : uint8;
template<> struct TIsUEnumClass<ERenderModes> { enum { Value = true }; };
template<> TEXTUREGRAPHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenderModes>();
// ********** End Enum ERenderModes ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
