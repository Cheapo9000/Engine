// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VehicleAnimationInstance.h"

#ifdef CHAOSVEHICLES_VehicleAnimationInstance_generated_h
#error "VehicleAnimationInstance.generated.h already included, missing '#pragma once' in VehicleAnimationInstance.h"
#endif
#define CHAOSVEHICLES_VehicleAnimationInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWheeledVehiclePawn;

// ********** Begin ScriptStruct FVehicleAnimationInstanceProxy ************************************
struct Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics;
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FVehicleAnimationInstanceProxy;
// ********** End ScriptStruct FVehicleAnimationInstanceProxy **************************************

// ********** Begin Class UVehicleAnimationInstance ************************************************
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_78_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVehicle);


struct Z_Construct_UClass_UVehicleAnimationInstance_Statics;
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UVehicleAnimationInstance_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUVehicleAnimationInstance(); \
	friend struct ::Z_Construct_UClass_UVehicleAnimationInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVEHICLES_API UClass* ::Z_Construct_UClass_UVehicleAnimationInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UVehicleAnimationInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), Z_Construct_UClass_UVehicleAnimationInstance_NoRegister) \
	DECLARE_SERIALIZER(UVehicleAnimationInstance)


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleAnimationInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleAnimationInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleAnimationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleAnimationInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVehicleAnimationInstance(UVehicleAnimationInstance&&) = delete; \
	UVehicleAnimationInstance(const UVehicleAnimationInstance&) = delete; \
	NO_API virtual ~UVehicleAnimationInstance();


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_75_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_78_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_78_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVehicleAnimationInstance;

// ********** End Class UVehicleAnimationInstance **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
