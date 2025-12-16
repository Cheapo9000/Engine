// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Expressions/T_Filter.h"

#ifdef TEXTUREGRAPHENGINE_T_Filter_generated_h
#error "T_Filter.generated.h already included, missing '#pragma once' in T_Filter.h"
#endif
#define TEXTUREGRAPHENGINE_T_Filter_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Transform_Expressions_T_Filter_h

// ********** Begin Enum EWarp *********************************************************************
#define FOREACH_ENUM_EWARP(op) \
	op(EWarp::Directional) \
	op(EWarp::Normal) \
	op(EWarp::Sine) 

namespace EWarp { enum Type : int; }
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarp::Type>();
// ********** End Enum EWarp ***********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
