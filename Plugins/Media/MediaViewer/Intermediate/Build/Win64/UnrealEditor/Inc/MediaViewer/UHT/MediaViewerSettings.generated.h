// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/MediaViewerSettings.h"

#ifdef MEDIAVIEWER_MediaViewerSettings_generated_h
#error "MediaViewerSettings.generated.h already included, missing '#pragma once' in MediaViewerSettings.h"
#endif
#define MEDIAVIEWER_MediaViewerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMediaViewerSettings **********************************************
struct Z_Construct_UScriptStruct_FMediaViewerSettings_Statics;
#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Widgets_MediaViewerSettings_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaViewerSettings_Statics; \
	MEDIAVIEWER_API static class UScriptStruct* StaticStruct();


struct FMediaViewerSettings;
// ********** End ScriptStruct FMediaViewerSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Widgets_MediaViewerSettings_h

// ********** Begin Enum EMediaViewerMediaSyncType *************************************************
#define FOREACH_ENUM_EMEDIAVIEWERMEDIASYNCTYPE(op) \
	op(EMediaViewerMediaSyncType::RelativeTime) \
	op(EMediaViewerMediaSyncType::RelativeProgress) \
	op(EMediaViewerMediaSyncType::AbsoluteTime) \
	op(EMediaViewerMediaSyncType::AbsoluteProgress) 

enum class EMediaViewerMediaSyncType : uint8;
template<> struct TIsUEnumClass<EMediaViewerMediaSyncType> { enum { Value = true }; };
template<> MEDIAVIEWER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaViewerMediaSyncType>();
// ********** End Enum EMediaViewerMediaSyncType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
