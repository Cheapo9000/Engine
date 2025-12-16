// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaOutlinerDefines.h"

#ifdef AVALANCHEOUTLINER_AvaOutlinerDefines_generated_h
#error "AvaOutlinerDefines.generated.h already included, missing '#pragma once' in AvaOutlinerDefines.h"
#endif
#define AVALANCHEOUTLINER_AvaOutlinerDefines_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerDefines_h

// ********** Begin Enum EAvaOutlinerItemViewMode **************************************************
#define FOREACH_ENUM_EAVAOUTLINERITEMVIEWMODE(op) \
	op(EAvaOutlinerItemViewMode::None) \
	op(EAvaOutlinerItemViewMode::ItemTree) \
	op(EAvaOutlinerItemViewMode::HorizontalItemList) \
	op(EAvaOutlinerItemViewMode::All) 

enum class EAvaOutlinerItemViewMode : uint8;
template<> struct TIsUEnumClass<EAvaOutlinerItemViewMode> { enum { Value = true }; };
template<> AVALANCHEOUTLINER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaOutlinerItemViewMode>();
// ********** End Enum EAvaOutlinerItemViewMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
