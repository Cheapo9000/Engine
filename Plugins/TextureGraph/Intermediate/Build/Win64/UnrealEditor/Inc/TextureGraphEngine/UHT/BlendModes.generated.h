// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "2D/BlendModes.h"

#ifdef TEXTUREGRAPHENGINE_BlendModes_generated_h
#error "BlendModes.generated.h already included, missing '#pragma once' in BlendModes.h"
#endif
#define TEXTUREGRAPHENGINE_BlendModes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_2D_BlendModes_h

// ********** Begin Enum EBlendModes ***************************************************************
#define FOREACH_ENUM_EBLENDMODES(op) \
	op(EBlendModes::Normal) \
	op(EBlendModes::Add) \
	op(EBlendModes::Subtract) \
	op(EBlendModes::Multiply) \
	op(EBlendModes::Divide) \
	op(EBlendModes::Difference) \
	op(EBlendModes::Max) \
	op(EBlendModes::Min) \
	op(EBlendModes::Step) \
	op(EBlendModes::Overlay) 

namespace EBlendModes { enum Type : int; }
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendModes::Type>();
// ********** End Enum EBlendModes *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
