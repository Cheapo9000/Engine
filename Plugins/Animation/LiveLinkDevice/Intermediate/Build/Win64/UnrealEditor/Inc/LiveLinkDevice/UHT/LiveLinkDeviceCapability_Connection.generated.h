// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkDeviceCapability_Connection.h"

#ifdef LIVELINKDEVICE_LiveLinkDeviceCapability_Connection_generated_h
#error "LiveLinkDeviceCapability_Connection.generated.h already included, missing '#pragma once' in LiveLinkDeviceCapability_Connection.h"
#endif
#define LIVELINKDEVICE_LiveLinkDeviceCapability_Connection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConnectionDelegate;
enum class ELiveLinkDeviceConnectionStatus : uint8;

// ********** Begin Delegate FDeviceConnectionStatusChangedDynamic *********************************
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_61_DELEGATE \
LIVELINKDEVICE_API void FDeviceConnectionStatusChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& DeviceConnectionStatusChangedDynamic, ELiveLinkDeviceConnectionStatus InNewStatus);


// ********** End Delegate FDeviceConnectionStatusChangedDynamic ***********************************

// ********** Begin Class UConnectionDelegate ******************************************************
struct Z_Construct_UClass_UConnectionDelegate_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_UConnectionDelegate_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConnectionDelegate(); \
	friend struct ::Z_Construct_UClass_UConnectionDelegate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_UConnectionDelegate_NoRegister(); \
public: \
	DECLARE_CLASS2(UConnectionDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_UConnectionDelegate_NoRegister) \
	DECLARE_SERIALIZER(UConnectionDelegate)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConnectionDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConnectionDelegate(UConnectionDelegate&&) = delete; \
	UConnectionDelegate(const UConnectionDelegate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConnectionDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectionDelegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnectionDelegate) \
	NO_API virtual ~UConnectionDelegate();


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_64_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConnectionDelegate;

// ********** End Class UConnectionDelegate ********************************************************

// ********** Begin Interface ULiveLinkDeviceCapability_Connection *********************************
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetConnectionDelegate); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execSetHardwareId); \
	DECLARE_FUNCTION(execCanSetHardwareId); \
	DECLARE_FUNCTION(execGetHardwareId); \
	DECLARE_FUNCTION(execGetConnectionStatus);


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULiveLinkDeviceCapability_Connection_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDeviceCapability_Connection_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDeviceCapability_Connection(ULiveLinkDeviceCapability_Connection&&) = delete; \
	ULiveLinkDeviceCapability_Connection(const ULiveLinkDeviceCapability_Connection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDeviceCapability_Connection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDeviceCapability_Connection); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkDeviceCapability_Connection) \
	virtual ~ULiveLinkDeviceCapability_Connection() = default;


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULiveLinkDeviceCapability_Connection(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDeviceCapability_Connection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDeviceCapability_Connection_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDeviceCapability_Connection, ULiveLinkDeviceCapability, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDeviceCapability_Connection_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDeviceCapability_Connection)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILiveLinkDeviceCapability_Connection() {} \
public: \
	typedef ULiveLinkDeviceCapability_Connection UClassType; \
	typedef ILiveLinkDeviceCapability_Connection ThisClass; \
	static bool Execute_CanSetHardwareId(UObject* O); \
	static bool Execute_Connect(UObject* O); \
	static bool Execute_Disconnect(UObject* O); \
	static UConnectionDelegate* Execute_GetConnectionDelegate(UObject* O); \
	static ELiveLinkDeviceConnectionStatus Execute_GetConnectionStatus(const UObject* O); \
	static FString Execute_GetHardwareId(const UObject* O); \
	static bool Execute_SetHardwareId(UObject* O, const FString& HardwareID); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_21_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDeviceCapability_Connection;

// ********** End Interface ULiveLinkDeviceCapability_Connection ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Connection_h

// ********** Begin Enum ELiveLinkDeviceConnectionStatus *******************************************
#define FOREACH_ENUM_ELIVELINKDEVICECONNECTIONSTATUS(op) \
	op(ELiveLinkDeviceConnectionStatus::Disconnected) \
	op(ELiveLinkDeviceConnectionStatus::Connecting) \
	op(ELiveLinkDeviceConnectionStatus::Connected) \
	op(ELiveLinkDeviceConnectionStatus::Disconnecting) 

enum class ELiveLinkDeviceConnectionStatus : uint8;
template<> struct TIsUEnumClass<ELiveLinkDeviceConnectionStatus> { enum { Value = true }; };
template<> LIVELINKDEVICE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkDeviceConnectionStatus>();
// ********** End Enum ELiveLinkDeviceConnectionStatus *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
