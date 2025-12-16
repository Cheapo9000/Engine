// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Mask/T_PatternMask.h"

#ifdef TEXTUREGRAPHENGINE_T_PatternMask_generated_h
#error "T_PatternMask.generated.h already included, missing '#pragma once' in T_PatternMask.h"
#endif
#define TEXTUREGRAPHENGINE_T_PatternMask_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Transform_Mask_T_PatternMask_h

// ********** Begin Enum PatternType ***************************************************************
#define FOREACH_ENUM_PATTERNTYPE(op) \
	op(PatternType::Square) \
	op(PatternType::Circle) \
	op(PatternType::Checker) \
	op(PatternType::Gradient) \
	op(PatternType::Count) 

enum class PatternType;
template<> struct TIsUEnumClass<PatternType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<PatternType>();
// ********** End Enum PatternType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
