// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocationServicesBPLibrary.h"

#ifdef LOCATIONSERVICESBPLIBRARY_LocationServicesBPLibrary_generated_h
#error "LocationServicesBPLibrary.generated.h already included, missing '#pragma once' in LocationServicesBPLibrary.h"
#endif
#define LOCATIONSERVICESBPLIBRARY_LocationServicesBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULocationServicesImpl;
enum class ELocationAccuracy : uint8;
struct FLocationServicesData;

// ********** Begin ScriptStruct FLocationServicesData *********************************************
struct Z_Construct_UScriptStruct_FLocationServicesData_Statics;
#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLocationServicesData_Statics; \
	LOCATIONSERVICESBPLIBRARY_API static class UScriptStruct* StaticStruct();


struct FLocationServicesData;
// ********** End ScriptStruct FLocationServicesData ***********************************************

// ********** Begin Delegate FLocationServicesData_OnLocationChanged *******************************
#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_71_DELEGATE \
LOCATIONSERVICESBPLIBRARY_API void FLocationServicesData_OnLocationChanged_DelegateWrapper(const FMulticastScriptDelegate& LocationServicesData_OnLocationChanged, FLocationServicesData LocationData);


// ********** End Delegate FLocationServicesData_OnLocationChanged *********************************

// ********** Begin Class ULocationServices ********************************************************
#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_79_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetLocationServicesImpl); \
	DECLARE_FUNCTION(execIsLocationAccuracyAvailable); \
	DECLARE_FUNCTION(execAreLocationServicesEnabled); \
	DECLARE_FUNCTION(execGetLastKnownLocation); \
	DECLARE_FUNCTION(execStopLocationServices); \
	DECLARE_FUNCTION(execStartLocationServices); \
	DECLARE_FUNCTION(execInitLocationServices);


struct Z_Construct_UClass_ULocationServices_Statics;
LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServices_NoRegister();

#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_79_INCLASS \
private: \
	static void StaticRegisterNativesULocationServices(); \
	friend struct ::Z_Construct_UClass_ULocationServices_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOCATIONSERVICESBPLIBRARY_API UClass* ::Z_Construct_UClass_ULocationServices_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocationServices, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LocationServicesBPLibrary"), Z_Construct_UClass_ULocationServices_NoRegister) \
	DECLARE_SERIALIZER(ULocationServices)


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOCATIONSERVICESBPLIBRARY_API ULocationServices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationServices) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOCATIONSERVICESBPLIBRARY_API, ULocationServices); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationServices); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocationServices(ULocationServices&&) = delete; \
	ULocationServices(const ULocationServices&) = delete; \
	LOCATIONSERVICESBPLIBRARY_API virtual ~ULocationServices();


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_75_PROLOG
#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_79_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_79_INCLASS \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocationServices;

// ********** End Class ULocationServices **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h

// ********** Begin Enum ELocationAccuracy *********************************************************
#define FOREACH_ENUM_ELOCATIONACCURACY(op) \
	op(ELocationAccuracy::LA_ThreeKilometers) \
	op(ELocationAccuracy::LA_OneKilometer) \
	op(ELocationAccuracy::LA_HundredMeters) \
	op(ELocationAccuracy::LA_TenMeters) \
	op(ELocationAccuracy::LA_Best) \
	op(ELocationAccuracy::LA_Navigation) 

enum class ELocationAccuracy : uint8;
template<> struct TIsUEnumClass<ELocationAccuracy> { enum { Value = true }; };
template<> LOCATIONSERVICESBPLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocationAccuracy>();
// ********** End Enum ELocationAccuracy ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
