// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/AvaRundownEditorDefines.h"

#ifdef AVALANCHEMEDIAEDITOR_AvaRundownEditorDefines_generated_h
#error "AvaRundownEditorDefines.generated.h already included, missing '#pragma once' in AvaRundownEditorDefines.h"
#endif
#define AVALANCHEMEDIAEDITOR_AvaRundownEditorDefines_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Public_Rundown_AvaRundownEditorDefines_h

// ********** Begin Enum EAvaRundownPageSet ********************************************************
#define FOREACH_ENUM_EAVARUNDOWNPAGESET(op) \
	op(EAvaRundownPageSet::SelectedOrPlayingStrict) \
	op(EAvaRundownPageSet::SelectedOrPlaying) \
	op(EAvaRundownPageSet::Selected) \
	op(EAvaRundownPageSet::Playing) 

enum class EAvaRundownPageSet : uint8;
template<> struct TIsUEnumClass<EAvaRundownPageSet> { enum { Value = true }; };
template<> AVALANCHEMEDIAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaRundownPageSet>();
// ********** End Enum EAvaRundownPageSet **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
