// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layout/Clipping.h"

#ifdef SLATECORE_Clipping_generated_h
#error "Clipping.generated.h already included, missing '#pragma once' in Clipping.h"
#endif
#define SLATECORE_Clipping_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Layout_Clipping_h

// ********** Begin Enum EWidgetClipping ***********************************************************
#define FOREACH_ENUM_EWIDGETCLIPPING(op) \
	op(EWidgetClipping::Inherit) \
	op(EWidgetClipping::ClipToBounds) \
	op(EWidgetClipping::ClipToBoundsWithoutIntersecting) \
	op(EWidgetClipping::ClipToBoundsAlways) \
	op(EWidgetClipping::OnDemand) 

enum class EWidgetClipping : uint8;
template<> struct TIsUEnumClass<EWidgetClipping> { enum { Value = true }; };
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetClipping>();
// ********** End Enum EWidgetClipping *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
