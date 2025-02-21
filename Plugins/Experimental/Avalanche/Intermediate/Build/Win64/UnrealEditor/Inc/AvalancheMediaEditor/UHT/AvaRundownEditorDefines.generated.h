// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/AvaRundownEditorDefines.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIAEDITOR_AvaRundownEditorDefines_generated_h
#error "AvaRundownEditorDefines.generated.h already included, missing '#pragma once' in AvaRundownEditorDefines.h"
#endif
#define AVALANCHEMEDIAEDITOR_AvaRundownEditorDefines_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMediaEditor_Public_Rundown_AvaRundownEditorDefines_h


#define FOREACH_ENUM_EAVARUNDOWNPAGESET(op) \
	op(EAvaRundownPageSet::SelectedOrPlayingStrict) \
	op(EAvaRundownPageSet::SelectedOrPlaying) \
	op(EAvaRundownPageSet::Selected) \
	op(EAvaRundownPageSet::Playing) 

enum class EAvaRundownPageSet : uint8;
template<> struct TIsUEnumClass<EAvaRundownPageSet> { enum { Value = true }; };
template<> AVALANCHEMEDIAEDITOR_API UEnum* StaticEnum<EAvaRundownPageSet>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
