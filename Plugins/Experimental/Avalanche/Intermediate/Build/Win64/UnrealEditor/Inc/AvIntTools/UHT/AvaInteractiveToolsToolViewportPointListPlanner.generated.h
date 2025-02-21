// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Planners/AvaInteractiveToolsToolViewportPointListPlanner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsToolViewportPointListPlanner_generated_h
#error "AvaInteractiveToolsToolViewportPointListPlanner.generated.h already included, missing '#pragma once' in AvaInteractiveToolsToolViewportPointListPlanner.h"
#endif
#define AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsToolViewportPointListPlanner_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaInteractiveToolsToolViewportPointListPlanner(); \
	friend struct Z_Construct_UClass_UAvaInteractiveToolsToolViewportPointListPlanner_Statics; \
public: \
	DECLARE_CLASS(UAvaInteractiveToolsToolViewportPointListPlanner, UAvaInteractiveToolsToolViewportPlanner, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheInteractiveTools"), NO_API) \
	DECLARE_SERIALIZER(UAvaInteractiveToolsToolViewportPointListPlanner)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaInteractiveToolsToolViewportPointListPlanner(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaInteractiveToolsToolViewportPointListPlanner(UAvaInteractiveToolsToolViewportPointListPlanner&&); \
	UAvaInteractiveToolsToolViewportPointListPlanner(const UAvaInteractiveToolsToolViewportPointListPlanner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaInteractiveToolsToolViewportPointListPlanner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaInteractiveToolsToolViewportPointListPlanner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaInteractiveToolsToolViewportPointListPlanner) \
	NO_API virtual ~UAvaInteractiveToolsToolViewportPointListPlanner();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEINTERACTIVETOOLS_API UClass* StaticClass<class UAvaInteractiveToolsToolViewportPointListPlanner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h


#define FOREACH_ENUM_EAVAINTERACTIVETOOLSTOOLVIEWPORTPOINTLISTPLANNERLINESTATUS(op) \
	op(EAvaInteractiveToolsToolViewportPointListPlannerLineStatus::Neutral) \
	op(EAvaInteractiveToolsToolViewportPointListPlannerLineStatus::Allowed) \
	op(EAvaInteractiveToolsToolViewportPointListPlannerLineStatus::Disallowed) 

enum class EAvaInteractiveToolsToolViewportPointListPlannerLineStatus : uint8;
template<> struct TIsUEnumClass<EAvaInteractiveToolsToolViewportPointListPlannerLineStatus> { enum { Value = true }; };
template<> AVALANCHEINTERACTIVETOOLS_API UEnum* StaticEnum<EAvaInteractiveToolsToolViewportPointListPlannerLineStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
