// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlDMXUserData.h"

#ifdef REMOTECONTROLPROTOCOLDMX_RemoteControlDMXUserData_generated_h
#error "RemoteControlDMXUserData.generated.h already included, missing '#pragma once' in RemoteControlDMXUserData.h"
#endif
#define REMOTECONTROLPROTOCOLDMX_RemoteControlDMXUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URemoteControlDMXUserData ************************************************
struct Z_Construct_UClass_URemoteControlDMXUserData_Statics;
REMOTECONTROLPROTOCOLDMX_API UClass* Z_Construct_UClass_URemoteControlDMXUserData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_RemoteControlDMXUserData_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlDMXUserData(); \
	friend struct ::Z_Construct_UClass_URemoteControlDMXUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLPROTOCOLDMX_API UClass* ::Z_Construct_UClass_URemoteControlDMXUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlDMXUserData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlProtocolDMX"), Z_Construct_UClass_URemoteControlDMXUserData_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlDMXUserData)


#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_RemoteControlDMXUserData_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlDMXUserData(URemoteControlDMXUserData&&) = delete; \
	URemoteControlDMXUserData(const URemoteControlDMXUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlDMXUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlDMXUserData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteControlDMXUserData) \
	NO_API virtual ~URemoteControlDMXUserData();


#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_RemoteControlDMXUserData_h_29_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_RemoteControlDMXUserData_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_RemoteControlDMXUserData_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_RemoteControlDMXUserData_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlDMXUserData;

// ********** End Class URemoteControlDMXUserData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_RemoteControlDMXUserData_h

// ********** Begin Enum ERemoteControlDMXPatchGroupMode *******************************************
#define FOREACH_ENUM_EREMOTECONTROLDMXPATCHGROUPMODE(op) \
	op(ERemoteControlDMXPatchGroupMode::GroupByProperty) \
	op(ERemoteControlDMXPatchGroupMode::GroupByOwner) 

enum class ERemoteControlDMXPatchGroupMode : uint8;
template<> struct TIsUEnumClass<ERemoteControlDMXPatchGroupMode> { enum { Value = true }; };
template<> REMOTECONTROLPROTOCOLDMX_NON_ATTRIBUTED_API UEnum* StaticEnum<ERemoteControlDMXPatchGroupMode>();
// ********** End Enum ERemoteControlDMXPatchGroupMode *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
