// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SMediaViewer.h"

#ifdef MEDIAVIEWER_SMediaViewer_generated_h
#error "SMediaViewer.generated.h already included, missing '#pragma once' in SMediaViewer.h"
#endif
#define MEDIAVIEWER_SMediaViewer_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Widgets_SMediaViewer_h

// ********** Begin Enum EMediaImageViewerActivePosition *******************************************
#define FOREACH_ENUM_EMEDIAIMAGEVIEWERACTIVEPOSITION(op) \
	op(EMediaImageViewerActivePosition::Single) \
	op(EMediaImageViewerActivePosition::Both) 

enum class EMediaImageViewerActivePosition : uint8;
template<> struct TIsUEnumClass<EMediaImageViewerActivePosition> { enum { Value = true }; };
template<> MEDIAVIEWER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaImageViewerActivePosition>();
// ********** End Enum EMediaImageViewerActivePosition *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
