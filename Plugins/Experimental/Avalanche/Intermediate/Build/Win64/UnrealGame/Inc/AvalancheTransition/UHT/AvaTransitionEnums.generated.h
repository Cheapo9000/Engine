// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTransitionEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHETRANSITION_AvaTransitionEnums_generated_h
#error "AvaTransitionEnums.generated.h already included, missing '#pragma once' in AvaTransitionEnums.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionEnums_h


#define FOREACH_ENUM_EAVATRANSITIONTYPE(op) \
	op(EAvaTransitionType::In) \
	op(EAvaTransitionType::Out) \
	op(EAvaTransitionType::MAX) 

enum class EAvaTransitionType : uint8;
template<> struct TIsUEnumClass<EAvaTransitionType> { enum { Value = true }; };
template<> AVALANCHETRANSITION_API UEnum* StaticEnum<EAvaTransitionType>();

#define FOREACH_ENUM_EAVATRANSITIONRUNSTATE(op) \
	op(EAvaTransitionRunState::Unknown) \
	op(EAvaTransitionRunState::Running) \
	op(EAvaTransitionRunState::Finished) 

enum class EAvaTransitionRunState : uint8;
template<> struct TIsUEnumClass<EAvaTransitionRunState> { enum { Value = true }; };
template<> AVALANCHETRANSITION_API UEnum* StaticEnum<EAvaTransitionRunState>();

#define FOREACH_ENUM_EAVATRANSITIONCOMPARISONRESULT(op) \
	op(EAvaTransitionComparisonResult::None) \
	op(EAvaTransitionComparisonResult::Different) \
	op(EAvaTransitionComparisonResult::Same) 

enum class EAvaTransitionComparisonResult : uint8;
template<> struct TIsUEnumClass<EAvaTransitionComparisonResult> { enum { Value = true }; };
template<> AVALANCHETRANSITION_API UEnum* StaticEnum<EAvaTransitionComparisonResult>();

#define FOREACH_ENUM_EAVATRANSITIONSCENETYPE(op) \
	op(EAvaTransitionSceneType::This) \
	op(EAvaTransitionSceneType::Other) 

enum class EAvaTransitionSceneType : uint8;
template<> struct TIsUEnumClass<EAvaTransitionSceneType> { enum { Value = true }; };
template<> AVALANCHETRANSITION_API UEnum* StaticEnum<EAvaTransitionSceneType>();

#define FOREACH_ENUM_EAVATRANSITIONLAYERCOMPARETYPE(op) \
	op(EAvaTransitionLayerCompareType::None) \
	op(EAvaTransitionLayerCompareType::Same) \
	op(EAvaTransitionLayerCompareType::Different) \
	op(EAvaTransitionLayerCompareType::MatchingTag) \
	op(EAvaTransitionLayerCompareType::Any) 

enum class EAvaTransitionLayerCompareType : uint8;
template<> struct TIsUEnumClass<EAvaTransitionLayerCompareType> { enum { Value = true }; };
template<> AVALANCHETRANSITION_API UEnum* StaticEnum<EAvaTransitionLayerCompareType>();

#define FOREACH_ENUM_EAVATRANSITIONINSTANCINGMODE(op) \
	op(EAvaTransitionInstancingMode::New) \
	op(EAvaTransitionInstancingMode::Reuse) 

enum class EAvaTransitionInstancingMode : uint8;
template<> struct TIsUEnumClass<EAvaTransitionInstancingMode> { enum { Value = true }; };
template<> AVALANCHETRANSITION_API UEnum* StaticEnum<EAvaTransitionInstancingMode>();

#define FOREACH_ENUM_EAVATRANSITIONLEVELHIDEMODE(op) \
	op(EAvaTransitionLevelHideMode::NoHide) \
	op(EAvaTransitionLevelHideMode::HideUnlessReuse) \
	op(EAvaTransitionLevelHideMode::AlwaysHide) 

enum class EAvaTransitionLevelHideMode : uint8;
template<> struct TIsUEnumClass<EAvaTransitionLevelHideMode> { enum { Value = true }; };
template<> AVALANCHETRANSITION_API UEnum* StaticEnum<EAvaTransitionLevelHideMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
