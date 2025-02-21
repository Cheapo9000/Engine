// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaShapesDefs.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShapesDefs_generated_h
#error "AvaShapesDefs.generated.h already included, missing '#pragma once' in AvaShapesDefs.h"
#endif
#define AVALANCHESHAPES_AvaShapesDefs_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapesDefs_h


#define FOREACH_ENUM_EAVASHAPEUVMODE(op) \
	op(EAvaShapeUVMode::Stretch) \
	op(EAvaShapeUVMode::Uniform) 

enum class EAvaShapeUVMode : uint8;
template<> struct TIsUEnumClass<EAvaShapeUVMode> { enum { Value = true }; };
template<> AVALANCHESHAPES_API UEnum* StaticEnum<EAvaShapeUVMode>();

#define FOREACH_ENUM_EAVASHAPECORNERTYPE(op) \
	op(EAvaShapeCornerType::Point) \
	op(EAvaShapeCornerType::CurveIn) \
	op(EAvaShapeCornerType::CurveOut) 

enum class EAvaShapeCornerType : uint8;
template<> struct TIsUEnumClass<EAvaShapeCornerType> { enum { Value = true }; };
template<> AVALANCHESHAPES_API UEnum* StaticEnum<EAvaShapeCornerType>();

#define FOREACH_ENUM_EAVASHAPEPARAMETRICMATERIALSTYLE(op) \
	op(EAvaShapeParametricMaterialStyle::Solid) \
	op(EAvaShapeParametricMaterialStyle::LinearGradient) 

enum class EAvaShapeParametricMaterialStyle : uint8;
template<> struct TIsUEnumClass<EAvaShapeParametricMaterialStyle> { enum { Value = true }; };
template<> AVALANCHESHAPES_API UEnum* StaticEnum<EAvaShapeParametricMaterialStyle>();

#define FOREACH_ENUM_EMATERIALTYPE(op) \
	op(EMaterialType::Asset) \
	op(EMaterialType::Parametric) \
	op(EMaterialType::MaterialDesigner) \
	op(EMaterialType::Default) 

enum class EMaterialType : uint8;
template<> struct TIsUEnumClass<EMaterialType> { enum { Value = true }; };
template<> AVALANCHESHAPES_API UEnum* StaticEnum<EMaterialType>();

#define FOREACH_ENUM_ESIZETYPE(op) \
	op(ESizeType::UnrealUnit) \
	op(ESizeType::Pixel) 

enum class ESizeType : uint8;
template<> struct TIsUEnumClass<ESizeType> { enum { Value = true }; };
template<> AVALANCHESHAPES_API UEnum* StaticEnum<ESizeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
