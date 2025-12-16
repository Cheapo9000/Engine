// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaViewportVirtualSizeEnums.h"

#ifdef AVALANCHEVIEWPORT_AvaViewportVirtualSizeEnums_generated_h
#error "AvaViewportVirtualSizeEnums.generated.h already included, missing '#pragma once' in AvaViewportVirtualSizeEnums.h"
#endif
#define AVALANCHEVIEWPORT_AvaViewportVirtualSizeEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportVirtualSizeEnums_h

// ********** Begin Enum EAvaViewportVirtualSizeAspectRatioState ***********************************
#define FOREACH_ENUM_EAVAVIEWPORTVIRTUALSIZEASPECTRATIOSTATE(op) \
	op(EAvaViewportVirtualSizeAspectRatioState::Unlocked) \
	op(EAvaViewportVirtualSizeAspectRatioState::Locked) \
	op(EAvaViewportVirtualSizeAspectRatioState::LockedToCamera) 

enum class EAvaViewportVirtualSizeAspectRatioState : uint8;
template<> struct TIsUEnumClass<EAvaViewportVirtualSizeAspectRatioState> { enum { Value = true }; };
template<> AVALANCHEVIEWPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaViewportVirtualSizeAspectRatioState>();
// ********** End Enum EAvaViewportVirtualSizeAspectRatioState *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
