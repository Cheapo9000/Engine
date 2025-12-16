// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Announcement/ScreenReaderAnnouncement.h"

#ifdef SCREENREADER_ScreenReaderAnnouncement_generated_h
#error "ScreenReaderAnnouncement.generated.h already included, missing '#pragma once' in ScreenReaderAnnouncement.h"
#endif
#define SCREENREADER_ScreenReaderAnnouncement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FScreenReaderAnnouncementInfo *************************************
struct Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics;
#define FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FScreenReaderAnnouncementInfo;
// ********** End ScriptStruct FScreenReaderAnnouncementInfo ***************************************

// ********** Begin ScriptStruct FScreenReaderAnnouncement *****************************************
struct Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics;
#define FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics; \
	static class UScriptStruct* StaticStruct();


struct FScreenReaderAnnouncement;
// ********** End ScriptStruct FScreenReaderAnnouncement *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h

// ********** Begin Enum EScreenReaderAnnouncementPriority *****************************************
#define FOREACH_ENUM_ESCREENREADERANNOUNCEMENTPRIORITY(op) \
	op(EScreenReaderAnnouncementPriority::High) \
	op(EScreenReaderAnnouncementPriority::Medium) \
	op(EScreenReaderAnnouncementPriority::Low) 

enum class EScreenReaderAnnouncementPriority : uint8;
template<> struct TIsUEnumClass<EScreenReaderAnnouncementPriority> { enum { Value = true }; };
template<> SCREENREADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EScreenReaderAnnouncementPriority>();
// ********** End Enum EScreenReaderAnnouncementPriority *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
