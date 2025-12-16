// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosWheeledVehicleMovementComponent.h"

#ifdef CHAOSVEHICLES_ChaosWheeledVehicleMovementComponent_generated_h
#error "ChaosWheeledVehicleMovementComponent.generated.h already included, missing '#pragma once' in ChaosWheeledVehicleMovementComponent.h"
#endif
#define CHAOSVEHICLES_ChaosWheeledVehicleMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosVehicleWheel;
class UClass;
class UPhysicalMaterial;
enum class ETorqueCombineMethod : uint8;
struct FWheeledSnaphotData;
struct FWheelSnapshot;
struct FWheelStatus;

// ********** Begin ScriptStruct FWheelStatus ******************************************************
struct Z_Construct_UScriptStruct_FWheelStatus_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWheelStatus_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWheelStatus;
// ********** End ScriptStruct FWheelStatus ********************************************************

// ********** Begin ScriptStruct FVehicleDifferentialConfig ****************************************
struct Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_185_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleDifferentialConfig;
// ********** End ScriptStruct FVehicleDifferentialConfig ******************************************

// ********** Begin ScriptStruct FVehicleEngineConfig **********************************************
struct Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleEngineConfig;
// ********** End ScriptStruct FVehicleEngineConfig ************************************************

// ********** Begin ScriptStruct FVehicleTransmissionConfig ****************************************
struct Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_314_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleTransmissionConfig;
// ********** End ScriptStruct FVehicleTransmissionConfig ******************************************

// ********** Begin ScriptStruct FVehicleSteeringConfig ********************************************
struct Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_444_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleSteeringConfig;
// ********** End ScriptStruct FVehicleSteeringConfig **********************************************

// ********** Begin ScriptStruct FChaosWheelSetup **************************************************
struct Z_Construct_UScriptStruct_FChaosWheelSetup_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_516_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosWheelSetup_Statics; \
	static class UScriptStruct* StaticStruct();


struct FChaosWheelSetup;
// ********** End ScriptStruct FChaosWheelSetup ****************************************************

// ********** Begin Class UChaosWheeledVehicleMovementComponent ************************************
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_635_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSuspensionParams); \
	DECLARE_FUNCTION(execSetBrakeTorque); \
	DECLARE_FUNCTION(execSetDriveTorque); \
	DECLARE_FUNCTION(execSetTorqueCombineMethod); \
	DECLARE_FUNCTION(execSetWheelMaxSteerAngle); \
	DECLARE_FUNCTION(execSetWheelHandbrakeTorque); \
	DECLARE_FUNCTION(execSetWheelMaxBrakeTorque); \
	DECLARE_FUNCTION(execSetWheelSlipGraphMultiplier); \
	DECLARE_FUNCTION(execSetWheelFrictionMultiplier); \
	DECLARE_FUNCTION(execSetWheelRadius); \
	DECLARE_FUNCTION(execSetAffectedByEngine); \
	DECLARE_FUNCTION(execSetAffectedBySteering); \
	DECLARE_FUNCTION(execSetAffectedByHandbrake); \
	DECLARE_FUNCTION(execSetAffectedByBrake); \
	DECLARE_FUNCTION(execSetABSEnabled); \
	DECLARE_FUNCTION(execSetTractionControlEnabled); \
	DECLARE_FUNCTION(execSetDifferentialFrontRearSplit); \
	DECLARE_FUNCTION(execSetDownforceCoefficient); \
	DECLARE_FUNCTION(execSetDragCoefficient); \
	DECLARE_FUNCTION(execSetMaxEngineTorque); \
	DECLARE_FUNCTION(execSetSnapshot); \
	DECLARE_FUNCTION(execGetSnapshot); \
	DECLARE_FUNCTION(execSetWheelClass); \
	DECLARE_FUNCTION(execEnableWheelFriction); \
	DECLARE_FUNCTION(execEnableSuspension); \
	DECLARE_FUNCTION(execEnableMechanicalSim); \
	DECLARE_FUNCTION(execGetWheelState); \
	DECLARE_FUNCTION(execMakeWheelSnapshot); \
	DECLARE_FUNCTION(execBreakWheelSnapshot); \
	DECLARE_FUNCTION(execMakeWheeledSnapshot); \
	DECLARE_FUNCTION(execBreakWheeledSnapshot); \
	DECLARE_FUNCTION(execMakeWheelStatus); \
	DECLARE_FUNCTION(execBreakWheelStatus); \
	DECLARE_FUNCTION(execGetNumWheels); \
	DECLARE_FUNCTION(execGetEngineMaxRotationSpeed); \
	DECLARE_FUNCTION(execGetEngineRotationSpeed);


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_635_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosWheeledVehicleMovementComponent, NO_API)


struct Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics;
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_635_INCLASS \
private: \
	static void StaticRegisterNativesUChaosWheeledVehicleMovementComponent(); \
	friend struct ::Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVEHICLES_API UClass* ::Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosWheeledVehicleMovementComponent, UChaosVehicleMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosWheeledVehicleMovementComponent) \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_635_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_635_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosWheeledVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosWheeledVehicleMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosWheeledVehicleMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosWheeledVehicleMovementComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosWheeledVehicleMovementComponent(UChaosWheeledVehicleMovementComponent&&) = delete; \
	UChaosWheeledVehicleMovementComponent(const UChaosWheeledVehicleMovementComponent&) = delete; \
	NO_API virtual ~UChaosWheeledVehicleMovementComponent();


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_632_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_635_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_635_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_635_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_635_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosWheeledVehicleMovementComponent;

// ********** End Class UChaosWheeledVehicleMovementComponent **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h

// ********** Begin Enum EVehicleDifferential ******************************************************
#define FOREACH_ENUM_EVEHICLEDIFFERENTIAL(op) \
	op(EVehicleDifferential::Undefined) \
	op(EVehicleDifferential::AllWheelDrive) \
	op(EVehicleDifferential::FrontWheelDrive) \
	op(EVehicleDifferential::RearWheelDrive) 

enum class EVehicleDifferential : uint8;
template<> struct TIsUEnumClass<EVehicleDifferential> { enum { Value = true }; };
template<> CHAOSVEHICLES_NON_ATTRIBUTED_API UEnum* StaticEnum<EVehicleDifferential>();
// ********** End Enum EVehicleDifferential ********************************************************

// ********** Begin Enum ESteeringType *************************************************************
#define FOREACH_ENUM_ESTEERINGTYPE(op) \
	op(ESteeringType::SingleAngle) \
	op(ESteeringType::AngleRatio) \
	op(ESteeringType::Ackermann) 

enum class ESteeringType : uint8;
template<> struct TIsUEnumClass<ESteeringType> { enum { Value = true }; };
template<> CHAOSVEHICLES_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteeringType>();
// ********** End Enum ESteeringType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
