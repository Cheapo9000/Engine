// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SChaosVDRecordedLogBrowser.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_SChaosVDRecordedLogBrowser_generated_h
#error "SChaosVDRecordedLogBrowser.generated.h already included, missing '#pragma once' in SChaosVDRecordedLogBrowser.h"
#endif
#define CHAOSVD_SChaosVDRecordedLogBrowser_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosVDRecordedLogBrowser_h


#define FOREACH_ENUM_ECHAOSVDLOGVERBOSITYFLAGS(op) \
	op(EChaosVDLogVerbosityFlags::None) \
	op(EChaosVDLogVerbosityFlags::Messages) \
	op(EChaosVDLogVerbosityFlags::Warnings) \
	op(EChaosVDLogVerbosityFlags::Errors) \
	op(EChaosVDLogVerbosityFlags::All) 

enum class EChaosVDLogVerbosityFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDLogVerbosityFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDLogVerbosityFlags>();

#define FOREACH_ENUM_ECHAOSVDLOGBROWSERDIRTYFLAGS(op) \
	op(EChaosVDLogBrowserDirtyFlags::None) \
	op(EChaosVDLogBrowserDirtyFlags::Categories) \
	op(EChaosVDLogBrowserDirtyFlags::Messages) \
	op(EChaosVDLogBrowserDirtyFlags::Verbosity) \
	op(EChaosVDLogBrowserDirtyFlags::Filtering) \
	op(EChaosVDLogBrowserDirtyFlags::Playback) 

enum class EChaosVDLogBrowserDirtyFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDLogBrowserDirtyFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDLogBrowserDirtyFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
