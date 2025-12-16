// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanViewportModes.h"

#ifdef METAHUMANCORE_MetaHumanViewportModes_generated_h
#error "MetaHumanViewportModes.generated.h already included, missing '#pragma once' in MetaHumanViewportModes.h"
#endif
#define METAHUMANCORE_MetaHumanViewportModes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportModes_h

// ********** Begin Enum EABImageViewMode **********************************************************
#define FOREACH_ENUM_EABIMAGEVIEWMODE(op) \
	op(EABImageViewMode::A) \
	op(EABImageViewMode::B) \
	op(EABImageViewMode::ABSplit) \
	op(EABImageViewMode::ABSide) \
	op(EABImageViewMode::Current) \
	op(EABImageViewMode::Any) 

enum class EABImageViewMode;
template<> struct TIsUEnumClass<EABImageViewMode> { enum { Value = true }; };
template<> METAHUMANCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EABImageViewMode>();
// ********** End Enum EABImageViewMode ************************************************************

// ********** Begin Enum EABImageNavigationMode ****************************************************
#define FOREACH_ENUM_EABIMAGENAVIGATIONMODE(op) \
	op(EABImageNavigationMode::ThreeD) \
	op(EABImageNavigationMode::TwoD) 

enum class EABImageNavigationMode;
template<> struct TIsUEnumClass<EABImageNavigationMode> { enum { Value = true }; };
template<> METAHUMANCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EABImageNavigationMode>();
// ********** End Enum EABImageNavigationMode ******************************************************

// ********** Begin Enum EABImageMouseSide *********************************************************
#define FOREACH_ENUM_EABIMAGEMOUSESIDE(op) \
	op(EABImageMouseSide::NotApplicable) \
	op(EABImageMouseSide::A) \
	op(EABImageMouseSide::B) 

enum class EABImageMouseSide;
template<> struct TIsUEnumClass<EABImageMouseSide> { enum { Value = true }; };
template<> METAHUMANCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EABImageMouseSide>();
// ********** End Enum EABImageMouseSide ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
