// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVehicleMovementComponent.h"

#ifdef CHAOSVEHICLES_ChaosVehicleMovementComponent_generated_h
#error "ChaosVehicleMovementComponent.generated.h already included, missing '#pragma once' in ChaosVehicleMovementComponent.h"
#endif
#define CHAOSVEHICLES_ChaosVehicleMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVehicleReplicatedState *******************************************
struct Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FVehicleInputs Super;


struct FVehicleReplicatedState;
// ********** End ScriptStruct FVehicleReplicatedState *********************************************

// ********** Begin ScriptStruct FVehicleTorqueControlConfig ***************************************
struct Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleTorqueControlConfig;
// ********** End ScriptStruct FVehicleTorqueControlConfig *****************************************

// ********** Begin ScriptStruct FVehicleTargetRotationControlConfig *******************************
struct Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_162_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleTargetRotationControlConfig;
// ********** End ScriptStruct FVehicleTargetRotationControlConfig *********************************

// ********** Begin ScriptStruct FVehicleStabilizeControlConfig ************************************
struct Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_259_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleStabilizeControlConfig;
// ********** End ScriptStruct FVehicleStabilizeControlConfig **************************************

// ********** Begin ScriptStruct FVehicleInputRateConfig *******************************************
struct Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_371_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleInputRateConfig;
// ********** End ScriptStruct FVehicleInputRateConfig *********************************************

// ********** Begin ScriptStruct FVehicleAerofoilConfig ********************************************
struct Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_478_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleAerofoilConfig;
// ********** End ScriptStruct FVehicleAerofoilConfig **********************************************

// ********** Begin ScriptStruct FVehicleThrustConfig **********************************************
struct Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_554_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVehicleThrustConfig;
// ********** End ScriptStruct FVehicleThrustConfig ************************************************

// ********** Begin Class UChaosVehicleMovementComponent *******************************************
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(float , float , float , float , int32 , float , float , float ); \
	virtual void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput); \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execEnableSelfRighting); \
	DECLARE_FUNCTION(execResetVehicle); \
	DECLARE_FUNCTION(execIsParked); \
	DECLARE_FUNCTION(execGetSteeringInput); \
	DECLARE_FUNCTION(execGetHandbrakeInput); \
	DECLARE_FUNCTION(execGetBrakeInput); \
	DECLARE_FUNCTION(execGetThrottleInput); \
	DECLARE_FUNCTION(execGetForwardSpeedMPH); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execGetUseAutoGears); \
	DECLARE_FUNCTION(execGetTargetGear); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execSetRequiresControllerForInputs); \
	DECLARE_FUNCTION(execSetUseAutomaticGears); \
	DECLARE_FUNCTION(execSetTargetGear); \
	DECLARE_FUNCTION(execSetChangeDownInput); \
	DECLARE_FUNCTION(execSetChangeUpInput); \
	DECLARE_FUNCTION(execSetSleeping); \
	DECLARE_FUNCTION(execSetParked); \
	DECLARE_FUNCTION(execSetHandbrakeInput); \
	DECLARE_FUNCTION(execSetYawInput); \
	DECLARE_FUNCTION(execSetRollInput); \
	DECLARE_FUNCTION(execSetPitchInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execSetBrakeInput); \
	DECLARE_FUNCTION(execDecreaseThrottleInput); \
	DECLARE_FUNCTION(execIncreaseThrottleInput); \
	DECLARE_FUNCTION(execSetThrottleInput);


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosVehicleMovementComponent, NO_API)


struct Z_Construct_UClass_UChaosVehicleMovementComponent_Statics;
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleMovementComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_INCLASS \
private: \
	static void StaticRegisterNativesUChaosVehicleMovementComponent(); \
	friend struct ::Z_Construct_UClass_UChaosVehicleMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVEHICLES_API UClass* ::Z_Construct_UClass_UChaosVehicleMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), Z_Construct_UClass_UChaosVehicleMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosVehicleMovementComponent) \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_ARCHIVESERIALIZER \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		OverrideController, \
		NETFIELD_REP_END=OverrideController	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVehicleMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVehicleMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVehicleMovementComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVehicleMovementComponent(UChaosVehicleMovementComponent&&) = delete; \
	UChaosVehicleMovementComponent(const UChaosVehicleMovementComponent&) = delete; \
	NO_API virtual ~UChaosVehicleMovementComponent();


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_720_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_732_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVehicleMovementComponent;

// ********** End Class UChaosVehicleMovementComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h

// ********** Begin Enum EInputFunctionType ********************************************************
#define FOREACH_ENUM_EINPUTFUNCTIONTYPE(op) \
	op(EInputFunctionType::LinearFunction) \
	op(EInputFunctionType::SquaredFunction) \
	op(EInputFunctionType::CustomCurve) 

enum class EInputFunctionType : uint8;
template<> struct TIsUEnumClass<EInputFunctionType> { enum { Value = true }; };
template<> CHAOSVEHICLES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputFunctionType>();
// ********** End Enum EInputFunctionType **********************************************************

// ********** Begin Enum EVehicleAerofoilType ******************************************************
#define FOREACH_ENUM_EVEHICLEAEROFOILTYPE(op) \
	op(EVehicleAerofoilType::Fixed) \
	op(EVehicleAerofoilType::Wing) \
	op(EVehicleAerofoilType::Rudder) \
	op(EVehicleAerofoilType::Elevator) 

enum class EVehicleAerofoilType : uint8;
template<> struct TIsUEnumClass<EVehicleAerofoilType> { enum { Value = true }; };
template<> CHAOSVEHICLES_NON_ATTRIBUTED_API UEnum* StaticEnum<EVehicleAerofoilType>();
// ********** End Enum EVehicleAerofoilType ********************************************************

// ********** Begin Enum EVehicleThrustType ********************************************************
#define FOREACH_ENUM_EVEHICLETHRUSTTYPE(op) \
	op(EVehicleThrustType::Fixed) \
	op(EVehicleThrustType::Wing) \
	op(EVehicleThrustType::Rudder) \
	op(EVehicleThrustType::Elevator) 

enum class EVehicleThrustType : uint8;
template<> struct TIsUEnumClass<EVehicleThrustType> { enum { Value = true }; };
template<> CHAOSVEHICLES_NON_ATTRIBUTED_API UEnum* StaticEnum<EVehicleThrustType>();
// ********** End Enum EVehicleThrustType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
