// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Planners/AvaInteractiveToolsToolViewportPointListPlanner.h"

#ifdef AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsToolViewportPointListPlanner_generated_h
#error "AvaInteractiveToolsToolViewportPointListPlanner.generated.h already included, missing '#pragma once' in AvaInteractiveToolsToolViewportPointListPlanner.h"
#endif
#define AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsToolViewportPointListPlanner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaInteractiveToolsToolViewportPointListPlanner *************************
struct Z_Construct_UClass_UAvaInteractiveToolsToolViewportPointListPlanner_Statics;
AVALANCHEINTERACTIVETOOLS_API UClass* Z_Construct_UClass_UAvaInteractiveToolsToolViewportPointListPlanner_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaInteractiveToolsToolViewportPointListPlanner(); \
	friend struct ::Z_Construct_UClass_UAvaInteractiveToolsToolViewportPointListPlanner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEINTERACTIVETOOLS_API UClass* ::Z_Construct_UClass_UAvaInteractiveToolsToolViewportPointListPlanner_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaInteractiveToolsToolViewportPointListPlanner, UAvaInteractiveToolsToolViewportPlanner, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheInteractiveTools"), Z_Construct_UClass_UAvaInteractiveToolsToolViewportPointListPlanner_NoRegister) \
	DECLARE_SERIALIZER(UAvaInteractiveToolsToolViewportPointListPlanner)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaInteractiveToolsToolViewportPointListPlanner(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaInteractiveToolsToolViewportPointListPlanner(UAvaInteractiveToolsToolViewportPointListPlanner&&) = delete; \
	UAvaInteractiveToolsToolViewportPointListPlanner(const UAvaInteractiveToolsToolViewportPointListPlanner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaInteractiveToolsToolViewportPointListPlanner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaInteractiveToolsToolViewportPointListPlanner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaInteractiveToolsToolViewportPointListPlanner) \
	NO_API virtual ~UAvaInteractiveToolsToolViewportPointListPlanner();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaInteractiveToolsToolViewportPointListPlanner;

// ********** End Class UAvaInteractiveToolsToolViewportPointListPlanner ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Planners_AvaInteractiveToolsToolViewportPointListPlanner_h

// ********** Begin Enum EAvaInteractiveToolsToolViewportPointListPlannerLineStatus ****************
#define FOREACH_ENUM_EAVAINTERACTIVETOOLSTOOLVIEWPORTPOINTLISTPLANNERLINESTATUS(op) \
	op(EAvaInteractiveToolsToolViewportPointListPlannerLineStatus::Neutral) \
	op(EAvaInteractiveToolsToolViewportPointListPlannerLineStatus::Allowed) \
	op(EAvaInteractiveToolsToolViewportPointListPlannerLineStatus::Disallowed) 

enum class EAvaInteractiveToolsToolViewportPointListPlannerLineStatus : uint8;
template<> struct TIsUEnumClass<EAvaInteractiveToolsToolViewportPointListPlannerLineStatus> { enum { Value = true }; };
template<> AVALANCHEINTERACTIVETOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaInteractiveToolsToolViewportPointListPlannerLineStatus>();
// ********** End Enum EAvaInteractiveToolsToolViewportPointListPlannerLineStatus ******************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
