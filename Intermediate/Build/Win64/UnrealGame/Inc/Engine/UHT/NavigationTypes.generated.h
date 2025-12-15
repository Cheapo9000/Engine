// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavigationTypes.h"

#ifdef ENGINE_NavigationTypes_generated_h
#error "NavigationTypes.generated.h already included, missing '#pragma once' in NavigationTypes.h"
#endif
#define ENGINE_NavigationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNavLinkAuxiliaryId ***********************************************
struct Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNavLinkAuxiliaryId;
// ********** End ScriptStruct FNavLinkAuxiliaryId *************************************************

// ********** Begin ScriptStruct FNavLinkId ********************************************************
struct Z_Construct_UScriptStruct_FNavLinkId_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_151_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavLinkId_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNavLinkId;
// ********** End ScriptStruct FNavLinkId **********************************************************

// ********** Begin ScriptStruct FMovementProperties ***********************************************
struct Z_Construct_UScriptStruct_FMovementProperties_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_389_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovementProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMovementProperties;
// ********** End ScriptStruct FMovementProperties *************************************************

// ********** Begin ScriptStruct FNavMovementProperties ********************************************
struct Z_Construct_UScriptStruct_FNavMovementProperties_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_427_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavMovementProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNavMovementProperties;
// ********** End ScriptStruct FNavMovementProperties **********************************************

// ********** Begin ScriptStruct FNavAgentProperties ***********************************************
struct Z_Construct_UScriptStruct_FNavAgentProperties_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_454_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavAgentProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FMovementProperties Super;


struct FNavAgentProperties;
// ********** End ScriptStruct FNavAgentProperties *************************************************

// ********** Begin ScriptStruct FNavDataConfig ****************************************************
struct Z_Construct_UScriptStruct_FNavDataConfig_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_526_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavDataConfig_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNavAgentProperties Super;


struct FNavDataConfig;
// ********** End ScriptStruct FNavDataConfig ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h

// ********** Begin Enum ENavigationOptionFlag *****************************************************
#define FOREACH_ENUM_ENAVIGATIONOPTIONFLAG(op) \
	op(ENavigationOptionFlag::Default) \
	op(ENavigationOptionFlag::Enable) \
	op(ENavigationOptionFlag::Disable) 

enum class ENavigationOptionFlag : uint8;
template<> struct TIsUEnumClass<ENavigationOptionFlag> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavigationOptionFlag>();
// ********** End Enum ENavigationOptionFlag *******************************************************

// ********** Begin Enum ENavDataGatheringModeConfig ***********************************************
#define FOREACH_ENUM_ENAVDATAGATHERINGMODECONFIG(op) \
	op(ENavDataGatheringModeConfig::Invalid) \
	op(ENavDataGatheringModeConfig::Instant) \
	op(ENavDataGatheringModeConfig::Lazy) 

enum class ENavDataGatheringModeConfig : uint8;
template<> struct TIsUEnumClass<ENavDataGatheringModeConfig> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavDataGatheringModeConfig>();
// ********** End Enum ENavDataGatheringModeConfig *************************************************

// ********** Begin Enum ENavigationSortPendingTilesMethod *****************************************
#define FOREACH_ENUM_ENAVIGATIONSORTPENDINGTILESMETHOD(op) \
	op(ENavigationSortPendingTilesMethod::SortWithSeedLocations) \
	op(ENavigationSortPendingTilesMethod::SortByPriority) \
	op(ENavigationSortPendingTilesMethod::None) 

enum class ENavigationSortPendingTilesMethod : uint8;
template<> struct TIsUEnumClass<ENavigationSortPendingTilesMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavigationSortPendingTilesMethod>();
// ********** End Enum ENavigationSortPendingTilesMethod *******************************************

// ********** Begin Enum ENavPathEvent *************************************************************
#define FOREACH_ENUM_ENAVPATHEVENT(op) \
	op(ENavPathEvent::Cleared) \
	op(ENavPathEvent::NewPath) \
	op(ENavPathEvent::UpdatedDueToGoalMoved) \
	op(ENavPathEvent::UpdatedDueToNavigationChanged) \
	op(ENavPathEvent::Invalidated) \
	op(ENavPathEvent::RePathFailed) \
	op(ENavPathEvent::MetaPathUpdate) \
	op(ENavPathEvent::Custom) 

namespace ENavPathEvent { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavPathEvent::Type>();
// ********** End Enum ENavPathEvent ***************************************************************

// ********** Begin Enum ENavigationQueryResult ****************************************************
#define FOREACH_ENUM_ENAVIGATIONQUERYRESULT(op) \
	op(ENavigationQueryResult::Invalid) \
	op(ENavigationQueryResult::Error) \
	op(ENavigationQueryResult::Fail) \
	op(ENavigationQueryResult::Success) 

namespace ENavigationQueryResult { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavigationQueryResult::Type>();
// ********** End Enum ENavigationQueryResult ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
