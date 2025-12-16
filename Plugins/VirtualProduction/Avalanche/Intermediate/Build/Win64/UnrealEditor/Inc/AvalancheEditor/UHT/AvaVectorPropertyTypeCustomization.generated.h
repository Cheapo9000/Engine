// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetailView/Customizations/AvaVectorPropertyTypeCustomization.h"

#ifdef AVALANCHEEDITOR_AvaVectorPropertyTypeCustomization_generated_h
#error "AvaVectorPropertyTypeCustomization.generated.h already included, missing '#pragma once' in AvaVectorPropertyTypeCustomization.h"
#endif
#define AVALANCHEEDITOR_AvaVectorPropertyTypeCustomization_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheEditor_Private_DetailView_Customizations_AvaVectorPropertyTypeCustomization_h

// ********** Begin Enum ERatioMode ****************************************************************
#define FOREACH_ENUM_ERATIOMODE(op) \
	op(ERatioMode::None) \
	op(ERatioMode::X) \
	op(ERatioMode::Y) \
	op(ERatioMode::Z) \
	op(ERatioMode::PreserveXY) \
	op(ERatioMode::PreserveYZ) \
	op(ERatioMode::PreserveXZ) \
	op(ERatioMode::PreserveXYZ) 

enum class ERatioMode : uint8;
template<> struct TIsUEnumClass<ERatioMode> { enum { Value = true }; };
template<> AVALANCHEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ERatioMode>();
// ********** End Enum ERatioMode ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
