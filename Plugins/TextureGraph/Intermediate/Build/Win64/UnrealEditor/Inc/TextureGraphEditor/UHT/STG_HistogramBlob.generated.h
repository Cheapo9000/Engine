// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/STG_HistogramBlob.h"

#ifdef TEXTUREGRAPHEDITOR_STG_HistogramBlob_generated_h
#error "STG_HistogramBlob.generated.h already included, missing '#pragma once' in STG_HistogramBlob.h"
#endif
#define TEXTUREGRAPHEDITOR_STG_HistogramBlob_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_Widgets_STG_HistogramBlob_h

// ********** Begin Enum ETG_HistogramCurves *******************************************************
#define FOREACH_ENUM_ETG_HISTOGRAMCURVES(op) \
	op(ETG_HistogramCurves::R) \
	op(ETG_HistogramCurves::G) \
	op(ETG_HistogramCurves::B) \
	op(ETG_HistogramCurves::Luma) \
	op(ETG_HistogramCurves::RGB) 

enum class ETG_HistogramCurves : uint8;
template<> struct TIsUEnumClass<ETG_HistogramCurves> { enum { Value = true }; };
template<> TEXTUREGRAPHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETG_HistogramCurves>();
// ********** End Enum ETG_HistogramCurves *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
