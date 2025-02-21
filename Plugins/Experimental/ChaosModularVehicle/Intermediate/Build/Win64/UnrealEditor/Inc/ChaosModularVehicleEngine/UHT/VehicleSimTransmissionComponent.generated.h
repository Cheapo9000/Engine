// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/VehicleSimTransmissionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSMODULARVEHICLEENGINE_VehicleSimTransmissionComponent_generated_h
#error "VehicleSimTransmissionComponent.generated.h already included, missing '#pragma once' in VehicleSimTransmissionComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_VehicleSimTransmissionComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimTransmissionComponent(); \
	friend struct Z_Construct_UClass_UVehicleSimTransmissionComponent_Statics; \
public: \
	DECLARE_CLASS(UVehicleSimTransmissionComponent, UVehicleSimBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(UVehicleSimTransmissionComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVehicleSimTransmissionComponent(UVehicleSimTransmissionComponent&&); \
	UVehicleSimTransmissionComponent(const UVehicleSimTransmissionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleSimTransmissionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimTransmissionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehicleSimTransmissionComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class UVehicleSimTransmissionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h


#define FOREACH_ENUM_EMODULETRANSTYPE(op) \
	op(EModuleTransType::Manual) \
	op(EModuleTransType::Automatic) 

enum class EModuleTransType : uint8;
template<> struct TIsUEnumClass<EModuleTransType> { enum { Value = true }; };
template<> CHAOSMODULARVEHICLEENGINE_API UEnum* StaticEnum<EModuleTransType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
