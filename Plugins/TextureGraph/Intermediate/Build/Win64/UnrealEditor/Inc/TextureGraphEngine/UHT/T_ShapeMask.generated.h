// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Mask/T_ShapeMask.h"

#ifdef TEXTUREGRAPHENGINE_T_ShapeMask_generated_h
#error "T_ShapeMask.generated.h already included, missing '#pragma once' in T_ShapeMask.h"
#endif
#define TEXTUREGRAPHENGINE_T_ShapeMask_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Transform_Mask_T_ShapeMask_h

// ********** Begin Enum EShapeMaskType ************************************************************
#define FOREACH_ENUM_ESHAPEMASKTYPE(op) \
	op(EShapeMaskType::Circle) \
	op(EShapeMaskType::Segment) \
	op(EShapeMaskType::Rect) \
	op(EShapeMaskType::Triangle) \
	op(EShapeMaskType::Ellipse) \
	op(EShapeMaskType::Pentagon) \
	op(EShapeMaskType::Hexagon) \
	op(EShapeMaskType::RegularPolygon_7) \
	op(EShapeMaskType::RegularPolygon_8) \
	op(EShapeMaskType::RegularPolygon_9) \
	op(EShapeMaskType::RegularPolygon_10) \
	op(EShapeMaskType::RegularPolygon_11) \
	op(EShapeMaskType::RegularPolygon_12) \
	op(EShapeMaskType::RegularPolygon_13) \
	op(EShapeMaskType::RegularPolygon_14) \
	op(EShapeMaskType::RegularPolygon_15) \
	op(EShapeMaskType::RegularPolygon_16) \
	op(EShapeMaskType::RegularPolygon_17) \
	op(EShapeMaskType::RegularPolygon_18) \
	op(EShapeMaskType::RegularPolygon_19) \
	op(EShapeMaskType::RegularPolygon_20) \
	op(EShapeMaskType::RegularPolygon_21) \
	op(EShapeMaskType::RegularPolygon_22) \
	op(EShapeMaskType::RegularPolygon_23) \
	op(EShapeMaskType::RegularPolygon_24) \
	op(EShapeMaskType::RegularPolygon_25) \
	op(EShapeMaskType::RegularPolygon_26) \
	op(EShapeMaskType::RegularPolygon_27) \
	op(EShapeMaskType::RegularPolygon_28) \
	op(EShapeMaskType::RegularPolygon_29) \
	op(EShapeMaskType::RegularPolygon_30) \
	op(EShapeMaskType::RegularPolygon_31) \
	op(EShapeMaskType::RegularPolygon_32) \
	op(EShapeMaskType::Count) 

enum class EShapeMaskType : uint8;
template<> struct TIsUEnumClass<EShapeMaskType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EShapeMaskType>();
// ********** End Enum EShapeMaskType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
