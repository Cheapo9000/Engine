// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/ChaosSimModuleManagerAsyncCallback.h"

#ifdef CHAOSMODULARVEHICLEENGINE_ChaosSimModuleManagerAsyncCallback_generated_h
#error "ChaosSimModuleManagerAsyncCallback.generated.h already included, missing '#pragma once' in ChaosSimModuleManagerAsyncCallback.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_ChaosSimModuleManagerAsyncCallback_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModularVehicleInputs *********************************************
struct Z_Construct_UScriptStruct_FModularVehicleInputs_Statics;
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ChaosSimModuleManagerAsyncCallback_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularVehicleInputs_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct();


struct FModularVehicleInputs;
// ********** End ScriptStruct FModularVehicleInputs ***********************************************

// ********** Begin ScriptStruct FNetworkModularVehicleInputs **************************************
struct Z_Construct_UScriptStruct_FNetworkModularVehicleInputs_Statics;
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ChaosSimModuleManagerAsyncCallback_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkModularVehicleInputs_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsData Super;


struct FNetworkModularVehicleInputs;
// ********** End ScriptStruct FNetworkModularVehicleInputs ****************************************

// ********** Begin ScriptStruct FNetworkModularVehicleStateNetTokenData ***************************
struct Z_Construct_UScriptStruct_FNetworkModularVehicleStateNetTokenData_Statics;
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ChaosSimModuleManagerAsyncCallback_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkModularVehicleStateNetTokenData_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkModularVehicleStateNetTokenData;
// ********** End ScriptStruct FNetworkModularVehicleStateNetTokenData *****************************

// ********** Begin ScriptStruct FNetworkModularVehicleStates **************************************
struct Z_Construct_UScriptStruct_FNetworkModularVehicleStates_Statics;
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ChaosSimModuleManagerAsyncCallback_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkModularVehicleStates_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsData Super;


struct FNetworkModularVehicleStates;
// ********** End ScriptStruct FNetworkModularVehicleStates ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ChaosSimModuleManagerAsyncCallback_h

// ********** Begin Enum ETraceType ****************************************************************
#define FOREACH_ENUM_ETRACETYPE(op) \
	op(ETraceType::Raycast) \
	op(ETraceType::Spherecast) 

enum class ETraceType : uint8;
template<> struct TIsUEnumClass<ETraceType> { enum { Value = true }; };
template<> CHAOSMODULARVEHICLEENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETraceType>();
// ********** End Enum ETraceType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
