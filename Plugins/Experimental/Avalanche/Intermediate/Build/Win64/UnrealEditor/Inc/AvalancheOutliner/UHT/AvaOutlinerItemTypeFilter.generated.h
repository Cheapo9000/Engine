// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/AvaOutlinerItemTypeFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEOUTLINER_AvaOutlinerItemTypeFilter_generated_h
#error "AvaOutlinerItemTypeFilter.generated.h already included, missing '#pragma once' in AvaOutlinerItemTypeFilter.h"
#endif
#define AVALANCHEOUTLINER_AvaOutlinerItemTypeFilter_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Public_Filters_AvaOutlinerItemTypeFilter_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaOutlinerItemTypeFilterData_Statics; \
	AVALANCHEOUTLINER_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEOUTLINER_API UScriptStruct* StaticStruct<struct FAvaOutlinerItemTypeFilterData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Public_Filters_AvaOutlinerItemTypeFilter_h


#define FOREACH_ENUM_EAVAOUTLINERTYPEFILTERMODE(op) \
	op(EAvaOutlinerTypeFilterMode::None) \
	op(EAvaOutlinerTypeFilterMode::MatchesType) \
	op(EAvaOutlinerTypeFilterMode::ContainerOfType) 

enum class EAvaOutlinerTypeFilterMode : uint8;
template<> struct TIsUEnumClass<EAvaOutlinerTypeFilterMode> { enum { Value = true }; };
template<> AVALANCHEOUTLINER_API UEnum* StaticEnum<EAvaOutlinerTypeFilterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
