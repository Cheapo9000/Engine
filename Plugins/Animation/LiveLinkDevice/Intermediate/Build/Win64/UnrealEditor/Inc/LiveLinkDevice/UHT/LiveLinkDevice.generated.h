// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkDevice.h"

#ifdef LIVELINKDEVICE_LiveLinkDevice_generated_h
#error "LiveLinkDevice.generated.h already included, missing '#pragma once' in LiveLinkDevice.h"
#endif
#define LIVELINKDEVICE_LiveLinkDevice_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDeviceHealth : uint8;

// ********** Begin Class ULiveLinkDeviceSettings **************************************************
struct Z_Construct_UClass_ULiveLinkDeviceSettings_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDeviceSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkDeviceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDeviceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDeviceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDeviceSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDeviceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDeviceSettings)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkDeviceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDeviceSettings(ULiveLinkDeviceSettings&&) = delete; \
	ULiveLinkDeviceSettings(const ULiveLinkDeviceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDeviceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDeviceSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkDeviceSettings) \
	NO_API virtual ~ULiveLinkDeviceSettings();


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_26_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDeviceSettings;

// ********** End Class ULiveLinkDeviceSettings ****************************************************

// ********** Begin Class ULiveLinkDevice **********************************************************
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHealthText); \
	DECLARE_FUNCTION(execGetDeviceHealth); \
	DECLARE_FUNCTION(execGetDisplayName);


struct Z_Construct_UClass_ULiveLinkDevice_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDevice_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkDevice(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDevice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDevice_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDevice, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDevice_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDevice)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDevice(ULiveLinkDevice&&) = delete; \
	ULiveLinkDevice(const ULiveLinkDevice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDevice); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkDevice) \
	NO_API virtual ~ULiveLinkDevice();


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_36_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDevice;

// ********** End Class ULiveLinkDevice ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDevice_h

// ********** Begin Enum EDeviceHealth *************************************************************
#define FOREACH_ENUM_EDEVICEHEALTH(op) \
	op(EDeviceHealth::Nominal) \
	op(EDeviceHealth::Good) \
	op(EDeviceHealth::Info) \
	op(EDeviceHealth::Warning) \
	op(EDeviceHealth::Error) 

enum class EDeviceHealth : uint8;
template<> struct TIsUEnumClass<EDeviceHealth> { enum { Value = true }; };
template<> LIVELINKDEVICE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDeviceHealth>();
// ********** End Enum EDeviceHealth ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
