// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyEventInterface.h"

#ifdef BUOYANCY_BuoyancyEventInterface_generated_h
#error "BuoyancyEventInterface.generated.h already included, missing '#pragma once' in BuoyancyEventInterface.h"
#endif
#define BUOYANCY_BuoyancyEventInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaterBody;
class UPrimitiveComponent;

// ********** Begin Interface UBuoyancyEventInterface **********************************************
#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UBuoyancyEventInterface_Statics;
BUOYANCY_API UClass* Z_Construct_UClass_UBuoyancyEventInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUOYANCY_API UBuoyancyEventInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuoyancyEventInterface(UBuoyancyEventInterface&&) = delete; \
	UBuoyancyEventInterface(const UBuoyancyEventInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUOYANCY_API, UBuoyancyEventInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancyEventInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyancyEventInterface) \
	virtual ~UBuoyancyEventInterface() = default;


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBuoyancyEventInterface(); \
	friend struct ::Z_Construct_UClass_UBuoyancyEventInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BUOYANCY_API UClass* ::Z_Construct_UClass_UBuoyancyEventInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuoyancyEventInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Buoyancy"), Z_Construct_UClass_UBuoyancyEventInterface_NoRegister) \
	DECLARE_SERIALIZER(UBuoyancyEventInterface)


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBuoyancyEventInterface() {} \
public: \
	typedef UBuoyancyEventInterface UClassType; \
	typedef IBuoyancyEventInterface ThisClass; \
	BUOYANCY_API static void Execute_OnSurfaceTouchBegin(UObject* O, AWaterBody* WaterBodyActor, UPrimitiveComponent* WaterComponent, UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector const& SubmergedCenterOfMass, FVector const& SubmergedVelocity); \
	BUOYANCY_API static void Execute_OnSurfaceTouchEnd(UObject* O, AWaterBody* WaterBodyActor, UPrimitiveComponent* WaterComponent, UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector const& SubmergedCenterOfMass, FVector const& SubmergedVelocity); \
	BUOYANCY_API static void Execute_OnSurfaceTouching(UObject* O, AWaterBody* WaterBodyActor, UPrimitiveComponent* WaterComponent, UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector const& SubmergedCenterOfMass, FVector const& SubmergedVelocity); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuoyancyEventInterface;

// ********** End Interface UBuoyancyEventInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
