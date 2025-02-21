// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/VehicleSimAerofoilComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSMODULARVEHICLEENGINE_VehicleSimAerofoilComponent_generated_h
#error "VehicleSimAerofoilComponent.generated.h already included, missing '#pragma once' in VehicleSimAerofoilComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_VehicleSimAerofoilComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimAerofoilComponent(); \
	friend struct Z_Construct_UClass_UVehicleSimAerofoilComponent_Statics; \
public: \
	DECLARE_CLASS(UVehicleSimAerofoilComponent, UVehicleSimBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(UVehicleSimAerofoilComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVehicleSimAerofoilComponent(UVehicleSimAerofoilComponent&&); \
	UVehicleSimAerofoilComponent(const UVehicleSimAerofoilComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleSimAerofoilComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimAerofoilComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehicleSimAerofoilComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class UVehicleSimAerofoilComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h


#define FOREACH_ENUM_EMODULEAEROFOILTYPE(op) \
	op(EModuleAerofoilType::Fixed) \
	op(EModuleAerofoilType::Wing) \
	op(EModuleAerofoilType::Rudder) \
	op(EModuleAerofoilType::Elevator) 

enum class EModuleAerofoilType : uint8;
template<> struct TIsUEnumClass<EModuleAerofoilType> { enum { Value = true }; };
template<> CHAOSMODULARVEHICLEENGINE_API UEnum* StaticEnum<EModuleAerofoilType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
