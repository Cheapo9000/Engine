// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Mask/T_NoiseMask.h"

#ifdef TEXTUREGRAPHENGINE_T_NoiseMask_generated_h
#error "T_NoiseMask.generated.h already included, missing '#pragma once' in T_NoiseMask.h"
#endif
#define TEXTUREGRAPHENGINE_T_NoiseMask_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Transform_Mask_T_NoiseMask_h

// ********** Begin Enum NoiseType *****************************************************************
#define FOREACH_ENUM_NOISETYPE(op) \
	op(NoiseType::Simplex) \
	op(NoiseType::Perlin) \
	op(NoiseType::Worley1) \
	op(NoiseType::Worley2) \
	op(NoiseType::Worley3) \
	op(NoiseType::Count) 

enum class NoiseType;
template<> struct TIsUEnumClass<NoiseType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<NoiseType>();
// ********** End Enum NoiseType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
