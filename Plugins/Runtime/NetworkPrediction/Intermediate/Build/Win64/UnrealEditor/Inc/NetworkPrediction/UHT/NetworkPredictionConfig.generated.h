// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionConfig.h"

#ifdef NETWORKPREDICTION_NetworkPredictionConfig_generated_h
#error "NetworkPredictionConfig.generated.h already included, missing '#pragma once' in NetworkPredictionConfig.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionConfig_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionConfig_h

// ********** Begin Enum ENetworkPredictionTickingPolicy *******************************************
#define FOREACH_ENUM_ENETWORKPREDICTIONTICKINGPOLICY(op) \
	op(ENetworkPredictionTickingPolicy::Independent) \
	op(ENetworkPredictionTickingPolicy::Fixed) \
	op(ENetworkPredictionTickingPolicy::All) 

enum class ENetworkPredictionTickingPolicy : uint8;
template<> struct TIsUEnumClass<ENetworkPredictionTickingPolicy> { enum { Value = true }; };
template<> NETWORKPREDICTION_NON_ATTRIBUTED_API UEnum* StaticEnum<ENetworkPredictionTickingPolicy>();
// ********** End Enum ENetworkPredictionTickingPolicy *********************************************

// ********** Begin Enum ENetworkLOD ***************************************************************
#define FOREACH_ENUM_ENETWORKLOD(op) \
	op(ENetworkLOD::Interpolated) \
	op(ENetworkLOD::SimExtrapolate) \
	op(ENetworkLOD::ForwardPredict) \
	op(ENetworkLOD::All) 

enum class ENetworkLOD : uint8;
template<> struct TIsUEnumClass<ENetworkLOD> { enum { Value = true }; };
template<> NETWORKPREDICTION_NON_ATTRIBUTED_API UEnum* StaticEnum<ENetworkLOD>();
// ********** End Enum ENetworkLOD *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
