// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/ChaosSimModuleManagerAsyncCallback.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSMODULARVEHICLEENGINE_ChaosSimModuleManagerAsyncCallback_generated_h
#error "ChaosSimModuleManagerAsyncCallback.generated.h already included, missing '#pragma once' in ChaosSimModuleManagerAsyncCallback.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_ChaosSimModuleManagerAsyncCallback_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ChaosSimModuleManagerAsyncCallback_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularVehicleInputs_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSMODULARVEHICLEENGINE_API UScriptStruct* StaticStruct<struct FModularVehicleInputs>();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ChaosSimModuleManagerAsyncCallback_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkModularVehicleInputs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsData Super;


template<> CHAOSMODULARVEHICLEENGINE_API UScriptStruct* StaticStruct<struct FNetworkModularVehicleInputs>();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ChaosSimModuleManagerAsyncCallback_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkModularVehicleStates_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsData Super;


template<> CHAOSMODULARVEHICLEENGINE_API UScriptStruct* StaticStruct<struct FNetworkModularVehicleStates>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ChaosSimModuleManagerAsyncCallback_h


#define FOREACH_ENUM_ETRACETYPE(op) \
	op(ETraceType::Raycast) \
	op(ETraceType::Spherecast) 

enum class ETraceType : uint8;
template<> struct TIsUEnumClass<ETraceType> { enum { Value = true }; };
template<> CHAOSMODULARVEHICLEENGINE_API UEnum* StaticEnum<ETraceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
