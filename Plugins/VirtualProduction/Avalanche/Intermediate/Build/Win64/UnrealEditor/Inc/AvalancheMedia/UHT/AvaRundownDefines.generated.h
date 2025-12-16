// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/AvaRundownDefines.h"

#ifdef AVALANCHEMEDIA_AvaRundownDefines_generated_h
#error "AvaRundownDefines.generated.h already included, missing '#pragma once' in AvaRundownDefines.h"
#endif
#define AVALANCHEMEDIA_AvaRundownDefines_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundownDefines_h

// ********** Begin Enum EAvaRundownPagePlayType ***************************************************
#define FOREACH_ENUM_EAVARUNDOWNPAGEPLAYTYPE(op) \
	op(EAvaRundownPagePlayType::PlayFromStart) \
	op(EAvaRundownPagePlayType::PreviewFromStart) \
	op(EAvaRundownPagePlayType::PreviewFromFrame) 

enum class EAvaRundownPagePlayType : uint8;
template<> struct TIsUEnumClass<EAvaRundownPagePlayType> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaRundownPagePlayType>();
// ********** End Enum EAvaRundownPagePlayType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
