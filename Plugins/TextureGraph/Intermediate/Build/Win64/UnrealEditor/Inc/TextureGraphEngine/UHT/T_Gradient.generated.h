// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Mask/T_Gradient.h"

#ifdef TEXTUREGRAPHENGINE_T_Gradient_generated_h
#error "T_Gradient.generated.h already included, missing '#pragma once' in T_Gradient.h"
#endif
#define TEXTUREGRAPHENGINE_T_Gradient_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Transform_Mask_T_Gradient_h

// ********** Begin Enum EGradientType *************************************************************
#define FOREACH_ENUM_EGRADIENTTYPE(op) \
	op(EGradientType::GT_Linear_1) \
	op(EGradientType::GT_Linear_2) \
	op(EGradientType::GT_Radial) \
	op(EGradientType::GT_Axial_1) \
	op(EGradientType::GT_Axial_2) 

enum class EGradientType : uint8;
template<> struct TIsUEnumClass<EGradientType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGradientType>();
// ********** End Enum EGradientType ***************************************************************

// ********** Begin Enum EGradientInterpolation ****************************************************
#define FOREACH_ENUM_EGRADIENTINTERPOLATION(op) \
	op(EGradientInterpolation::GTI_Linear) \
	op(EGradientInterpolation::GTI_Exp) 

enum class EGradientInterpolation : uint8;
template<> struct TIsUEnumClass<EGradientInterpolation> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGradientInterpolation>();
// ********** End Enum EGradientInterpolation ******************************************************

// ********** Begin Enum EGradientRotation *********************************************************
#define FOREACH_ENUM_EGRADIENTROTATION(op) \
	op(EGradientRotation::GTR_0) \
	op(EGradientRotation::GTR_90) \
	op(EGradientRotation::GTR_180) \
	op(EGradientRotation::GTR_270) 

enum class EGradientRotation : uint8;
template<> struct TIsUEnumClass<EGradientRotation> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGradientRotation>();
// ********** End Enum EGradientRotation ***********************************************************

// ********** Begin Enum EGradientRotationLimited **************************************************
#define FOREACH_ENUM_EGRADIENTROTATIONLIMITED(op) \
	op(EGradientRotationLimited::GTRL_0) \
	op(EGradientRotationLimited::GTRL_90) 

enum class EGradientRotationLimited : uint8;
template<> struct TIsUEnumClass<EGradientRotationLimited> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGradientRotationLimited>();
// ********** End Enum EGradientRotationLimited ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
