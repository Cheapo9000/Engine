// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/VehicleSimWheelComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSMODULARVEHICLEENGINE_VehicleSimWheelComponent_generated_h
#error "VehicleSimWheelComponent.generated.h already included, missing '#pragma once' in VehicleSimWheelComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_VehicleSimWheelComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimWheelComponent(); \
	friend struct Z_Construct_UClass_UVehicleSimWheelComponent_Statics; \
public: \
	DECLARE_CLASS(UVehicleSimWheelComponent, UVehicleSimBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(UVehicleSimWheelComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVehicleSimWheelComponent(UVehicleSimWheelComponent&&); \
	UVehicleSimWheelComponent(const UVehicleSimWheelComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleSimWheelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimWheelComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehicleSimWheelComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class UVehicleSimWheelComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h


#define FOREACH_ENUM_EWHEELAXISTYPE(op) \
	op(EWheelAxisType::X) \
	op(EWheelAxisType::Y) 

enum class EWheelAxisType : uint8;
template<> struct TIsUEnumClass<EWheelAxisType> { enum { Value = true }; };
template<> CHAOSMODULARVEHICLEENGINE_API UEnum* StaticEnum<EWheelAxisType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
