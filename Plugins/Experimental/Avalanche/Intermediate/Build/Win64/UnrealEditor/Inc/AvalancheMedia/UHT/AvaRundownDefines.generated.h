// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/AvaRundownDefines.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaRundownDefines_generated_h
#error "AvaRundownDefines.generated.h already included, missing '#pragma once' in AvaRundownDefines.h"
#endif
#define AVALANCHEMEDIA_AvaRundownDefines_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundownDefines_h


#define FOREACH_ENUM_EAVARUNDOWNPAGEPLAYTYPE(op) \
	op(EAvaRundownPagePlayType::PlayFromStart) \
	op(EAvaRundownPagePlayType::PreviewFromStart) \
	op(EAvaRundownPagePlayType::PreviewFromFrame) 

enum class EAvaRundownPagePlayType : uint8;
template<> struct TIsUEnumClass<EAvaRundownPagePlayType> { enum { Value = true }; };
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaRundownPagePlayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
