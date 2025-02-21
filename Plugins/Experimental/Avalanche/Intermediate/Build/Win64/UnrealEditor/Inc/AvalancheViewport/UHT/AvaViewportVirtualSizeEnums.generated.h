// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaViewportVirtualSizeEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEVIEWPORT_AvaViewportVirtualSizeEnums_generated_h
#error "AvaViewportVirtualSizeEnums.generated.h already included, missing '#pragma once' in AvaViewportVirtualSizeEnums.h"
#endif
#define AVALANCHEVIEWPORT_AvaViewportVirtualSizeEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportVirtualSizeEnums_h


#define FOREACH_ENUM_EAVAVIEWPORTVIRTUALSIZEASPECTRATIOSTATE(op) \
	op(EAvaViewportVirtualSizeAspectRatioState::Unlocked) \
	op(EAvaViewportVirtualSizeAspectRatioState::Locked) \
	op(EAvaViewportVirtualSizeAspectRatioState::LockedToCamera) 

enum class EAvaViewportVirtualSizeAspectRatioState : uint8;
template<> struct TIsUEnumClass<EAvaViewportVirtualSizeAspectRatioState> { enum { Value = true }; };
template<> AVALANCHEVIEWPORT_API UEnum* StaticEnum<EAvaViewportVirtualSizeAspectRatioState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
