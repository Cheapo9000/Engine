// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Notifications/SProgressBar.h"

#ifdef SLATE_SProgressBar_generated_h
#error "SProgressBar.generated.h already included, missing '#pragma once' in SProgressBar.h"
#endif
#define SLATE_SProgressBar_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h

// ********** Begin Enum EProgressBarFillType ******************************************************
#define FOREACH_ENUM_EPROGRESSBARFILLTYPE(op) \
	op(EProgressBarFillType::LeftToRight) \
	op(EProgressBarFillType::RightToLeft) \
	op(EProgressBarFillType::FillFromCenter) \
	op(EProgressBarFillType::FillFromCenterHorizontal) \
	op(EProgressBarFillType::FillFromCenterVertical) \
	op(EProgressBarFillType::TopToBottom) \
	op(EProgressBarFillType::BottomToTop) 

namespace EProgressBarFillType { enum Type : int; }
template<> SLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<EProgressBarFillType::Type>();
// ********** End Enum EProgressBarFillType ********************************************************

// ********** Begin Enum EProgressBarFillStyle *****************************************************
#define FOREACH_ENUM_EPROGRESSBARFILLSTYLE(op) \
	op(EProgressBarFillStyle::Mask) \
	op(EProgressBarFillStyle::Scale) 

namespace EProgressBarFillStyle { enum Type : int; }
template<> SLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<EProgressBarFillStyle::Type>();
// ********** End Enum EProgressBarFillStyle *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
