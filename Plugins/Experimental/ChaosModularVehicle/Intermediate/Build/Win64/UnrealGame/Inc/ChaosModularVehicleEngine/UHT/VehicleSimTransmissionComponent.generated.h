// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/VehicleSimTransmissionComponent.h"

#ifdef CHAOSMODULARVEHICLEENGINE_VehicleSimTransmissionComponent_generated_h
#error "VehicleSimTransmissionComponent.generated.h already included, missing '#pragma once' in VehicleSimTransmissionComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_VehicleSimTransmissionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnGearChange *********************************************************
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_35_DELEGATE \
static CHAOSMODULARVEHICLEENGINE_API void FOnGearChange_DelegateWrapper(const FMulticastScriptDelegate& OnGearChange, int32 Guid, int32 CurrentGear);


// ********** End Delegate FOnGearChange ***********************************************************

// ********** Begin Class UVehicleSimTransmissionComponent *****************************************
struct Z_Construct_UClass_UVehicleSimTransmissionComponent_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_UVehicleSimTransmissionComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimTransmissionComponent(); \
	friend struct ::Z_Construct_UClass_UVehicleSimTransmissionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_UVehicleSimTransmissionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVehicleSimTransmissionComponent, UVehicleSimBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_UVehicleSimTransmissionComponent_NoRegister) \
	DECLARE_SERIALIZER(UVehicleSimTransmissionComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVehicleSimTransmissionComponent(UVehicleSimTransmissionComponent&&) = delete; \
	UVehicleSimTransmissionComponent(const UVehicleSimTransmissionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, UVehicleSimTransmissionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimTransmissionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehicleSimTransmissionComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVehicleSimTransmissionComponent;

// ********** End Class UVehicleSimTransmissionComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimTransmissionComponent_h

// ********** Begin Enum EModuleTransType **********************************************************
#define FOREACH_ENUM_EMODULETRANSTYPE(op) \
	op(EModuleTransType::Manual) \
	op(EModuleTransType::Automatic) 

enum class EModuleTransType : uint8;
template<> struct TIsUEnumClass<EModuleTransType> { enum { Value = true }; };
template<> CHAOSMODULARVEHICLEENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModuleTransType>();
// ********** End Enum EModuleTransType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
