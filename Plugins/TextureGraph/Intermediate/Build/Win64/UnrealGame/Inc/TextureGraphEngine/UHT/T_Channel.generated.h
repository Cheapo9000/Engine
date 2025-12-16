// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Expressions/T_Channel.h"

#ifdef TEXTUREGRAPHENGINE_T_Channel_generated_h
#error "T_Channel.generated.h already included, missing '#pragma once' in T_Channel.h"
#endif
#define TEXTUREGRAPHENGINE_T_Channel_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Transform_Expressions_T_Channel_h

// ********** Begin Enum EColorChannel *************************************************************
#define FOREACH_ENUM_ECOLORCHANNEL(op) \
	op(EColorChannel::Red) \
	op(EColorChannel::Green) \
	op(EColorChannel::Blue) \
	op(EColorChannel::Alpha) 

enum class EColorChannel : uint8;
template<> struct TIsUEnumClass<EColorChannel> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EColorChannel>();
// ********** End Enum EColorChannel ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
