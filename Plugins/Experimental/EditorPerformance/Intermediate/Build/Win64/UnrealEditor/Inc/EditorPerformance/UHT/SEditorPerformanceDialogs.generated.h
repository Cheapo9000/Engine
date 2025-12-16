// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SEditorPerformanceDialogs.h"

#ifdef EDITORPERFORMANCE_SEditorPerformanceDialogs_generated_h
#error "SEditorPerformanceDialogs.generated.h already included, missing '#pragma once' in SEditorPerformanceDialogs.h"
#endif
#define EDITORPERFORMANCE_SEditorPerformanceDialogs_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorPerformance_Source_EditorPerformance_Private_SEditorPerformanceDialogs_h

// ********** Begin Enum EEditorPerformanceNotificationOptions *************************************
#define FOREACH_ENUM_EEDITORPERFORMANCENOTIFICATIONOPTIONS(op) \
	op(EEditorPerformanceNotificationOptions::Notify) \
	op(EEditorPerformanceNotificationOptions::Ignore) 

enum class EEditorPerformanceNotificationOptions : uint8;
template<> struct TIsUEnumClass<EEditorPerformanceNotificationOptions> { enum { Value = true }; };
template<> EDITORPERFORMANCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditorPerformanceNotificationOptions>();
// ********** End Enum EEditorPerformanceNotificationOptions ***************************************

// ********** Begin Enum EEditorPerformanceFilterOptions *******************************************
#define FOREACH_ENUM_EEDITORPERFORMANCEFILTEROPTIONS(op) \
	op(EEditorPerformanceFilterOptions::ShowAll) \
	op(EEditorPerformanceFilterOptions::WarningsOnly) 

enum class EEditorPerformanceFilterOptions : uint8;
template<> struct TIsUEnumClass<EEditorPerformanceFilterOptions> { enum { Value = true }; };
template<> EDITORPERFORMANCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditorPerformanceFilterOptions>();
// ********** End Enum EEditorPerformanceFilterOptions *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
