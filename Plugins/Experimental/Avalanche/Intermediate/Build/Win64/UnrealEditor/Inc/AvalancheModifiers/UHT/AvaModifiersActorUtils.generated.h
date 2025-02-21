// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaModifiersActorUtils.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaModifiersActorUtils_generated_h
#error "AvaModifiersActorUtils.generated.h already included, missing '#pragma once' in AvaModifiersActorUtils.h"
#endif
#define AVALANCHEMODIFIERS_AvaModifiersActorUtils_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Private_AvaModifiersActorUtils_h


#define FOREACH_ENUM_EAVAMODIFIERSAXIS(op) \
	op(EAvaModifiersAxis::None) \
	op(EAvaModifiersAxis::X) \
	op(EAvaModifiersAxis::Y) \
	op(EAvaModifiersAxis::Z) 

enum class EAvaModifiersAxis : uint8;
template<> struct TIsUEnumClass<EAvaModifiersAxis> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaModifiersAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
