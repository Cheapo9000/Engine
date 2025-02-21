// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/AvaSnapDefs.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEVIEWPORT_AvaSnapDefs_generated_h
#error "AvaSnapDefs.generated.h already included, missing '#pragma once' in AvaSnapDefs.h"
#endif
#define AVALANCHEVIEWPORT_AvaSnapDefs_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_Interaction_AvaSnapDefs_h


#define FOREACH_ENUM_EAVAVIEWPORTSNAPSTATE(op) \
	op(EAvaViewportSnapState::Off) \
	op(EAvaViewportSnapState::Global) \
	op(EAvaViewportSnapState::Screen) \
	op(EAvaViewportSnapState::Grid) \
	op(EAvaViewportSnapState::Actor) \
	op(EAvaViewportSnapState::All) 

enum class EAvaViewportSnapState : uint8;
template<> struct TIsUEnumClass<EAvaViewportSnapState> { enum { Value = true }; };
template<> AVALANCHEVIEWPORT_API UEnum* StaticEnum<EAvaViewportSnapState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
