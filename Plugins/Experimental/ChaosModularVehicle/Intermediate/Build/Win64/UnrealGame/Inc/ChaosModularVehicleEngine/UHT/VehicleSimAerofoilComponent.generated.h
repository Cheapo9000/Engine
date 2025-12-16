// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/VehicleSimAerofoilComponent.h"

#ifdef CHAOSMODULARVEHICLEENGINE_VehicleSimAerofoilComponent_generated_h
#error "VehicleSimAerofoilComponent.generated.h already included, missing '#pragma once' in VehicleSimAerofoilComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_VehicleSimAerofoilComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVehicleSimAerofoilComponent *********************************************
struct Z_Construct_UClass_UVehicleSimAerofoilComponent_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_UVehicleSimAerofoilComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimAerofoilComponent(); \
	friend struct ::Z_Construct_UClass_UVehicleSimAerofoilComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_UVehicleSimAerofoilComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVehicleSimAerofoilComponent, UVehicleSimBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_UVehicleSimAerofoilComponent_NoRegister) \
	DECLARE_SERIALIZER(UVehicleSimAerofoilComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVehicleSimAerofoilComponent(UVehicleSimAerofoilComponent&&) = delete; \
	UVehicleSimAerofoilComponent(const UVehicleSimAerofoilComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, UVehicleSimAerofoilComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimAerofoilComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehicleSimAerofoilComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVehicleSimAerofoilComponent;

// ********** End Class UVehicleSimAerofoilComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimAerofoilComponent_h

// ********** Begin Enum EModuleAerofoilType *******************************************************
#define FOREACH_ENUM_EMODULEAEROFOILTYPE(op) \
	op(EModuleAerofoilType::Fixed) \
	op(EModuleAerofoilType::Wing) \
	op(EModuleAerofoilType::Rudder) \
	op(EModuleAerofoilType::Elevator) 

enum class EModuleAerofoilType : uint8;
template<> struct TIsUEnumClass<EModuleAerofoilType> { enum { Value = true }; };
template<> CHAOSMODULARVEHICLEENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModuleAerofoilType>();
// ********** End Enum EModuleAerofoilType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
