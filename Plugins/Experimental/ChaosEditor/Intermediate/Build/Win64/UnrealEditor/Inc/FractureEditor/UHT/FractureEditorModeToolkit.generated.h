// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureEditorModeToolkit.h"

#ifdef FRACTUREEDITOR_FractureEditorModeToolkit_generated_h
#error "FractureEditorModeToolkit.generated.h already included, missing '#pragma once' in FractureEditorModeToolkit.h"
#endif
#define FRACTUREEDITOR_FractureEditorModeToolkit_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorModeToolkit_h

// ********** Begin Enum EOutlinerColumnMode *******************************************************
#define FOREACH_ENUM_EOUTLINERCOLUMNMODE(op) \
	op(EOutlinerColumnMode::State) \
	op(EOutlinerColumnMode::Damage) \
	op(EOutlinerColumnMode::Removal) \
	op(EOutlinerColumnMode::Collision) \
	op(EOutlinerColumnMode::Size) \
	op(EOutlinerColumnMode::Geometry) 

enum class EOutlinerColumnMode : uint8;
template<> struct TIsUEnumClass<EOutlinerColumnMode> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOutlinerColumnMode>();
// ********** End Enum EOutlinerColumnMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
