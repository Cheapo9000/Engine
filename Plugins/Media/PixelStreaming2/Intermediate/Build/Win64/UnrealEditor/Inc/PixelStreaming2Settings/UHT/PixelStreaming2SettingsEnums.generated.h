// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreaming2SettingsEnums.h"

#ifdef PIXELSTREAMING2SETTINGS_PixelStreaming2SettingsEnums_generated_h
#error "PixelStreaming2SettingsEnums.generated.h already included, missing '#pragma once' in PixelStreaming2SettingsEnums.h"
#endif
#define PIXELSTREAMING2SETTINGS_PixelStreaming2SettingsEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Public_PixelStreaming2SettingsEnums_h

// ********** Begin Enum EPixelStreaming2EditorStreamTypes *****************************************
#define FOREACH_ENUM_EPIXELSTREAMING2EDITORSTREAMTYPES(op) \
	op(EPixelStreaming2EditorStreamTypes::LevelEditorViewport) \
	op(EPixelStreaming2EditorStreamTypes::Editor) 

enum class EPixelStreaming2EditorStreamTypes : uint8;
template<> struct TIsUEnumClass<EPixelStreaming2EditorStreamTypes> { enum { Value = true }; };
template<> PIXELSTREAMING2SETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPixelStreaming2EditorStreamTypes>();
// ********** End Enum EPixelStreaming2EditorStreamTypes *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
