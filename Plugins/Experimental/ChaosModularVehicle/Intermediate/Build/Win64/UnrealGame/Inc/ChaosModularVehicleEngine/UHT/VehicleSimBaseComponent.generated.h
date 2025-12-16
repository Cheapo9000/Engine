// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/VehicleSimBaseComponent.h"

#ifdef CHAOSMODULARVEHICLEENGINE_VehicleSimBaseComponent_generated_h
#error "VehicleSimBaseComponent.generated.h already included, missing '#pragma once' in VehicleSimBaseComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_VehicleSimBaseComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UVehicleSimBaseComponentInterface ************************************
struct Z_Construct_UClass_UVehicleSimBaseComponentInterface_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_UVehicleSimBaseComponentInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMODULARVEHICLEENGINE_API UVehicleSimBaseComponentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVehicleSimBaseComponentInterface(UVehicleSimBaseComponentInterface&&) = delete; \
	UVehicleSimBaseComponentInterface(const UVehicleSimBaseComponentInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, UVehicleSimBaseComponentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimBaseComponentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleSimBaseComponentInterface) \
	virtual ~UVehicleSimBaseComponentInterface() = default;


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_46_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVehicleSimBaseComponentInterface(); \
	friend struct ::Z_Construct_UClass_UVehicleSimBaseComponentInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_UVehicleSimBaseComponentInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UVehicleSimBaseComponentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_UVehicleSimBaseComponentInterface_NoRegister) \
	DECLARE_SERIALIZER(UVehicleSimBaseComponentInterface)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_46_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_46_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVehicleSimBaseComponentInterface() {} \
public: \
	typedef UVehicleSimBaseComponentInterface UClassType; \
	typedef IVehicleSimBaseComponentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_43_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVehicleSimBaseComponentInterface;

// ********** End Interface UVehicleSimBaseComponentInterface **************************************

// ********** Begin Class UVehicleSimBaseComponent *************************************************
struct Z_Construct_UClass_UVehicleSimBaseComponent_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_UVehicleSimBaseComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimBaseComponent(); \
	friend struct ::Z_Construct_UClass_UVehicleSimBaseComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_UVehicleSimBaseComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVehicleSimBaseComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_UVehicleSimBaseComponent_NoRegister) \
	DECLARE_SERIALIZER(UVehicleSimBaseComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVehicleSimBaseComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMODULARVEHICLEENGINE_API UVehicleSimBaseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVehicleSimBaseComponent(UVehicleSimBaseComponent&&) = delete; \
	UVehicleSimBaseComponent(const UVehicleSimBaseComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, UVehicleSimBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimBaseComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleSimBaseComponent) \
	CHAOSMODULARVEHICLEENGINE_API virtual ~UVehicleSimBaseComponent();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_72_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVehicleSimBaseComponent;

// ********** End Class UVehicleSimBaseComponent ***************************************************

// ********** Begin Class UVehicleSimBaseSceneComponent ********************************************
struct Z_Construct_UClass_UVehicleSimBaseSceneComponent_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_UVehicleSimBaseSceneComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSimBaseSceneComponent(); \
	friend struct ::Z_Construct_UClass_UVehicleSimBaseSceneComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_UVehicleSimBaseSceneComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVehicleSimBaseSceneComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_UVehicleSimBaseSceneComponent_NoRegister) \
	DECLARE_SERIALIZER(UVehicleSimBaseSceneComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVehicleSimBaseSceneComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMODULARVEHICLEENGINE_API UVehicleSimBaseSceneComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVehicleSimBaseSceneComponent(UVehicleSimBaseSceneComponent&&) = delete; \
	UVehicleSimBaseSceneComponent(const UVehicleSimBaseSceneComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, UVehicleSimBaseSceneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSimBaseSceneComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleSimBaseSceneComponent) \
	CHAOSMODULARVEHICLEENGINE_API virtual ~UVehicleSimBaseSceneComponent();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_111_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_116_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVehicleSimBaseSceneComponent;

// ********** End Class UVehicleSimBaseSceneComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_VehicleSimBaseComponent_h

// ********** Begin Enum ESimModuleType ************************************************************
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
template<> CHAOSMODULARVEHICLEENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESimModuleType>();
// ********** End Enum ESimModuleType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
