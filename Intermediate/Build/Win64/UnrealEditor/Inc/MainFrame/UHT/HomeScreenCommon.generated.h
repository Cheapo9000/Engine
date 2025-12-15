// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/HomeScreenCommon.h"

#ifdef MAINFRAME_HomeScreenCommon_generated_h
#error "HomeScreenCommon.generated.h already included, missing '#pragma once' in HomeScreenCommon.h"
#endif
#define MAINFRAME_HomeScreenCommon_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MainFrame_Public_Settings_HomeScreenCommon_h

// ********** Begin Enum EMainSectionMenu **********************************************************
#define FOREACH_ENUM_EMAINSECTIONMENU(op) \
	op(EMainSectionMenu::None) \
	op(EMainSectionMenu::Home) \
	op(EMainSectionMenu::News) \
	op(EMainSectionMenu::GettingStarted) \
	op(EMainSectionMenu::SampleProjects) 

enum class EMainSectionMenu : uint8;
template<> struct TIsUEnumClass<EMainSectionMenu> { enum { Value = true }; };
template<> MAINFRAME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMainSectionMenu>();
// ********** End Enum EMainSectionMenu ************************************************************

// ********** Begin Enum EAutoLoadProject **********************************************************
#define FOREACH_ENUM_EAUTOLOADPROJECT(op) \
	op(EAutoLoadProject::HomeScreen) \
	op(EAutoLoadProject::LastProject) 

enum class EAutoLoadProject;
template<> struct TIsUEnumClass<EAutoLoadProject> { enum { Value = true }; };
template<> MAINFRAME_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutoLoadProject>();
// ********** End Enum EAutoLoadProject ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
