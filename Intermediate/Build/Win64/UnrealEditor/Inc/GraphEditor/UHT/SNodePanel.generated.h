// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SNodePanel.h"

#ifdef GRAPHEDITOR_SNodePanel_generated_h
#error "SNodePanel.generated.h already included, missing '#pragma once' in SNodePanel.h"
#endif
#define GRAPHEDITOR_SNodePanel_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_GraphEditor_Public_SNodePanel_h

// ********** Begin Enum EGraphZoomLimitHandling ***************************************************
#define FOREACH_ENUM_EGRAPHZOOMLIMITHANDLING(op) \
	op(EGraphZoomLimitHandling::Default) \
	op(EGraphZoomLimitHandling::AllowLimitBreak) \
	op(EGraphZoomLimitHandling::DisallowLimitBreak) 

enum class EGraphZoomLimitHandling : uint8;
template<> struct TIsUEnumClass<EGraphZoomLimitHandling> { enum { Value = true }; };
template<> GRAPHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphZoomLimitHandling>();
// ********** End Enum EGraphZoomLimitHandling *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
