// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/VehicleSimBaseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSMODULARVEHICLEENGINE_VehicleSimBaseComponent_generated_h
#error "VehicleSimBaseComponent.generated.h already included, missing '#pragma once' in VehicleSimBaseComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_VehicleSimBaseComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMODULARVEHICLEENGINE_API UVehicleSimBaseComponentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVehicleSimBaseComponentInterface(UVehicleSimBaseComponentInterface&&); \
	UVehicleSimBaseComponentInterface(const UVehicleSimBaseComponentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, UVehicleSimBaseComponentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimBaseComponentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleSimBaseComponentInterface) \
	CHAOSMODULARVEHICLEENGINE_API virtual ~UVehicleSimBaseComponentInterface();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_43_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVehicleSimBaseComponentInterface(); \
	friend struct Z_Construct_UClass_UVehicleSimBaseComponentInterface_Statics; \
public: \
	DECLARE_CLASS(UVehicleSimBaseComponentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), CHAOSMODULARVEHICLEENGINE_API) \
	DECLARE_SERIALIZER(UVehicleSimBaseComponentInterface)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_43_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_43_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_43_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVehicleSimBaseComponentInterface() {} \
public: \
	typedef UVehicleSimBaseComponentInterface UClassType; \
	typedef IVehicleSimBaseComponentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_43_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class UVehicleSimBaseComponentInterface>();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimBaseComponent(); \
	friend struct Z_Construct_UClass_UVehicleSimBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UVehicleSimBaseComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(UVehicleSimBaseComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVehicleSimBaseComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleSimBaseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVehicleSimBaseComponent(UVehicleSimBaseComponent&&); \
	UVehicleSimBaseComponent(const UVehicleSimBaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleSimBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimBaseComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleSimBaseComponent) \
	NO_API virtual ~UVehicleSimBaseComponent();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_65_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class UVehicleSimBaseComponent>();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimBaseSceneComponent(); \
	friend struct Z_Construct_UClass_UVehicleSimBaseSceneComponent_Statics; \
public: \
	DECLARE_CLASS(UVehicleSimBaseSceneComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(UVehicleSimBaseSceneComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVehicleSimBaseSceneComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleSimBaseSceneComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVehicleSimBaseSceneComponent(UVehicleSimBaseSceneComponent&&); \
	UVehicleSimBaseSceneComponent(const UVehicleSimBaseSceneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleSimBaseSceneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimBaseSceneComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleSimBaseSceneComponent) \
	NO_API virtual ~UVehicleSimBaseSceneComponent();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_103_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class UVehicleSimBaseSceneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h


#define FOREACH_ENUM_ESIMMODULETYPE(op) \
	op(ESimModuleType::Undefined) \
	op(ESimModuleType::Chassis) \
	op(ESimModuleType::Thruster) \
	op(ESimModuleType::Aerofoil) \
	op(ESimModuleType::Wheel) \
	op(ESimModuleType::Suspension) \
	op(ESimModuleType::Axle) \
	op(ESimModuleType::Transmission) \
	op(ESimModuleType::Engine) \
	op(ESimModuleType::Motor) \
	op(ESimModuleType::Clutch) \
	op(ESimModuleType::Wing) \
	op(ESimModuleType::Rudder) \
	op(ESimModuleType::Elevator) \
	op(ESimModuleType::Propeller) \
	op(ESimModuleType::Balloon) 

enum class ESimModuleType : uint8;
template<> struct TIsUEnumClass<ESimModuleType> { enum { Value = true }; };
template<> CHAOSMODULARVEHICLEENGINE_API UEnum* StaticEnum<ESimModuleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
