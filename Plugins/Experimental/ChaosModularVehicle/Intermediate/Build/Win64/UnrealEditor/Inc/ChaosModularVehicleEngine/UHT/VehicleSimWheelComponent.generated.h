// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/VehicleSimWheelComponent.h"

#ifdef CHAOSMODULARVEHICLEENGINE_VehicleSimWheelComponent_generated_h
#error "VehicleSimWheelComponent.generated.h already included, missing '#pragma once' in VehicleSimWheelComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_VehicleSimWheelComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnWheelTouchChange ***************************************************
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_35_DELEGATE \
static CHAOSMODULARVEHICLEENGINE_API void FOnWheelTouchChange_DelegateWrapper(const FMulticastScriptDelegate& OnWheelTouchChange, int32 Guid, bool IsInContact);


// ********** End Delegate FOnWheelTouchChange *****************************************************

// ********** Begin Class UVehicleSimWheelComponent ************************************************
struct Z_Construct_UClass_UVehicleSimWheelComponent_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_UVehicleSimWheelComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimWheelComponent(); \
	friend struct ::Z_Construct_UClass_UVehicleSimWheelComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_UVehicleSimWheelComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVehicleSimWheelComponent, UVehicleSimBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_UVehicleSimWheelComponent_NoRegister) \
	DECLARE_SERIALIZER(UVehicleSimWheelComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVehicleSimWheelComponent(UVehicleSimWheelComponent&&) = delete; \
	UVehicleSimWheelComponent(const UVehicleSimWheelComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, UVehicleSimWheelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimWheelComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehicleSimWheelComponent)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVehicleSimWheelComponent;

// ********** End Class UVehicleSimWheelComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimWheelComponent_h

// ********** Begin Enum EWheelAxisType ************************************************************
#define FOREACH_ENUM_EWHEELAXISTYPE(op) \
	op(EWheelAxisType::X) \
	op(EWheelAxisType::Y) 

enum class EWheelAxisType : uint8;
template<> struct TIsUEnumClass<EWheelAxisType> { enum { Value = true }; };
template<> CHAOSMODULARVEHICLEENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWheelAxisType>();
// ********** End Enum EWheelAxisType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
